// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+133,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+139,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+140,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+142,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"instID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"instEX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"instMEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+133,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+139,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+140,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+142,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"instID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"instEX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"instMEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"unused_sw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+151,"sw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,"lcd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"ledg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,"ledr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+6,"hex0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+7,"hex1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,"hex2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,"hex3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+10,"hex4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,"hex5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+12,"hex6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+13,"hex7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+151,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+145,"instID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"instEX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"instMEM",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+5,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+13,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+12,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+11,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+10,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+84,"csID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+85,"csEX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+86,"csMEM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+87,"csWB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+124,"instIF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"ImmSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+89,"BrUn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"BrEq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"BrLT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"BSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"ASel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+93,"ALUSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,"MemRW",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"PCSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+96,"WBSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,"RegWEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+15,"pcIF",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"pcID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"RegReadData1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,"RegReadData2ID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"pcEX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"ALUOut",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,"RegReadData2EX",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,"ALU",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,"PC_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,"Mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"ALUOut_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,"inst_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->pushNamePrefix("CU_EX ");
    tracep->declBus(c+85,"control_signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+93,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+89,"br_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+99,"dataout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->declBit(c+100,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CU_ID ");
    tracep->declBus(c+84,"control_signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+88,"imm_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+102,"dataout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->declBit(c+103,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CU_MEM ");
    tracep->declBus(c+86,"control_signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+95,"br_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"dataout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->declBit(c+106,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+107,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"unused2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CU_WB ");
    tracep->declBus(c+87,"control_signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+96,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+97,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"dataout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
    tracep->declBit(c+110,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"PC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"RegReadData1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"RegReadData2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"instEX",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+89,"BrUn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"BSel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"ASel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+93,"ALUSel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+14,"BrEq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"BrLT",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"PC_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"ALUOut_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"RegReadData2_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"inst_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("alu_DUT ");
    tracep->declBus(c+112,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+111,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"signed_operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,"ALU_Result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,"un_output_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,"output_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare0 ");
    tracep->declBus(c+112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_sign0 ");
    tracep->declBus(c+112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("brcomp ");
    tracep->declBus(c+17,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+89,"br_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"result_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"result_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"result_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"unused2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_eq ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_sign ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"out_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"index",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux_op_a ");
    tracep->declBit(c+92,"op_x_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"rsx_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"imm_or_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"operand_x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_b ");
    tracep->declBit(c+91,"op_x_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"rsx_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"imm_or_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"operand_x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+98,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"PC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"instID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"Imm_Sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+16,"PC_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"RegReadData1_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"RegReadData2_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"imm_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"inst_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("imGen_DUT ");
    tracep->declBus(c+127,"imm_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,7);
    tracep->declBus(c+88,"imm_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+119,"imm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+125,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+126,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+152,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+98,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+52+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IF_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"PC_Sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"ALU",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"PC_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"inst_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("IMEM_DUT ");
    tracep->declBus(c+128,"address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_DUT ");
    tracep->declBit(c+95,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+155,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"PC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"ALUOut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"RegReadData2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"instMEM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+94,"MemRW",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"ALUOut_signal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"ALU_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"PC_four_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"Mem_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"inst_reg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+3,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+4,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+12,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+11,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+10,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+156,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("DMEM_DUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+157,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+21,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+156,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+4,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+12,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+11,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+10,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+132,"lsu_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"lsu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("LOAD ");
    tracep->declBus(c+157,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+120,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+151,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+120,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+4,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+12,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+11,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+10,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+34,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+121,"st_data_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"st_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"st_data_dmem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"ld_data_sw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"ld_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,"ld_data_dmem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("DMEM ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+123,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+37,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INPUT ");
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+151,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+35,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OUTPUT ");
    tracep->declBus(c+3,"lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+4,"ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+12,"hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+11,"hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+10,"hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+9,"hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+8,"hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+7,"hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+6,"hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+148,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+122,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+39+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("STORE ");
    tracep->declBus(c+157,"func3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+22,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WB_DUT ");
    tracep->declBus(c+23,"ALU",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"PC_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"Mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"instWB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"WBSel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+98,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+152,"inst_signal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+159,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"unused1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("WB_DUT ");
    tracep->declBus(c+96,"wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+23,"alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"ld_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__i),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                              [0xaU]),32);
    tracep->fullCData(oldp+4,((0xffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [9U])),8);
    tracep->fullIData(oldp+5,((0x1ffffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [8U])),17);
    tracep->fullCData(oldp+6,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [0U])),7);
    tracep->fullCData(oldp+7,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [1U])),7);
    tracep->fullCData(oldp+8,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [2U])),7);
    tracep->fullCData(oldp+9,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [3U])),7);
    tracep->fullCData(oldp+10,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                [4U])),7);
    tracep->fullCData(oldp+11,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                [5U])),7);
    tracep->fullCData(oldp+12,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                [6U])),7);
    tracep->fullCData(oldp+13,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                [7U])),7);
    tracep->fullBit(oldp+14,((1U & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq)));
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__pcIF),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__pcID),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__RegReadData1),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID),32);
    tracep->fullIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__pcEX),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__ALUOut),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__ALU),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__PC_four),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__Mem),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq),32);
    tracep->fullBit(oldp+29,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned 
                                     >> 1U))));
    tracep->fullBit(oldp+30,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed 
                                     >> 1U))));
    tracep->fullBit(oldp+31,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                     >> 1U))));
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index),32);
    tracep->fullBit(oldp+34,((0U != (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                     >> 0xcU))));
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram),32);
    tracep->fullSData(oldp+36,((0x7ffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)),11);
    tracep->fullBit(oldp+37,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__ALUOut))));
    tracep->fullCData(oldp+38,((0xffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)),8);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[0]),32);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[1]),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[2]),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[3]),32);
    tracep->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[4]),32);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[5]),32);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[6]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[7]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[8]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[9]),32);
    tracep->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[10]),32);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[11]),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__i),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[1]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[2]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[3]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[4]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[5]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[6]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[7]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[8]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[9]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[10]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[11]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[12]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[13]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[14]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[15]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[16]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[17]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[18]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[19]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[20]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[21]),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[22]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[23]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[24]),32);
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[25]),32);
    tracep->fullIData(oldp+78,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[26]),32);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[27]),32);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[28]),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[29]),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[30]),32);
    tracep->fullIData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[31]),32);
    tracep->fullSData(oldp+84,(vlSelf->top__DOT__singleCycle__DOT__csID),11);
    tracep->fullSData(oldp+85,(vlSelf->top__DOT__singleCycle__DOT__csEX),11);
    tracep->fullSData(oldp+86,(vlSelf->top__DOT__singleCycle__DOT__csMEM),11);
    tracep->fullSData(oldp+87,(vlSelf->top__DOT__singleCycle__DOT__csWB),11);
    tracep->fullCData(oldp+88,((7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                                      >> 0xaU))),3);
    tracep->fullBit(oldp+89,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                    >> 0xeU))));
    tracep->fullBit(oldp+90,(vlSelf->top__DOT__singleCycle__DOT__BrLT));
    tracep->fullBit(oldp+91,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                    >> 8U))));
    tracep->fullBit(oldp+92,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                    >> 9U))));
    tracep->fullCData(oldp+93,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                        >> 4U))),4);
    tracep->fullBit(oldp+94,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                    >> 3U))));
    tracep->fullBit(oldp+95,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                    >> 0xdU))));
    tracep->fullCData(oldp+96,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout))),2);
    tracep->fullBit(oldp+97,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout) 
                                    >> 2U))));
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__singleCycle__DOT__wb_data),32);
    tracep->fullSData(oldp+99,(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout),15);
    tracep->fullBit(oldp+100,((0U != (0xfU & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout)))));
    tracep->fullBit(oldp+101,((0U != (0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                              >> 0xaU)))));
    tracep->fullSData(oldp+102,(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout),15);
    tracep->fullBit(oldp+103,((0U != (0x3ffU & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout)))));
    tracep->fullBit(oldp+104,((0U != (3U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                                            >> 0xdU)))));
    tracep->fullSData(oldp+105,(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout),15);
    tracep->fullBit(oldp+106,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                     >> 0xeU))));
    tracep->fullBit(oldp+107,((0U != (0x1ffU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                                >> 4U)))));
    tracep->fullBit(oldp+108,((0U != (7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout)))));
    tracep->fullSData(oldp+109,(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout),15);
    tracep->fullBit(oldp+110,((0U != (0xfffU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout) 
                                                >> 3U)))));
    tracep->fullIData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__ALU_Result),32);
    tracep->fullIData(oldp+112,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a),32);
    tracep->fullIData(oldp+113,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b),32);
    tracep->fullIData(oldp+114,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a),32);
    tracep->fullIData(oldp+115,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less),32);
    tracep->fullIData(oldp+116,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less),32);
    tracep->fullIData(oldp+117,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index),32);
    tracep->fullIData(oldp+118,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index),32);
    tracep->fullIData(oldp+119,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm),32);
    tracep->fullIData(oldp+120,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out),32);
    tracep->fullIData(oldp+121,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_res),32);
    tracep->fullIData(oldp+122,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_out),32);
    tracep->fullIData(oldp+123,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_dmem),32);
    tracep->fullIData(oldp+124,(vlSelf->top__DOT__singleCycle__DOT__instIF),32);
    tracep->fullCData(oldp+125,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+126,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                          >> 0x14U))),5);
    tracep->fullIData(oldp+127,((vlSelf->top__DOT__singleCycle__DOT__instIF 
                                 >> 7U)),25);
    tracep->fullIData(oldp+128,(vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc),32);
    tracep->fullIData(oldp+129,(vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata
                                [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc 
                                            >> 2U))]),32);
    tracep->fullBit(oldp+130,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata
                                      [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc 
                                                  >> 2U))]))));
    tracep->fullIData(oldp+131,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc)),32);
    tracep->fullIData(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data),32);
    tracep->fullIData(oldp+133,(vlSelf->io_sw_i),32);
    tracep->fullIData(oldp+134,(vlSelf->io_lcd_o),32);
    tracep->fullIData(oldp+135,(vlSelf->io_ledg_o),32);
    tracep->fullIData(oldp+136,(vlSelf->io_ledr_o),32);
    tracep->fullIData(oldp+137,(vlSelf->io_hex0_o),32);
    tracep->fullIData(oldp+138,(vlSelf->io_hex1_o),32);
    tracep->fullIData(oldp+139,(vlSelf->io_hex2_o),32);
    tracep->fullIData(oldp+140,(vlSelf->io_hex3_o),32);
    tracep->fullIData(oldp+141,(vlSelf->io_hex4_o),32);
    tracep->fullIData(oldp+142,(vlSelf->io_hex5_o),32);
    tracep->fullIData(oldp+143,(vlSelf->io_hex6_o),32);
    tracep->fullIData(oldp+144,(vlSelf->io_hex7_o),32);
    tracep->fullIData(oldp+145,(vlSelf->instID),32);
    tracep->fullIData(oldp+146,(vlSelf->instEX),32);
    tracep->fullIData(oldp+147,(vlSelf->instMEM),32);
    tracep->fullBit(oldp+148,(vlSelf->clk_i));
    tracep->fullBit(oldp+149,(vlSelf->rst_ni));
    tracep->fullBit(oldp+150,((0U != (vlSelf->io_sw_i 
                                      >> 0x11U))));
    tracep->fullIData(oldp+151,((0x1ffffU & vlSelf->io_sw_i)),17);
    tracep->fullCData(oldp+152,((0x1fU & (vlSelf->instMEM 
                                          >> 7U))),5);
    tracep->fullIData(oldp+153,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register
                                [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                           >> 0xfU))]),32);
    tracep->fullIData(oldp+154,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register
                                [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                           >> 0x14U))]),32);
    tracep->fullIData(oldp+155,(((0x2000U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
                                  ? vlSelf->top__DOT__singleCycle__DOT__ALUOut
                                  : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc))),32);
    tracep->fullIData(oldp+156,(((0x4000U & vlSelf->instEX)
                                  ? ((0x2000U & vlSelf->instEX)
                                      ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out
                                      : ((0x1000U & vlSelf->instEX)
                                          ? (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)
                                          : (0xffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)))
                                  : ((0x2000U & vlSelf->instEX)
                                      ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out
                                      : ((0x1000U & vlSelf->instEX)
                                          ? ((0x8000U 
                                              & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)
                                              ? (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out))
                                              : (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out))
                                          : ((0x80U 
                                              & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)
                                              ? (0xffffff00U 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out))
                                              : (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)))))),32);
    tracep->fullCData(oldp+157,((7U & (vlSelf->instEX 
                                       >> 0xcU))),3);
    tracep->fullIData(oldp+158,(((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
                                  ? 0U : vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram
                                 [(0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                             >> 2U))])),32);
    tracep->fullBit(oldp+159,((0U != (vlSelf->instMEM 
                                      >> 0xcU))));
    tracep->fullBit(oldp+160,((0U != (0x7fU & vlSelf->instMEM))));
}
