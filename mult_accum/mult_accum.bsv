package mult_accum;

	interface Counter;
		method Action get_A( Bit#(16) a);
		method Action get_B( Bit#(16) b);
		method Action get_C( Bit#(32) c);
		method Action get_select( Bit#(1) s);
		method ActionValue #(Bit#(32)) result();
	endinterface : Counter

//******************************** int module ************************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	//Assumption:considering a,b have top 8-bits as 0, if they spoof us by having something other than that, we didn't handle it, like if there is other than 0, then final added value will be off - ( handled ) by putting zeroes explicitely
	
	module int32_MAC(Counter);
		Reg#( Bit#(16)) rg_A <- mkReg(0);
		Reg#( Bit#(16)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		//Reg#( Bit#(1)) rg_select <- mkReg(0);
		Reg#( Bit#(32)) rg_out <- mkReg(0);
		
		
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
		
		//two's compliment conversion of 8-bit signed int
		function Bit#(8) toTwosComplement_8(Bit#(8) x);
			// Check if the value is negative
			if (x[7] == 1) begin
				Bit#(8) p = ripple_adder_8bit( (~x),8'b1);
				return p;
			end else begin
				return x;
			end
		endfunction
		
		//two's compliment conversion of 32-bit signed int
		function Bit#(32) toTwosComplement_32(Bit#(32) x);
			// Check if the value is negative
			if (x[31] == 1) begin
				Bit#(32) p = ripple_adder_32bit( (~x),32'b1);
				return p;
			end else begin
				return x;
			end
		endfunction
		
		function Bit#(32) twosComplementToSignedBit_32(Bit#(32) x);
			// Check if the MSB (sign bit) is 1 (indicating a negative number)
			if (x[31] == 1) begin
				// Convert to positive magnitude by inverting bits and adding 1
				Bit#(32) p = ripple_adder_32bit( (~x),32'b1);
				// Set the signedValue to negative by setting the MSB manually
				p = (32'b1 << 31) | p;
				return p;
			end else begin
				return x;
			end
		endfunction
		
		//mult and add full
		function Bit#(32) int_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);
			Bit#(16) mult_result = 16'b0;
			Bit#(32) add_result = 32'b0;
			//making sure a,b have values in only 8-bit range
			a[15:8] = 8'b0;
			b[15:8] = 8'b0;
			
			//converting to two's compliment for addition and substraction
			a[7:0] = toTwosComplement_8(a[7:0]);
			b[7:0] = toTwosComplement_8(b[7:0]);
			c = toTwosComplement_32(c);
			
			for ( Integer i=0 ; i<8 ; i = i+1) begin
				if (b[i]==1) begin
					mult_result=ripple_adder_16bit(mult_result,(a << i));
				end
			end
			
			add_result=ripple_adder_32bit(zeroExtend(mult_result),c);
			
			return twosComplementToSignedBit_32(add_result);
			
		endfunction : int_mac_function
		
		method Action get_A( Bit#(16) a);
			rg_A <= a;
		endmethod
		
		method Action get_B( Bit#(16) b);
			rg_B <= b;
		endmethod
		
		method Action get_C( Bit#(32) c);
			rg_C <= c;
		endmethod
		/*
		method Action get_select( Bit#(1) s);
			rg_select <= s;
		endmethod
		*/
		method ActionValue #(Bit#(32)) result();
			rg_out <= int_mac_function( rg_A, rg_B, rg_C);
			return rg_out;
		endmethod
		
	endmodule : int32_MAC

//******************************** fp32 module ***********************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	module fp32_MAC(Counter);
		Reg#( Bit#(16)) rg_A <- mkReg(0);
		Reg#( Bit#(16)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		//Reg#( Bit#(1)) rg_select <- mkReg(0);
		Reg#( Bit#(32)) rg_out <- mkReg(0);
		
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
		
		function Bit#(48) ripple_adder_48bit( Bit#(48) x, Bit#(48) y);	//for adding in multiplication 2 23 bit mantissa, 1 in 24th bit 
			Bit#(48) sum = 48'b0;
			Bit#(48) carry = 48'b0;
			
			for ( Integer i=0 ; i<48 ; i = i+1) begin
				sum[i] = x[i] ^ y[i] ^ carry[i];
				if(i!=47) begin
					carry[i+1] = ( x[i] & y[i]) | (carry[i] & (x[i] ^ y[i]));
				end 
			end		
			
			return sum;	
			
		endfunction
		
		function Bit#(32) float_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);
		
		//multiplication
		
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
				mult_result[30:23] = ripple_adder_8bit(expA > expB ? expA : expB, 8'b1); //increment exponent by 1
			end 
			
			//now leading bit already 0, value=1 case is considered
			else begin
				//left shift by 1 if needed 1 bit in further calculations
				add_mant_Result = add_mant_Result << 2;//removed leading 01(2 bits) 	
			end
			
			/*		
		//rounding based on round to nearest
			//if condition meaning= !(all bits on right side of add_result[0] are 0)
			if( add_mant_Result[24:0] > 0) begin
				
			end
			*/
			
		//final result culmination

			add_result[31] = (shiftedMantA > shiftedMantB) ? mult_result[31] : c[31];
			add_result[30:23] = mult_result[30:23];
			add_result[22:0] = add_mant_Result[47:25];
			return add_result;
		endfunction
		
		method Action get_A( Bit#(16) a);
			rg_A <= a;
		endmethod
		
		method Action get_B( Bit#(16) b);
			rg_B <= b;
		endmethod
		
		method Action get_C( Bit#(32) c);
			rg_C <= c;
		endmethod
		/*
		method Action get_select( Bit#(1) s);
			rg_select <= s;
		endmethod
		*/
		method ActionValue #(Bit#(32)) result();
			rg_out <= float_mac_function( rg_A, rg_B, rg_C);
			return rg_out;
		endmethod
		
	endmodule : fp32_MAC
	
//******************************** top module ***********************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	module mac(Counter);
	
		Reg#( Bit#(1)) rg_select <- mkReg(0);
		
		Counter int_ifc <- int32_MAC;
		Counter float_ifc <- fp32_MAC;
		/*
		//rule needed incase continuous inputs and enable and all signals are there , rules helps in firing when signals are ok
		rule rl_int;
			let select = ifc.
			let out <- ifc.result();
		endrule : rl_int
		*/
		
		method Action get_A( Bit#(16) a);
			if ( rg_select == 0 ) begin
				int_ifc.get_A(a);
			end else begin
				float_ifc.get_A(a);
			end
		endmethod
		
		method Action get_B( Bit#(16) b);
			if ( rg_select == 0 ) begin
				int_ifc.get_B(b);
			end else begin
				float_ifc.get_B(b);
			end
		endmethod
		
		method Action get_C( Bit#(32) c);
			if ( rg_select == 0 ) begin
				int_ifc.get_C(c);
			end else begin
				float_ifc.get_C(c);
			end
		endmethod
		
		method Action get_select( Bit#(1) s);
			rg_select <= s;
		endmethod
		
		method ActionValue #(Bit#(32)) result();
			if ( rg_select == 0 ) begin
				let out_int <- int_ifc.result();
				return out_int;
			end else begin
				let out_float <- float_ifc.result();
				return out_float;
			end
		endmethod
		
	endmodule : mac
	
endpackage : mult_accum
