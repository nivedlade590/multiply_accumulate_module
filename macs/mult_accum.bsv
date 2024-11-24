package mult_accum;

	interface Counter;
		method Action get_A( Bit#(16) a);
		method Action get_B( Bit#(16) b);
		method Action get_C( Bit#(32) c);
		method Action get_select( Bit#(1) s);
		method ActionValue #(Bit#(32)) result();
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
/*
function Bit#(32) float_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);

//multiplication
	a=16'b0011111110000000;
	b=16'b0011111110000000;
	c=32'b00111111111111110000000000000000;
	Bit#(32) a32 = {a,16'b0};	//a_extendedto_fp32
	Bit#(32) b32 = {b,16'b0};	//b_extendedto_fp32
	Bit#(32) mult_result = 32'b0;
	Bit#(32) add_result = 32'b0;
	
	//sign-bit
	
	mult_result[31] = a32[31] ^ b32[31];
	
	//exponent - adding two 8-bit - inline ripple carry adder (Note: ignoring the edge case of carry out bit being 1- didn't handle it, so carry only 8-bit instead of 9-bit, handled by the if case in the for loop)
	
	mult_result[30:23] = ripple_adder_8bit(a32[30:23],b32[30:23]);
	mult_result[30:23] = ripple_adder_8bit(mult_result[30:23],8'b10000001); //-127 bias
	
	//mantissa
	
	//extending mantissas to the size of product of them both
	
	Bit#(48) a_mantissa = {24'b0,1'b1,a32[22:0]}; //added 0's in front to facilitate type during addition
	Bit#(48) b_mantissa = {24'b0,1'b1,b32[22:0]}; //added 0's in front to facilitate type during addition
	Bit#(48) mantissa_result = 48'b0;
	
	for ( Integer i=0 ; i<24 ; i = i+1) begin
		if (b_mantissa[i]==1) begin
			mantissa_result=ripple_adder_48bit(mantissa_result,(a_mantissa << i));
		end
	end
	
	//after multiplying leading two bits will be before the point having values 1 or 2 or 3(0 not possible because always multipplying 1.f and 1.f) 
	
	//In case leading bit is 1 means 2 or 3 before the point (binary 10 or 11)
	
	if ( mantissa_result[47] == 1) begin
		//removed the leading 1, remove this line if further calc need to add 1 again, or else this is fp32 format
		mantissa_result = mantissa_result << 1;
		mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1); //increment exponent by 1
	end 
	
	//now leading bit already 0, value=1 case is considered
	else begin
		//left shift by 1 if needed 1 bit in further calculations
		mantissa_result = mantissa_result << 2;//removed leading 01(2 bits) 	
	end
	
//addition
	
	Bit#(8) expDiff;
	Bit#(8) expA = mult_result[30:23];
	Bit#(8) expB = c[30:23];
	Bit#(8) add_exp_result=8'b0;
	Bit#(48) shiftedMantA, shiftedMantB;
	
	if (expA > expB) begin
		expDiff = expA - expB;
		shiftedMantA = mantissa_result;
		shiftedMantB = {1'b0,c[22:0],24'b0} >> expDiff;
	end else begin
		expDiff = expB - expA;
		shiftedMantA = mantissa_result >> expDiff;
		shiftedMantB = {1'b0,c[22:0],24'b0};
	end
	
	Bit#(48) add_mant_Result;
	if (mult_result[31] == c[31]) begin
		add_mant_Result = ripple_adder_48bit(shiftedMantA,shiftedMantB);
	end else begin
	//implement signed to 2s complimentary conversion here,should work for now
		add_mant_Result = (shiftedMantA > shiftedMantB) ? 
					(shiftedMantA - shiftedMantB) : 
					(shiftedMantB - shiftedMantA);
	end
	
	if ( add_mant_Result[47]==1 ) begin
		//removed the leading 1, remove this line if further calc need to add 1 again, or else this is fp32 format
		add_mant_Result = add_mant_Result << 1;
		add_exp_result = ripple_adder_8bit(expA > expB ? expA : expB, 8'b1); //increment exponent by 1
	end 
	
	//now leading bit already 0, value=1 case is considered
	else begin
		//left shift by 1 if needed 1 bit in further calculations
		add_mant_Result = add_mant_Result << 2;//removed leading 01(2 bits) 	
	end
	
	
//rounding based on round to nearest
	//if condition meaning= !(all bits on right side of add_result[0] are 0)
	if( add_mant_Result[24:0] > 0) begin
	//add_mant_Result[23] == 0 means nearest even number is add_mant_Result[47:25] else the number plus 1
		if( add_mant_Result[23] != 0) begin
			add_mant_Result=ripple_adder_48bit({add_mant_Result[47:25],25'b0},{22'b0,1'b0,25'b0});
		end
	end
	
	
//final result culmination

	add_result[31] = (shiftedMantA > shiftedMantB) ? mult_result[31] : c[31];
	add_result[30:23] = add_exp_result;
	add_result[22:0] = add_mant_Result[47:25];
	return add_result;//{mult_result[31:23],mantissa_result[22:0]};
endfunction
*/

function Bit#(32) float_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);

//multiplication
	//a=16'b0101001100101110;
	//b=16'b0101010100111100;
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
	Bit#(9) sum={1'b0,mult_result[22:16],1'b0};
	//rounding based on round to nearest
	//if condition meaning= !(all bits on right side of add_result[0] are 0)
	if( mult_result[15:0] > 0) begin
	//add_mant_Result[23] == 0 means nearest even number is add_mant_Result[47:25] else the number plus 1
		if( mult_result[15] != 0) begin
			sum=ripple_adder_9bit(sum,{7'b0,1'b1,1'b0});
		end
		if( sum[8]==1) mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1); //overflow condition increase exponent
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
	//correctly works until here**********************************
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

	
//******************************** top module ***********************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	module mac(Counter);
	
		Reg#( Bit#(16)) rg_A <- mkReg(0);
		Reg#( Bit#(16)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		Reg#( Bit#(1)) rg_select <- mkReg(0);
		Reg#( Bit#(32)) rg_out_int <- mkReg(0);
		Reg#( Bit#(32)) rg_out_fp <- mkReg(0);
		
		//rule needed incase continuous inputs and enable and all signals are there , rules helps in firing when signals are ok
		rule rl_mac;
			rg_out_int <= int_mac_function( rg_A, rg_B, rg_C);
			rg_out_fp <= float_mac_function( rg_A, rg_B, rg_C);
		endrule : rl_mac
		
		method Action get_A( Bit#(16) a);
			rg_A <= a;
		endmethod
		
		method Action get_B( Bit#(16) b);
			rg_B <= b;
		endmethod
		
		method Action get_C( Bit#(32) c);
			rg_C <= c;
		endmethod
		
		method Action get_select( Bit#(1) s);
			rg_select <= s;
		endmethod
		
		method ActionValue #(Bit#(32)) result();
			if (rg_select == 0) begin
				return rg_out_int;
			end else begin
				return rg_out_fp;
			end
		endmethod
		
	endmodule : mac
	
endpackage : mult_accum
