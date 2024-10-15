package mult_accum;

	interface Counter;
		method Action get_A( Bit#(16) a);
		method Action get_B( Bit#(16) b);
		method Action get_C( Bit#(32) c);
		method Action get_select( Bit#(1) s);
		method ActionValue#(Bit#(32)) result();
	endinterface : Counter
	
	(* synthesize *)

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
			
			for ( Integer i=0 ; i<8 ; i = i+1) begin
				if (b[i]==1) begin
					mult_result=ripple_adder_16bit(mult_result,a);
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
	
	//(* synthesize *)
	
	//module fp32_MAC(mult_accum);
	//	Reg#( Bit#(16)) rg_A <- mkReg(0);
	//	Reg#( Bit#(16)) rg_B <- mkReg(0);
	//	Reg#( Bit#(32)) rg_C <- mkReg(0);
	//	Reg#( Bit#(1)) rg_select <- mkReg(0);
	//	Reg#( Bit#(32)) rg_out <- mkReg(0);
		
	//endmodule : fp32_MAC
	
	
endpackage : mult_accum
