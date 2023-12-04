// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                 [0xaU]),32);
        tracep->chgCData(oldp+3,((0xffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [9U])),8);
        tracep->chgIData(oldp+4,((0x1ffffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [8U])),17);
        tracep->chgCData(oldp+5,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [0U])),7);
        tracep->chgCData(oldp+6,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [1U])),7);
        tracep->chgCData(oldp+7,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [2U])),7);
        tracep->chgCData(oldp+8,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [3U])),7);
        tracep->chgCData(oldp+9,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                  [4U])),7);
        tracep->chgCData(oldp+10,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                   [5U])),7);
        tracep->chgCData(oldp+11,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                   [6U])),7);
        tracep->chgCData(oldp+12,((0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                   [7U])),7);
        tracep->chgBit(oldp+13,((1U & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq)));
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__pcIF),32);
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__pcID),32);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__RegReadData1),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID),32);
        tracep->chgIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__pcEX),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__ALUOut),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__ALU),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__PC_four),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__Mem),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq),32);
        tracep->chgBit(oldp+28,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned 
                                        >> 1U))));
        tracep->chgBit(oldp+29,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed 
                                        >> 1U))));
        tracep->chgBit(oldp+30,((0U != (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                        >> 1U))));
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index),32);
        tracep->chgBit(oldp+33,((0U != (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                        >> 0xcU))));
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram),32);
        tracep->chgSData(oldp+35,((0x7ffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)),11);
        tracep->chgBit(oldp+36,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__ALUOut))));
        tracep->chgCData(oldp+37,((0xffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)),8);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[0]),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[1]),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[2]),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[3]),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[4]),32);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[5]),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[6]),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[7]),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[8]),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[9]),32);
        tracep->chgIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[10]),32);
        tracep->chgIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[11]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__i),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0]),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[1]),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[2]),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[3]),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[4]),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[5]),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[6]),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[7]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[8]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[9]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[10]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[11]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[12]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[13]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[14]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[15]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[16]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[17]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[18]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[19]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[20]),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[21]),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[22]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[23]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[24]),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[25]),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[26]),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[27]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[28]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[29]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[30]),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgSData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT__csID),11);
        tracep->chgSData(oldp+84,(vlSelf->top__DOT__singleCycle__DOT__csEX),11);
        tracep->chgSData(oldp+85,(vlSelf->top__DOT__singleCycle__DOT__csMEM),11);
        tracep->chgSData(oldp+86,(vlSelf->top__DOT__singleCycle__DOT__csWB),11);
        tracep->chgCData(oldp+87,((7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                                         >> 0xaU))),3);
        tracep->chgBit(oldp+88,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                       >> 0xeU))));
        tracep->chgBit(oldp+89,(vlSelf->top__DOT__singleCycle__DOT__BrLT));
        tracep->chgBit(oldp+90,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                       >> 8U))));
        tracep->chgBit(oldp+91,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                       >> 9U))));
        tracep->chgCData(oldp+92,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                           >> 4U))),4);
        tracep->chgBit(oldp+93,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                       >> 3U))));
        tracep->chgBit(oldp+94,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                       >> 0xdU))));
        tracep->chgCData(oldp+95,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout))),2);
        tracep->chgBit(oldp+96,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout) 
                                       >> 2U))));
        tracep->chgIData(oldp+97,(vlSelf->top__DOT__singleCycle__DOT__wb_data),32);
        tracep->chgSData(oldp+98,(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout),15);
        tracep->chgBit(oldp+99,((0U != (0xfU & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout)))));
        tracep->chgBit(oldp+100,((0U != (0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout) 
                                                 >> 0xaU)))));
        tracep->chgSData(oldp+101,(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout),15);
        tracep->chgBit(oldp+102,((0U != (0x3ffU & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout)))));
        tracep->chgBit(oldp+103,((0U != (3U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                                               >> 0xdU)))));
        tracep->chgSData(oldp+104,(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout),15);
        tracep->chgBit(oldp+105,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                        >> 0xeU))));
        tracep->chgBit(oldp+106,((0U != (0x1ffU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                                                   >> 4U)))));
        tracep->chgBit(oldp+107,((0U != (7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout)))));
        tracep->chgSData(oldp+108,(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout),15);
        tracep->chgBit(oldp+109,((0U != (0xfffU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout) 
                                                   >> 3U)))));
        tracep->chgIData(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__ALU_Result),32);
        tracep->chgIData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a),32);
        tracep->chgIData(oldp+112,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b),32);
        tracep->chgIData(oldp+113,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a),32);
        tracep->chgIData(oldp+114,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less),32);
        tracep->chgIData(oldp+115,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less),32);
        tracep->chgIData(oldp+116,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index),32);
        tracep->chgIData(oldp+117,(vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index),32);
        tracep->chgIData(oldp+118,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm),32);
        tracep->chgIData(oldp+119,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out),32);
        tracep->chgIData(oldp+120,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_res),32);
        tracep->chgIData(oldp+121,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_out),32);
        tracep->chgIData(oldp+122,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_dmem),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgIData(oldp+123,(vlSelf->top__DOT__singleCycle__DOT__instIF),32);
        tracep->chgIData(oldp+124,(vlSelf->top__DOT__singleCycle__DOT__instID),32);
        tracep->chgIData(oldp+125,(vlSelf->top__DOT__singleCycle__DOT__instEX),32);
        tracep->chgIData(oldp+126,(vlSelf->top__DOT__singleCycle__DOT__instMEM),32);
        tracep->chgCData(oldp+127,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instMEM 
                                             >> 7U))),5);
        tracep->chgCData(oldp+128,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+129,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                             >> 0x14U))),5);
        tracep->chgIData(oldp+130,((vlSelf->top__DOT__singleCycle__DOT__instIF 
                                    >> 7U)),25);
        tracep->chgIData(oldp+131,(vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc),32);
        tracep->chgIData(oldp+132,(vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata
                                   [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc 
                                               >> 2U))]),32);
        tracep->chgBit(oldp+133,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata
                                         [(0x7ffU & 
                                           (vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc 
                                            >> 2U))]))));
        tracep->chgIData(oldp+134,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc)),32);
        tracep->chgCData(oldp+135,((7U & (vlSelf->top__DOT__singleCycle__DOT__instEX 
                                          >> 0xcU))),3);
        tracep->chgIData(oldp+136,(vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data),32);
        tracep->chgBit(oldp+137,((0U != (vlSelf->top__DOT__singleCycle__DOT__instMEM 
                                         >> 0xcU))));
        tracep->chgBit(oldp+138,((0U != (0x7fU & vlSelf->top__DOT__singleCycle__DOT__instMEM))));
    }
    tracep->chgIData(oldp+139,(vlSelf->io_sw_i),32);
    tracep->chgIData(oldp+140,(vlSelf->io_lcd_o),32);
    tracep->chgIData(oldp+141,(vlSelf->io_ledg_o),32);
    tracep->chgIData(oldp+142,(vlSelf->io_ledr_o),32);
    tracep->chgIData(oldp+143,(vlSelf->io_hex0_o),32);
    tracep->chgIData(oldp+144,(vlSelf->io_hex1_o),32);
    tracep->chgIData(oldp+145,(vlSelf->io_hex2_o),32);
    tracep->chgIData(oldp+146,(vlSelf->io_hex3_o),32);
    tracep->chgIData(oldp+147,(vlSelf->io_hex4_o),32);
    tracep->chgIData(oldp+148,(vlSelf->io_hex5_o),32);
    tracep->chgIData(oldp+149,(vlSelf->io_hex6_o),32);
    tracep->chgIData(oldp+150,(vlSelf->io_hex7_o),32);
    tracep->chgIData(oldp+151,(vlSelf->testinstIF),32);
    tracep->chgIData(oldp+152,(vlSelf->testinstID),32);
    tracep->chgIData(oldp+153,(vlSelf->testinstEX),32);
    tracep->chgIData(oldp+154,(vlSelf->testinstMEM),32);
    tracep->chgBit(oldp+155,(vlSelf->clk_i));
    tracep->chgBit(oldp+156,(vlSelf->rst_ni));
    tracep->chgBit(oldp+157,((0U != (vlSelf->io_sw_i 
                                     >> 0x11U))));
    tracep->chgIData(oldp+158,((0x1ffffU & vlSelf->io_sw_i)),17);
    tracep->chgIData(oldp+159,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                          >> 0xfU))]),32);
    tracep->chgIData(oldp+160,(vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register
                               [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                          >> 0x14U))]),32);
    tracep->chgIData(oldp+161,(((0x2000U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
                                 ? vlSelf->top__DOT__singleCycle__DOT__ALUOut
                                 : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc))),32);
    tracep->chgIData(oldp+162,(((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instEX)
                                 ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instEX)
                                     ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out
                                     : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instEX)
                                         ? (0xffffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)
                                         : (0xffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out)))
                                 : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instEX)
                                     ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out
                                     : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instEX)
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
    tracep->chgIData(oldp+163,(((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
                                 ? 0U : vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram
                                [(0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                            >> 2U))])),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
