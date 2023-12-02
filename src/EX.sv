module EX(
	input 				 clk_i,
	
	//Input from ID_DUT
	input logic [31:0] PC,
	input logic [31:0] RegReadData1,
	input logic [31:0] RegReadData2,
	input logic [31:0] imm,
	input logic [31:0] instEX,
	
	//Signal from/to Control Unit
	input  logic 		  BrUn,
	input  logic 		  BSel, 
	input  logic 		  ASel, 
	input  logic [3:0]  ALUSel, 
	
	output logic 		  BrEq, 
	output logic        BrLT, 
	
	//Output to reg
	output logic [31:0] PC_reg,
	output logic [31:0] ALUOut_reg,
	output logic [31:0] RegReadData2_reg,
	output logic [31:0] inst_reg
);

//alu 
logic [31:0] alu_data;

//brcomp

//mux_op_a
logic [31:0] operand_a;

//mux_op_b
logic [31:0] operand_b;

alu alu_DUT (
	.operand_a(operand_a),
	.operand_b(operand_b),
	.alu_op	  (ALUSel),
	.alu_data (alu_data)
);

brcomp brcomp
(
	.rs1_data	(RegReadData1),
	.rs2_data	(RegReadData2),
	.br_unsigned(BrUn), 
	.br_less	(BrLT),
	.br_equal	(BrEq)
);

mux_op_x mux_op_a
(
	.op_x_sel (ASel),
	.rsx_data (RegReadData1),
	.imm_or_pc(PC),
	.operand_x(operand_a)
);

mux_op_x mux_op_b
(
	.op_x_sel (BSel),
	.rsx_data (RegReadData2),
	.imm_or_pc(imm),
	.operand_x(operand_b)
);

	always_ff @(posedge clk_i) begin
		PC_reg 			  <= PC;
		ALUOut_reg 		  <= alu_data;
		RegReadData2_reg  <= RegReadData2;
		inst_reg 		  <= instEX;
	end

endmodule
