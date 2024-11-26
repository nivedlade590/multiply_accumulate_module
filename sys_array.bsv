package sys_array;

import Vector::*;

interface Counter;
		method Action get_row( Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
		method Action get_column( Bit#(16) b1, Bit#(16) b2, Bit#(16) b3, Bit#(16) b4);
		method Action get_s( Bit#(1) select);
		method ActionValue #(Bit#(32)) out1();
		method ActionValue #(Bit#(32)) out2();
		method ActionValue #(Bit#(32)) out3();
		method ActionValue #(Bit#(32)) out4();
	endinterface : Counter

//******************************** int functions *********************************************************************************
//********************************************************************************************************************************

function Bit#(8) ripple_adder_8bit( Bit#(8) x, Bit#(8) y);	//for adding exponents 
	Bit#(8) sum = 8'b0;
	Bit#(8) carry = 8'b0;
	
	for ( Integer i=0 ; i<8 ; i = i+1) begin
		sum[i] = x[i] ^ y[i] ^ carry[i];
		if(i!=7) begin
			carry[i+1] = ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
		end 
	end		
	
	return sum;	
	
endfunction

//adding 16 bit cause also added after multiply which is 16 bit
function Bit#(16) ripple_adder_16bit( Bit#(16) x, Bit#(16) y);
	Bit#(16) sum = 16'b0;
	Bit#(16) carry = 16'b0;
	
	for ( Integer i=0 ; i<16 ; i = i+1) begin
		sum[i] = x[i] ^ y[i] ^ carry[i];
		if(i!=15) begin
			carry[i+1] = ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
		end 
	end		
	
	return sum;	
	
endfunction

//adding 32 bit
function Bit#(32) ripple_adder_32bit( Bit#(32) x, Bit#(32) y);
	Bit#(32) sum = 32'b0;
	Bit#(32) carry = 32'b0;
	
	for ( Integer i=0 ; i<32 ; i = i+1) begin
		sum[i]	  = x[i] ^ y[i] ^ carry[i];
		if(i!=31) begin
			carry[i+1]= ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
		end 
	end		
	
	return sum;	
	
endfunction

function Bit#(32) int_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);
	Bit#(16) mult_result = 16'b0;
	Bit#(32) add_result = 32'b0;
	Bit#(32) mult_result32 = 32'b0;
	
	a=signExtend(a[7:0]);
	b=signExtend(b[7:0]);
	
	for ( Integer i=0 ; i<16 ; i = i+1) begin
		if (b[i]==1) begin
			mult_result=ripple_adder_16bit(mult_result,(a << i));
		end
	end
	
	mult_result32 = signExtend(mult_result);
	
	add_result=ripple_adder_32bit(mult_result32,c);
	
	return add_result;
	
endfunction : int_mac_function
		

//******************************** fp32 functions ********************************************************************************
//********************************************************************************************************************************

function Bit#(9) ripple_adder_9bit( Bit#(9) x, Bit#(9) y);	//for adding in multiplication 2 23 bit mantissa, 1 in 24th bit 
	Bit#(9) sum = 9'b0;
	Bit#(9) carry = 9'b0;
	
	for ( Integer i=0 ; i<9 ; i = i+1) begin
		sum[i] = x[i] ^ y[i] ^ carry[i];
		if(i!=8) begin
			carry[i+1] = ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
		end 
	end		
	
	return sum;	
	
endfunction

function Bit#(25) ripple_adder_25bit( Bit#(25) x, Bit#(25) y);	//for adding in multiplication 2 23 bit mantissa, 1 in 24th bit 
	Bit#(25) sum = 25'b0;
	Bit#(25) carry = 25'b0;
	
	for ( Integer i=0 ; i<25 ; i = i+1) begin
		sum[i] = x[i] ^ y[i] ^ carry[i];
		if(i!=24) begin
			carry[i+1] = ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
		end 
	end		
	
	return sum;	
	
endfunction

function Bit#(32) float_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);

//multiplication
	//a=16'b0100110110110000;
	//b=16'b0100000100011100;
	//c=32'b00111111100000000000000000000000;
	Bit#(32) mult_result = 32'b0;
	Bit#(32) add_result = 32'b0;
	
	//sign-bit
	
	mult_result[31] = a[15] ^ b[15];
	
	//exponent - adding two 8-bit - inline ripple carry adder (Note: ignoring the edge case of carry out bit being 1- didn't handle it, so carry only 8-bit instead of 9-bit, handled by the if case in the for loop)
	
	mult_result[30:23] = ripple_adder_8bit(a[14:7],b[14:7]);
	mult_result[30:23] = ripple_adder_8bit(mult_result[30:23],8'b10000001); //-127 bias
	
	//mantissa
	
	//extending mantissas to the size of product of them both
	
	Bit#(16) a_mantissa = {8'b0,1'b1,a[6:0]}; //added 1 in front, removed during representation
	Bit#(16) b_mantissa = {8'b0,1'b1,b[6:0]}; //added 1 in front, removed during representation
	Bit#(16) mantissa_result = 16'b0;
	
	for ( Integer i=0 ; i<8 ; i = i+1) begin
		if (b_mantissa[i]==1) begin
			mantissa_result=ripple_adder_16bit(mantissa_result,(a_mantissa << i));
		end
	end
	
	//after multiplying leading two bits will be before the point having values 1 or 2 or 3(0 not possible because always multipplying 1.f and 1.f) 
	
	//In case leading bit is 1 means 2 or 3 before the point (binary 10 or 11)
	if ( mantissa_result[15] == 1) begin
		//removed the leading 1, remove this line if further calc need to add 1 again, or else this is fp32 format
		mantissa_result = mantissa_result << 1;
		mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1); //increment exponent by 1
	end 
	
	//now leading bit already 0, value=1 case is considered
	else begin
		//left shift by 1 if needed 1 bit in further calculations
		mantissa_result = mantissa_result << 2;//removed leading 01(2 bits) 	
	end
	
	mult_result[22:0]={mantissa_result,7'b0};
	
	//rounding
	Bit#(9) sum={1'b0,mult_result[22:16],1'b0};
	if( mult_result[15] != 0) begin
		if (mult_result[14] == 1 || mult_result[13:0] > 0) begin
			sum=ripple_adder_9bit(sum,{7'b0,1'b1,1'b0});
			if( sum[8]==1) mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1);
		end else begin
			if ( mult_result[16] != 0 ) begin
				sum=ripple_adder_9bit(sum,{7'b0,1'b1,1'b0});
				if( sum[8]==1) mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1);
			end
		end
	end
	mult_result[22:16]=sum[7:1];
	mult_result[15:0]=16'b0;
	
//addition
	
	Bit#(8) expDiff;
	Bit#(8) expA = mult_result[30:23];
	Bit#(8) expB = c[30:23];
	Bit#(8) add_exp_result=8'b0;
	Bit#(25) shiftedMantA, shiftedMantB;
	
	add_exp_result = expA > expB ? expA : expB;
	
	if (expA > expB) begin
		expDiff = expA - expB;
		shiftedMantA = {1'b0,1'b1,mult_result[22:0]};
		shiftedMantB = {1'b0,1'b1,c[22:0]} >> expDiff;
	end else begin
		expDiff = expB - expA;
		shiftedMantA = {1'b0,1'b1,mult_result[22:0]} >> expDiff;
		shiftedMantB = {1'b0,1'b1,c[22:0]};
	end
	
	Bit#(25) add_mant_Result;
	if (mult_result[31] == c[31]) begin
		add_mant_Result = ripple_adder_25bit(shiftedMantA,shiftedMantB);
	end else begin
	//implement signed to 2s complimentary conversion here,should work for now
		add_mant_Result = (shiftedMantA > shiftedMantB) ? 
					(shiftedMantA - shiftedMantB) : 
					(shiftedMantB - shiftedMantA);
	end
	
	if ( add_mant_Result[24]==1 ) begin
		//removed the leading 1, remove this line if further calc need to add 1 again, or else this is fp32 format
		add_mant_Result = add_mant_Result << 1;
		add_exp_result = ripple_adder_8bit(expA > expB ? expA : expB, 8'b1); //increment exponent by 1
	end 
	
	//now leading bit already 0, value=1 case is considered
	else begin
		//left shift by 1 if needed 1 bit in further calculations
		add_mant_Result = add_mant_Result << 2;//removed leading 01(2 bits) 	
	end
	
//final result culmination
	
	add_result[31] = (shiftedMantA > shiftedMantB) ? mult_result[31] : c[31];
	add_result[30:23] = add_exp_result;
	add_result[22:0] = add_mant_Result[24:2];
	
	return add_result;//{mult_result[31:23],mantissa_result[22:0]};
endfunction
	
//******************************** mac function **********************************************************************************
//********************************************************************************************************************************

function Bit#(32) mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c, Bit#(1) s);
	if( s == 0) begin
		return int_mac_function(a,b,c);
	end else begin
		return float_mac_function(a,b,c);
	end
	
endfunction
	
//******************************** top module ***********************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	module sys_array(Counter);
		
		Vector#(4, Vector#(4, Reg#(Bit#(16)))) a_reg <- replicateM(replicateM(mkReg(0)));
		Vector#(4, Vector#(4, Reg#(Bit#(16)))) b_reg <- replicateM(replicateM(mkReg(0)));
		Vector#(4, Vector#(4, Reg#(Bit#(32)))) c_reg <- replicateM(replicateM(mkReg(0)));
		Vector#(4, Reg#(Bit#(32))) out <- replicateM(mkReg(0));
		Reg#(Bit#(1)) s <- mkReg(0);
		
		Reg#(Bit#(16)) r1 <- mkReg(0);
		Reg#(Bit#(16)) r2 <- mkReg(0);
		Reg#(Bit#(16)) r3 <- mkReg(0);
		Reg#(Bit#(16)) r4 <- mkReg(0);
		
		Reg#(Bit#(16)) r5 <- mkReg(0);
		Reg#(Bit#(16)) r6 <- mkReg(0);
		Reg#(Bit#(16)) r7 <- mkReg(0);
		Reg#(Bit#(16)) r8 <- mkReg(0);
		
		Reg#(Bit#(2))  count <- mkReg(0);
		Reg#(Bit#(1)) trigger <- mkReg(0);
		
		rule rl_sys_1(trigger == 1'b0);
			count <= count+1;
			b_reg[0][0] <= r1;
			b_reg[0][1] <= r2;
			b_reg[0][2] <= r3;
			b_reg[0][3] <= r4;
			
			b_reg[1][0] <= b_reg[0][0];
			b_reg[1][1] <= b_reg[0][1];
			b_reg[1][2] <= b_reg[0][2];
			b_reg[1][3] <= b_reg[0][3];
			
			b_reg[2][0] <= b_reg[1][0];
			b_reg[2][1] <= b_reg[1][1];
			b_reg[2][2] <= b_reg[1][2];
			b_reg[2][3] <= b_reg[1][3];
			
			b_reg[3][0] <= b_reg[2][0];
			b_reg[3][1] <= b_reg[2][1];
			b_reg[3][2] <= b_reg[2][2];
			b_reg[3][3] <= b_reg[2][3];
			
			if (count[1:0]==2'b10) trigger<=1'b1;
			
		endrule : rl_sys_1
		
		rule rl_sys_2(trigger == 1'b1);
			a_reg[0][0] <= r5;
			a_reg[1][0] <= r6;
			a_reg[2][0] <= r7;
			a_reg[3][0] <= r8;
			
			a_reg[0][1] <= b_reg[0][0];
			a_reg[1][1] <= b_reg[1][0];
			a_reg[2][1] <= b_reg[2][0];
			a_reg[3][1] <= b_reg[3][0];
			
			a_reg[0][2] <= b_reg[0][1];
			a_reg[1][2] <= b_reg[1][1];
			a_reg[2][2] <= b_reg[2][1];
			a_reg[3][2] <= b_reg[3][1];
			
			a_reg[0][3] <= b_reg[0][2];
			a_reg[1][3] <= b_reg[1][2];
			a_reg[2][3] <= b_reg[2][2];
			a_reg[3][3] <= b_reg[3][2];
			
			
			/*every cycle make zeroes
			c_reg[0][0] <= 0;
			c_reg[0][1] <= 0;
			c_reg[0][2] <= 0;
			c_reg[0][3] <= 0;
			*/
			
			c_reg[1][0] <= mac_function(a_reg[0][0],b_reg[0][0],c_reg[0][0],s);
			c_reg[1][1] <= mac_function(a_reg[0][1],b_reg[0][1],c_reg[0][1],s);
			c_reg[1][2] <= mac_function(a_reg[0][2],b_reg[0][2],c_reg[0][2],s);
			c_reg[1][3] <= mac_function(a_reg[0][3],b_reg[0][3],c_reg[0][3],s);
			
			c_reg[2][0] <= mac_function(a_reg[1][0],b_reg[1][0],c_reg[1][0],s);
			c_reg[2][1] <= mac_function(a_reg[1][1],b_reg[1][1],c_reg[1][1],s);
			c_reg[2][2] <= mac_function(a_reg[1][2],b_reg[1][2],c_reg[1][2],s);
			c_reg[2][3] <= mac_function(a_reg[1][3],b_reg[1][3],c_reg[1][3],s);
			
			c_reg[3][0] <= mac_function(a_reg[2][0],b_reg[2][0],c_reg[2][0],s);
			c_reg[3][1] <= mac_function(a_reg[2][1],b_reg[2][1],c_reg[2][1],s);
			c_reg[3][2] <= mac_function(a_reg[2][2],b_reg[2][2],c_reg[2][2],s);
			c_reg[3][3] <= mac_function(a_reg[2][3],b_reg[2][3],c_reg[2][3],s);
			
			out[0] <= mac_function(a_reg[3][0],b_reg[3][0],c_reg[3][0],s);
			out[1] <= mac_function(a_reg[3][1],b_reg[3][1],c_reg[3][1],s);
			out[2] <= mac_function(a_reg[3][2],b_reg[3][2],c_reg[3][2],s);
			out[3] <= mac_function(a_reg[3][3],b_reg[3][3],c_reg[3][3],s);
		endrule : rl_sys_2
		
		method Action get_row( Bit#(16) a1, Bit#(16) a2, Bit#(16) a3, Bit#(16) a4);
			r1 <= a1;
			r2 <= a2;
			r3 <= a3;
			r4 <= a4;
		endmethod
		
		method Action get_column( Bit#(16) b1, Bit#(16) b2, Bit#(16) b3, Bit#(16) b4);
			r5 <= b1;
			r6 <= b2;
			r7 <= b3;
			r8 <= b4;
		endmethod
		
		method Action get_s( Bit#(1) select);
			s <= select;
		endmethod
		
		method ActionValue #(Bit#(32)) out1();
			return out[0];
		endmethod
		
		method ActionValue #(Bit#(32)) out2();
			return out[1];
		endmethod
		
		method ActionValue #(Bit#(32)) out3();
			return out[2];
		endmethod
		
		method ActionValue #(Bit#(32)) out4();
			return out[3];
		endmethod

	endmodule : sys_array
	
endpackage : sys_array
