// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__singleCycle__DOT__BrLT;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*10:0*/ top__DOT__singleCycle__DOT__csID;
        SData/*10:0*/ top__DOT__singleCycle__DOT__csEX;
        SData/*10:0*/ top__DOT__singleCycle__DOT__csMEM;
        SData/*10:0*/ top__DOT__singleCycle__DOT__csWB;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__2;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96e2b52f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d348__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97171f6c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d754__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971723b8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971727a4__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716c080__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172b90__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172f7c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716f8a8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716bc8c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_ID__DOT__dataout;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__2;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96e2b52f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d348__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97171f6c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d754__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971723b8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971727a4__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716c080__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172b90__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172f7c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716f8a8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716bc8c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_EX__DOT__dataout;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__2;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96e2b52f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d348__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97171f6c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d754__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971723b8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971727a4__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716c080__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172b90__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172f7c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716f8a8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716bc8c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__2;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96e2b52f__0;
    };
    struct {
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__1;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d348__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97171f6c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d754__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971723b8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971727a4__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716c080__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172b90__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172f7c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716f8a8__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716bc8c__0;
        SData/*14:0*/ top__DOT__singleCycle__DOT__CU_WB__DOT__dataout;
        SData/*14:0*/ __Vchglast__TOP__top__DOT__singleCycle__DOT__CU_EX__DOT__dataout;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        VL_OUT(testinstIF,31,0);
        VL_OUT(testinstID,31,0);
        VL_OUT(testinstEX,31,0);
        VL_OUT(testinstMEM,31,0);
        IData/*31:0*/ top__DOT__singleCycle__DOT__instIF;
        IData/*31:0*/ top__DOT__singleCycle__DOT__instID;
        IData/*31:0*/ top__DOT__singleCycle__DOT__instEX;
        IData/*31:0*/ top__DOT__singleCycle__DOT__instMEM;
        IData/*31:0*/ top__DOT__singleCycle__DOT__pcIF;
        IData/*31:0*/ top__DOT__singleCycle__DOT__pcID;
        IData/*31:0*/ top__DOT__singleCycle__DOT__RegReadData1;
        IData/*31:0*/ top__DOT__singleCycle__DOT__RegReadData2ID;
        IData/*31:0*/ top__DOT__singleCycle__DOT__imm;
        IData/*31:0*/ top__DOT__singleCycle__DOT__pcEX;
        IData/*31:0*/ top__DOT__singleCycle__DOT__ALUOut;
        IData/*31:0*/ top__DOT__singleCycle__DOT__RegReadData2EX;
        IData/*31:0*/ top__DOT__singleCycle__DOT__ALU;
        IData/*31:0*/ top__DOT__singleCycle__DOT__PC_four;
        IData/*31:0*/ top__DOT__singleCycle__DOT__Mem;
        IData/*31:0*/ top__DOT__singleCycle__DOT__wb_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__IF_DUT__DOT__pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__IF_DUT__DOT__PC_DUT__DOT__nxt_pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__ID_DUT__DOT__imm;
        IData/*31:0*/ top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__i;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__ALU_Result;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index;
        IData/*31:0*/ top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_res;
    };
    struct {
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_out;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_dmem;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__i;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i;
        IData/*31:0*/ top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data;
        VlUnpacked<IData/*31:0*/, 2048> top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register;
        VlUnpacked<IData/*31:0*/, 12> top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
