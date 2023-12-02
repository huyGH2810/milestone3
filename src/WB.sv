module WB(
	//Input from MEM_DUT
	input  logic [31:0] ALU,
	input  logic [31:0] PC_four,
	input  logic [31:0] Mem,
	input  logic [31:0] instWB,
	
	//Signal from/to Control Unit
	input  logic [1 :0] WBSel, 
	
	//
	output logic [31:0] wb_data,
	output logic [4:0] inst_signal
);

logic unused, unused1;
assign unused  =| instWB[31:12];
assign unused1 =| instWB[6:0];

assign inst_signal = instWB[11:7];

mux_wb_sel WB_DUT (
	.wb_sel(WBSel),
	.alu_data(ALU),
	.ld_data(Mem),
	.pc_four(PC_four),
	.wb_data(wb_data)
);

endmodule
