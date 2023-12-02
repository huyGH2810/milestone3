module input_periph(
		input 			clk_i,
		/* verilator lint_off UNUSED */ 
		input			st_en,
		/* verilator lint_on UNUSED */
		input	[16:0]	sw	 ,
		output	[31:0]	ld_data
);

	logic 	[31:0]	ram;
	
	initial begin
			ram = 32'd0;
	end
	
	always_ff @(posedge clk_i)  begin
		ram <= {15'd0, sw};
	end		
	
	assign ld_data = ram;
	
endmodule
