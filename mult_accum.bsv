package mult_accum;

	interface wires;
		method Action get_A( Bit#(16) A);
		method Action get_B( Bit#(16) B);
		method Action get_C( Bit#(32) C);
		method Action get_select( Bit#(1) s);
		method ActionValue MAC_result result();
	endinterface : wires
	
	(* synthesize *)

	module int32_MAC(wires);
		Reg#( Bit#(8)) rg_A <- mkReg(0);
		Reg#( Bit#(8)) rg_B <- mkReg(0);
		Reg#( Bit#(32)) rg_C <- mkReg(0);
		Reg#( Bit#(1)) rg_select <- mkReg(0);
		Reg#( MAC_result) rg_out <- mkReg(0);
		
		function MAC_result int_mac_function( Bit#(8) a, Bit#(8) b, Bit#(32) c);
			Bit#(16) mult_result = 16'b0;
			Bit#(32) add_result = 32'b0;
			
			for ( Integer i=0 ; i<8 ; i = i+1) begin
				if (b[i]==1) begin
					for ( Integer j=0 ; j<8 ; j = j+1) begin
						mult_result[i+j]=mult_result[i+j]+a[j];
					end
				end
			end
			
			for ( Integer i=0 ; i<32 ; i = i+1) begin
				add_result[i]=mult_result[i]+c[j];
			end
			
			MAC_result out = add_result;
			return out;
		endfunction : int_mac_function
		
		rule rl_int;
			rg_out <= int_mac_function( rg_A, rg_B, rg_C);
		endrule : rl_int
		
		method Action get_A( Bit#(16) A);
			rg_A <= A
		endmethod : get_A
		
		method Action get_B( Bit#(16) B);
			rg_B <= B
		endmethod : get_B
		
		method Action get_C( Bit#(32) C);
			rg_C <= C
		endmethod : get_C
		
		method Action get_select( Bit#(1) s);
			rg_select <= s
		endmethod : get_select
		
		method ActionValue MAC_result result();
			return rg_out;
		endmethod : result
		
		
	endmodule : int32_MAC
	
	//(* synthesize *)
	
	//module fp32_MAC(mult_accum);
	//	Reg#( Bit#(16)) rg_A <- mkReg(0);
	//	Reg#( Bit#(16)) rg_B <- mkReg(0);
	//	Reg#( Bit#(32)) rg_C <- mkReg(0);
	//	Reg#( Bit#(1)) rg_select <- mkReg(0);
	//	Reg#( MAC_result) rg_out <- mkReg(0);
		
	//endmodule : fp32_MAC
	
	
endpackage : mult_accum
