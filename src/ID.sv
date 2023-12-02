module ID (
		input            	  clk_i,
		input            	  rst_ni,
		
		//Signal from inst_signal
		input  logic [4:0]  rd_addr,
		
		//Signal from WB_data
		input  logic [31:0] rd_data,
		
		//Input from IF_DUT
		input	 logic [31:0] PC,
		input  logic [31:0] instID,
		
		//Signal from/to Control Unit
		input               rd_wren,
		input  logic [2:0]  Imm_Sel,

		//Output to reg
		output logic [31:0] PC_reg,
		output logic [31:0] RegReadData1_reg,
		output logic [31:0] RegReadData2_reg,
		output logic [31:0] imm_reg,
		output logic [31:0] inst_reg
);

//regfile
logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [31:0] rs1_data;
logic [31:0] rs2_data;

assign rs1_addr = instID[19:15];
assign rs2_addr = instID[24:20];

//immGen
logic [31:0] imm;

regfile regfile_DUT (
	.clk_i   (clk_i),
	.rst_ni  (rst_ni),
	
	.rd_wren (rd_wren),
	.rd_addr (rd_addr),
	.rd_data (rd_data),
	
	.rs1_addr(rs1_addr),
	.rs2_addr(rs2_addr),	
	
	.rs1_data(rs1_data),
	.rs2_data(rs2_data)
);

immGen imGen_DUT(
	.imm_in (instID[31:7]),
	.imm_sel(Imm_Sel),
	.imm_out(imm)
);

	always_ff @(posedge clk_i) begin
		PC_reg 			 <= PC;
		RegReadData1_reg <= rs1_data;
		RegReadData2_reg <= rs2_data;
		imm_reg 	     <= imm;
		inst_reg 		 <= instID;
	end

endmodule
