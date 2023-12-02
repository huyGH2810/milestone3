module MEM (
	input 			clk_i,
	input 			rst_ni,
	
	//Input from EX_DUT
	input  logic [31:0] PC,
	input  logic [31:0] ALUOut,
	input  logic [31:0] RegReadData2,
	input  logic [31:0] instMEM,
	
	//Signal from/to Control Unit
	input  logic 		  MemRW,
	output logic [31:0] ALUOut_signal,
	
	//Output to reg
	output logic [31:0] ALU_reg,
	output logic [31:0] PC_four_reg,
	output logic [31:0] Mem_reg,
	output logic [31:0] inst_reg,
	
	//I/O 
	input	 logic [16:0] io_sw,
	output logic [31:0] io_lcd, 
	output logic [16:0] io_ledr, 
	output logic [7 :0] io_ledg, 
	output logic [6 :0] io_hex7,
	output logic [6 :0] io_hex6, 
	output logic [6 :0] io_hex5, 
	output logic [6 :0] io_hex4, 	
	output logic [6 :0] io_hex3, 
	output logic [6 :0] io_hex2, 
	output logic [6 :0] io_hex1, 
	output logic [6 :0] io_hex0
);

logic [31:0] ld_data;
assign ALUOut_signal = ALUOut;

top_lsu	DMEM_DUT(
	.clk_i	(clk_i), 
	.rst_ni	(rst_ni), 
	
	.st_en	(MemRW),
	.func3	(instMEM[14:12]),
	.addr	(ALUOut),
	.st_data(RegReadData2),
	
	.io_sw	(io_sw),
	.ld_data(ld_data),
	.io_lcd (io_lcd), 
	.io_ledr(io_ledr), 
	.io_ledg(io_ledg), 
	.io_hex7(io_hex7),
	.io_hex6(io_hex6), 
	.io_hex5(io_hex5), 
	.io_hex4(io_hex4), 	
	.io_hex3(io_hex3), 
	.io_hex2(io_hex2), 
	.io_hex1(io_hex1), 
	.io_hex0(io_hex0)
);	
	always_ff @(posedge clk_i) begin
		ALU_reg		<= ALUOut; 
		PC_four_reg <= (PC + 4);
		Mem_reg		<= ld_data;
		inst_reg		<= instMEM;
	end
endmodule	

	
