
module top
(
  // Peripheral
  input  logic [31:0]      io_sw_i   ,
  output logic [31:0]      io_lcd_o  ,
  output logic [31:0]      io_ledg_o ,
  output logic [31:0]      io_ledr_o ,
  output logic [31:0]      io_hex0_o ,
  output logic [31:0]      io_hex1_o ,
  output logic [31:0]      io_hex2_o ,
  output logic [31:0]      io_hex3_o ,
  output logic [31:0]      io_hex4_o ,
  output logic [31:0]      io_hex5_o ,
  output logic [31:0]      io_hex6_o ,
  output logic [31:0]      io_hex7_o ,
  
  output logic [31:0]      instID,
  output logic [31:0] 	   instEX,
  output logic [31:0]	   instMEM,
 // output logic [31:0]      instWB,

  // Clock and asynchronous reset active low
  input  logic             clk_i     ,
  input  logic             rst_ni
);


logic  unused_sw;
assign unused_sw	= |io_sw_i[31:17];


logic [16:0]     sw  ;
logic [31:0]     lcd ;
logic [7:0]      ledg;
logic [16:0]     ledr;
logic [6:0]      hex0;
logic [6:0]      hex1;
logic [6:0]      hex2;
logic [6:0]      hex3;
logic [6:0]      hex4;
logic [6:0]      hex5;
logic [6:0]      hex6;
logic [6:0]      hex7;

assign sw 		 = io_sw_i[16:0];
assign io_lcd_o  = lcd          ;
assign io_ledg_o = {24'h0, ledg};
assign io_ledr_o = {15'h0, ledr};
assign io_hex0_o = {25'h0, hex0};
assign io_hex1_o = {25'h0, hex1};
assign io_hex2_o = {25'h0, hex2};
assign io_hex3_o = {25'h0, hex3}; 
assign io_hex4_o = {25'h0, hex4};
assign io_hex5_o = {25'h0, hex5};
assign io_hex6_o = {25'h0, hex6};
assign io_hex7_o = {25'h0, hex7};

  singleCycle singleCycle(
    .io_sw_i   (sw  ),
    .io_lcd_o  (lcd ),
    .io_ledg_o (ledg),
    .io_ledr_o (ledr),
    .io_hex0_o (hex0),
    .io_hex1_o (hex1),
    .io_hex2_o (hex2),
    .io_hex3_o (hex3),
    .io_hex4_o (hex4),
    .io_hex5_o (hex5),
    .io_hex6_o (hex6),
    .io_hex7_o (hex7),
    .instID	   (instID),
    .instEX    (instEX),
    .instMEM   (instMEM),
 //   .instWB    (instWB),
    .clk_i     (clk_i     ),
    .rst_ni    (rst_ni    )
  );

endmodule : top
