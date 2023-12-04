module singleCycle
(
	input 			clk_i ,
	input 			rst_ni,
	input  [16:0]	io_sw_i  ,
	output [31:0]	testinstIF, testinstID, testinstEX, testinstMEM, //instWB,
	output [31:0]	io_lcd_o ,
	output [7:0]	io_ledg_o,
	output [16:0]	io_ledr_o,
	output [6:0]  	io_hex7_o, io_hex6_o, io_hex5_o, io_hex4_o, io_hex3_o, io_hex2_o, io_hex1_o, io_hex0_o
);

logic [10:0] csID, csEX, csMEM, csWB;
logic [31:0] instIF, instID, instEX, instMEM;

assign testinstIF = instIF;
assign testinstID = instID;
assign testinstEX = instEX;
assign testinstMEM = instMEM;

assign csID  = {instIF [30], instIF [14:12], instIF [6:2], BrEq, BrLT};
assign csEX  = {instID [30], instID [14:12], instID [6:2], BrEq, BrLT};
assign csMEM = {instEX [30], instEX [14:12], instEX [6:2], BrEq, BrLT};
assign csWB  = {instMEM[30], instMEM[14:12], instMEM[6:2], BrEq, BrLT};

logic [2:0] ImmSel;
logic 		BrUn;
logic 		BrEq;
logic 		BrLT;
logic 		BSel;
logic 		ASel;
logic [3:0] ALUSel;
logic 		MemRW;
logic 		PCSel;
logic [1:0] WBSel;
logic 		RegWEn;

//ControlUnit
CU_ID CU_ID(
	.control_signal(csID),
	.imm_sel			(ImmSel)
);

CU_EX CU_EX(
	.control_signal(csEX),
	.alu_op			(ALUSel),
	.br_unsigned	(BrUn),
	.op_a_sel		(ASel),
	.op_b_sel		(BSel)
);

	
CU_MEM CU_MEM(
	.control_signal(csMEM),
	.br_sel			(PCSel),
	.mem_wren		(MemRW)
);

	
CU_WB CU_WB(
	.control_signal(csWB) ,
	.wb_sel		   (WBSel),
	.rd_wren		   (RegWEn)
);

//signal from reg
logic [31:0] pcIF;
logic [31:0] pcID, RegReadData1 , RegReadData2ID, imm;
logic [31:0] pcEX, ALUOut       , RegReadData2EX;
logic [31:0] ALU , PC_four      , Mem           ;

logic [31:0] ALUOut_signal, wb_data;
logic [4:0]  inst_signal;

//IF
IF IF_DUT (
	.clk_i	(clk_i),
	.PC_Sel	(PCSel),
	.ALU		(ALUOut_signal),
	
	.PC_reg	(pcIF),
	.inst_reg(instIF)
);


//ID
ID ID_DUT(
	.clk_i				(clk_i),
	.rst_ni				(rst_ni),		
	.rd_wren				(RegWEn),
	.rd_addr				(inst_signal),
	.rd_data				(wb_data),
		
	.PC					(pcIF),
	.instID					(instIF),
		
	.Imm_Sel				(ImmSel),

	.PC_reg				(pcID),
	.RegReadData1_reg	(RegReadData1),
	.RegReadData2_reg	(RegReadData2ID),
	.imm_reg				(imm),
	.inst_reg			(instID)
);


//EX
EX EX_DUT(
	.clk_i				(clk_i),
	.BrUn					(BrUn), 
	.BSel					(BSel), 
	.ASel					(ASel), 
	.ALUSel				(ALUSel), 
	.BrEq					(BrEq), 
	.BrLT					(BrLT), 
	.instEX				(instID),
	
	.PC 					(pcID),
	.RegReadData1		(RegReadData1),
	.RegReadData2		(RegReadData2ID),
	.imm					(imm),
	
	.PC_reg				(pcEX),
	.ALUOut_reg			(ALUOut),
	.RegReadData2_reg	(RegReadData2EX),
	.inst_reg			(instEX)
);


//MEM
MEM MEM_DUT(
	.clk_i				(clk_i),
	.rst_ni				(rst_ni),
	.MemRW				(MemRW),
	.instMEM			(instEX), 
	.ALUOut_signal		(ALUOut_signal),
	
	.PC				 	(pcEX),
	.ALUOut		 		(ALUOut),
	.RegReadData2		(RegReadData2EX),
	
	.ALU_reg				(ALU),
	.PC_four_reg		(PC_four),
	.Mem_reg				(Mem),
	.inst_reg			(instMEM),
	
	.io_sw  (io_sw_i)  ,
	.io_lcd (io_lcd_o) , 
	.io_ledr(io_ledr_o), 
	.io_ledg(io_ledg_o), 
	.io_hex7(io_hex7_o),
	.io_hex6(io_hex6_o), 
	.io_hex5(io_hex5_o), 
	.io_hex4(io_hex4_o), 	
	.io_hex3(io_hex3_o), 
	.io_hex2(io_hex2_o), 
	.io_hex1(io_hex1_o), 
	.io_hex0(io_hex0_o)
);


//WB
WB WB_DUT(
	.ALU					(ALU),
	.PC_four				(PC_four),
	.Mem					(Mem),
	.instWB					(instMEM),
	
	.WBSel				(WBSel), 
	
	.wb_data				(wb_data),
	.inst_signal		(inst_signal)
);

endmodule
