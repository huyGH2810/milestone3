module IF (
	input 				  clk_i,
	
	//Signal from Control Unit  
	input  logic 		  PC_Sel,
	
	//Signal from ALUOut reg
	input  logic [31:0] ALU,
	
	//Output to reg
	output logic [31:0] PC_reg,
	output logic [31:0] inst_reg
);

//PC
logic [31:0] pc;

//IMEM
logic [31:0] instr;
logic unused;
assign unused = |instr[1:0];

PC	PC_DUT (
	.clk 		(clk_i)	,
	.br_sel 	(PC_Sel) , 
	.alu_data(ALU)    ,
	.pc 		(pc)
);

IMEM IMEM_DUT (
	.address	(pc),
	.data		(instr)
);

always_ff @(posedge clk_i) begin
	PC_reg 	<= pc;
	inst_reg <= instr;
end

endmodule
