module lsu (
					input 				clk_i, 
					input				rst_ni, 
					input				st_en,

					input 	[31:0]		addr, 
					input 	[31:0]		st_data, 
					input	[16:0]		io_sw,
					
					output 	[31:0]		ld_data,
					output	[31:0]		io_lcd, 
					output	[16:0]		io_ledr, 
					output	[7 :0]		io_ledg, 
					output	[6 :0]		io_hex7, 
					output	[6 :0]		io_hex6, 
					output	[6 :0]		io_hex5, 
					output	[6 :0]		io_hex4,
					output	[6 :0] 		io_hex3,
					output	[6 :0] 		io_hex2,
					output	[6 :0]		io_hex1,
					output	[6 :0]		io_hex0);

logic  unused;
assign unused  = |addr[31:12];
assign ld_data = ld_data_out;

/* verilator lint_off UNUSED */
logic	[31:0]	st_data_res, st_data_out, st_data_dmem;
/* verilator lint_on UNUSED */

logic	[31:0]	ld_data_sw , ld_data_out, ld_data_dmem;
//logic 	[11:0]	addr_sel;
//assign addr_sel = addr [11:0];


input_periph	INPUT	(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.sw		(io_sw),
								.ld_data(ld_data_sw)
);

output_periph	OUTPUT 	(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.addr   (addr[7:0]), 
								.st_data(st_data_out), 
								.lcd	(io_lcd), 
								.ledr	(io_ledr), 
								.ledg	(io_ledg), 
								.hex7	(io_hex7),
								.hex6	(io_hex6),
								.hex5	(io_hex5),
								.hex4	(io_hex4),
								.hex3	(io_hex3),
								.hex2	(io_hex2),
								.hex1	(io_hex1),
								.hex0	(io_hex0)
);

dmem DMEM 		(
								.clk_i	(clk_i), 
								.st_en	(st_en),
								.addr   (addr[10:0]), 
								.st_data(st_data_dmem), 
								.ld_data(ld_data_dmem)
);

always@(*) begin
	if (rst_ni)	begin
		if (st_en) begin
			case (addr[11])
				1'b1: 
				begin
					case (addr[10:8])
						3'b000 :	st_data_out <= st_data;				
						default:	st_data_res <= st_data;	
					endcase
				end
				
				1'b0:	st_data_dmem <= st_data;
			endcase
		end
		
		else begin
			case (addr[11])
				1'b1:	
				begin
					case (addr[11:0])
						12'h900: ld_data_out <= ld_data_sw;					
						12'h8A0: ld_data_out <= io_lcd;
						12'h890: ld_data_out <= {24'd0, io_ledg};
						12'h880: ld_data_out <= {15'd0, io_ledr};
						12'h870: ld_data_out <= {25'd0, io_hex7};
						12'h860: ld_data_out <= {25'd0, io_hex6};
						12'h850: ld_data_out <= {25'd0, io_hex5};
						12'h840: ld_data_out <= {25'd0, io_hex4};
						12'h830: ld_data_out <= {25'd0, io_hex3};
						12'h820: ld_data_out <= {25'd0, io_hex2};
						12'h810: ld_data_out <= {25'd0, io_hex1};
						12'h800: ld_data_out <= {25'd0, io_hex0};
						default: ld_data_out <= 0;
					endcase	
				end
			
				1'b0:	ld_data_out   <= ld_data_dmem;
			endcase
		end
	end	
end
endmodule
