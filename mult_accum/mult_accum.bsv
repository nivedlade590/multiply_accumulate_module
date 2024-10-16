package mult_accum;

	interface Counter;
		method Action get_A( Bit#(16) a);
		method Action get_B( Bit#(16) b);
		method Action get_C( Bit#(32) c);
		method Action get_select( Bit#(1) s);
		method ActionValue#(Bit#(32)) result();
	endinterface : Counter

//******************************** int module ************************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	//Assumption:considering a,b have top 8-bits as 0, if they spoof us by having something other than that, we didn't handle it, like if there is other than 0, then final added value will be off - ( handled ) by putting zeroes explicitely
	
	module int32_MAC(Counter);
		Reg#( Bit#(16)) rg_A <- mkReg(0);
		Reg#( Bit#(16)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		Reg#( Bit#(1)) rg_select <- mkReg(0);
		Reg#( Bit#(32)) rg_out <- mkReg(0);

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
		
		//mult and add full
		function Bit#(32) int_mac_function( Bit#(16) a, Bit#(16) b, Bit#(32) c);
			Bit#(16) mult_result = 16'b0;
			Bit#(32) add_result = 32'b0;
			//making sure a,b have values in only 8-bit range
			a[15:8] = 8'b0;
			b[15:8] = 8'b0;
			
			for ( Integer i=0 ; i<8 ; i = i+1) begin
				if (b[i]==1) begin
					mult_result=ripple_adder_16bit(mult_result,(a << i));
				end
			end
			
			add_result=ripple_adder_32bit(zeroExtend(mult_result),c);
			
			return add_result;
		endfunction : int_mac_function
		
		rule rl_int;
			rg_out <= int_mac_function( rg_A, rg_B, rg_C);
		endrule : rl_int
		
		method Action get_A( Bit#(16) a);
			rg_A <= a;
		endmethod
		
		method Action get_B( Bit#(16) b);
			rg_B <= b;
		endmethod : get_B
		
		method Action get_C( Bit#(32) c);
			rg_C <= c;
		endmethod : get_C
		
		method Action get_select( Bit#(1) s);
			rg_select <= s;
		endmethod : get_select
		
		method ActionValue#(Bit#(32)) result();
			return rg_out;
		endmethod : result
		
		
	endmodule : int32_MAC
	
//******************************** fp32 module ***********************************************************************************
//********************************************************************************************************************************

	(* synthesize *)
	
	module fp32_MAC(Counter);
		Reg#( Bit#(16)) rg_A <- mkReg(0);
		Reg#( Bit#(16)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		Reg#( Bit#(1)) rg_select <- mkReg(0);
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
			
			//mantissa
			
			//extending mantissas to product of them both size
			
			Bit#(48) a_mantissa = {24'b0,1'b1,a[22:0]};
			Bit#(48) b_mantissa = {24'b0,1'b1,b[22:0]};
			Bit#(48) mantissa_result = 48'b0;
			
			for ( Integer i=0 ; i<24 ; i = i+1) begin
				if (b_mantissa[i]==1) begin
					mantissa_result=ripple_adder_48bit(mantissa_result,(a_mantissa << i));
				end
			end
			
			//filling the remaining 23 bits alias mantissa of mult_result into fp32 value
			
			mult_result[22:0] = mantissa_result[46:24];
			
			if ( mantissa_result[47] ) begin
				mult_result[22:0] = mantissa_result[47:25];
				mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b1); //increment exponent by 1
			end else if ( !mantissa_result[46] ) begin
				mult_result[22:0] = mult_result[22:0] << 1;
				mult_result[30:23] = ripple_adder_8bit(mult_result[30:23], 8'b11111111);
			end
			
		//addition
			
			add_result=fp32_add(mult_result,c);
			
		//rounding based on round to nearest
			
			if(add_result[0]) begin
				//increment mantissa part by 1
				//note:this increment, mind the carry out as it is needed for verifying re-normalization
			end
			
		//re-normalize after rounding, cause increment may have an effect on the lead index bit to change
			
			return add_result;
		endfunction : int_mac_function
		
	endmodule : fp32_MAC
	
	
endpackage : mult_accum
