// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb11e3a36__0;
    // Body
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1ffU, vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i)) {
        vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram[(0x1ffU 
                                                                                & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i)] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i 
            = ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i);
    }
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__2 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__1 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__0 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96e2b52f__0 
        = (0x6b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__1 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__0 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d348__0 
        = (0x84U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97171f6c__0 
        = (0x94U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d754__0 
        = (0x74U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971723b8__0 
        = (0x44U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971727a4__0 
        = (0x34U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716c080__0 
        = (0x24U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172b90__0 
        = (0x64U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172f7c__0 
        = (0x54U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716f8a8__0 
        = (4U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716bc8c__0 
        = (0x14U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__2 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__1 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__0 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96e2b52f__0 
        = (0x6b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__1 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__0 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d348__0 
        = (0x84U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97171f6c__0 
        = (0x94U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d754__0 
        = (0x74U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971723b8__0 
        = (0x44U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971727a4__0 
        = (0x34U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716c080__0 
        = (0x24U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172b90__0 
        = (0x64U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172f7c__0 
        = (0x54U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716f8a8__0 
        = (4U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716bc8c__0 
        = (0x14U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__2 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__1 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__0 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96e2b52f__0 
        = (0x6b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__1 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__0 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d348__0 
        = (0x84U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97171f6c__0 
        = (0x94U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d754__0 
        = (0x74U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971723b8__0 
        = (0x44U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971727a4__0 
        = (0x34U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716c080__0 
        = (0x24U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172b90__0 
        = (0x64U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172f7c__0 
        = (0x54U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716f8a8__0 
        = (4U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716bc8c__0 
        = (0x14U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[0U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[1U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[2U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[3U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[4U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[5U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[6U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[7U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[8U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[9U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[0xaU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[0xbU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__i = 0xcU;
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__2 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__1 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__0 
        = (0x508U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96e2b52f__0 
        = (0x6b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__1 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__0 
        = (0x2b00U | (3U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d348__0 
        = (0x84U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97171f6c__0 
        = (0x94U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d754__0 
        = (0x74U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971723b8__0 
        = (0x44U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971727a4__0 
        = (0x34U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716c080__0 
        = (0x24U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172b90__0 
        = (0x64U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172f7c__0 
        = (0x54U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716f8a8__0 
        = (4U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716bc8c__0 
        = (0x14U | (0x1c00U & VL_RAND_RESET_I(15)));
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1fU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[1U] = 1U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[2U] = 2U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[3U] = 3U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[4U] = 4U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[5U] = 5U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[6U] = 6U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[7U] = 7U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[8U] = 8U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[9U] = 9U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xaU] = 0xaU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xbU] = 0xbU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xcU] = 0xcU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xdU] = 0xdU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xeU] = 0xeU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0xfU] = 0xfU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x10U] = 0x10U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x11U] = 0x11U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x12U] = 0x12U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x13U] = 0x13U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x14U] = 0x14U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x15U] = 0x15U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x16U] = 0x16U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x17U] = 0x17U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x18U] = 0x18U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x19U] = 0x19U;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1aU] = 0x1aU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1bU] = 0x1bU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1cU] = 0x1cU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1dU] = 0x1dU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1eU] = 0x1eU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[0x1fU] = 0x1fU;
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__i = 0x20U;
    __Vtemp_hb11e3a36__0[0U] = 0x2e747874U;
    __Vtemp_hb11e3a36__0[1U] = 0x66696c65U;
    __Vtemp_hb11e3a36__0[2U] = 0x726567U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb11e3a36__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
        = ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
            ? vlSelf->top__DOT__singleCycle__DOT__imm
            : vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
        = ((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
            == vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID)
            ? 1U : 0U);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index = 0x1fU;
    {
        {
            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index)) {
                if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                            >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index)) 
                           & (~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                 >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index)))))) {
                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned = 0U;
                    goto __Vlabel1;
                }
                if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                               >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index))) 
                           & (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                              >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index))))) {
                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned = 1U;
                    goto __Vlabel2;
                }
                vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index 
                    = (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index = 0x1fU;
    {
        {
            {
                {
                    {
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index)) {
                                if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                               >> 0x1fU)) 
                                           & (~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                 >> 0x1fU))))) {
                                    if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index)))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 0U;
                                        goto __Vlabel3;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index))) 
                                               & (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 1U;
                                        goto __Vlabel4;
                                    }
                                }
                                if (((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                      & vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID) 
                                     >> 0x1fU)) {
                                    if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index)))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 1U;
                                        goto __Vlabel5;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index))) 
                                               & (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 0U;
                                        goto __Vlabel6;
                                    }
                                }
                                if (((~ (vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                         >> 0x1fU)) 
                                     & (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                        >> 0x1fU))) {
                                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 0U;
                                    goto __Vlabel7;
                                }
                                if (((vlSelf->top__DOT__singleCycle__DOT__RegReadData1 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID 
                                                    >> 0x1fU)))) {
                                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = 1U;
                                    goto __Vlabel8;
                                }
                                vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index 
                                    = (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index 
                                       - (IData)(1U));
                            }
                            __Vlabel8: ;
                        }
                        __Vlabel7: ;
                    }
                    __Vlabel6: ;
                }
                __Vlabel5: ;
            }
            __Vlabel4: ;
        }
        __Vlabel3: ;
    }
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data 
        = ((0U == (7U & (vlSelf->instEX >> 0xcU))) ? 
           (0xffU & vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX)
            : ((1U == (7U & (vlSelf->instEX >> 0xcU)))
                ? (0xffffU & vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX)
                : vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX));
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
        = ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
            ? vlSelf->top__DOT__singleCycle__DOT__pcID
            : vlSelf->top__DOT__singleCycle__DOT__RegReadData1);
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
        [0xaU];
    vlSelf->io_ledg_o = (0xffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [9U]);
    vlSelf->io_ledr_o = (0x1ffffU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [8U]);
    vlSelf->io_hex0_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [0U]);
    vlSelf->io_hex1_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [1U]);
    vlSelf->io_hex2_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [2U]);
    vlSelf->io_hex3_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [3U]);
    vlSelf->io_hex4_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [4U]);
    vlSelf->io_hex5_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [5U]);
    vlSelf->io_hex6_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [6U]);
    vlSelf->io_hex7_o = (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                         [7U]);
    vlSelf->top__DOT__singleCycle__DOT__BrLT = (1U 
                                                & ((0x4000U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                                                    ? vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned
                                                    : vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed));
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index = 0x1fU;
    {
        {
            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index)) {
                if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                            >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index)) 
                           & (~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                 >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index)))))) {
                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less = 0U;
                    goto __Vlabel9;
                }
                if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                               >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index))) 
                           & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                              >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index))))) {
                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less = 1U;
                    goto __Vlabel10;
                }
                vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index 
                    = (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        __Vlabel9: ;
    }
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index = 0x1fU;
    {
        {
            {
                {
                    {
                        {
                            while (VL_LTES_III(32, 0U, vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index)) {
                                if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                               >> 0x1fU)) 
                                           & (~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                 >> 0x1fU))))) {
                                    if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index)))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 0U;
                                        goto __Vlabel11;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index))) 
                                               & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 1U;
                                        goto __Vlabel12;
                                    }
                                }
                                if (((vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                      & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b) 
                                     >> 0x1fU)) {
                                    if ((1U & ((vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index)))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 1U;
                                        goto __Vlabel13;
                                    }
                                    if ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index))) 
                                               & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index))))) {
                                        vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 0U;
                                        goto __Vlabel14;
                                    }
                                }
                                if (((~ (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                         >> 0x1fU)) 
                                     & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                        >> 0x1fU))) {
                                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 0U;
                                    goto __Vlabel15;
                                }
                                if (((vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b 
                                                    >> 0x1fU)))) {
                                    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = 1U;
                                    goto __Vlabel16;
                                }
                                vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index 
                                    = (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index 
                                       - (IData)(1U));
                            }
                            __Vlabel16: ;
                        }
                        __Vlabel15: ;
                    }
                    __Vlabel14: ;
                }
                __Vlabel13: ;
            }
            __Vlabel12: ;
        }
        __Vlabel11: ;
    }
    vlSelf->top__DOT__singleCycle__DOT__csWB = ((0x400U 
                                                 & (vlSelf->instMEM 
                                                    >> 0x14U)) 
                                                | ((0x380U 
                                                    & (vlSelf->instMEM 
                                                       >> 5U)) 
                                                   | ((0x7cU 
                                                       & vlSelf->instMEM) 
                                                      | ((2U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BrLT)))));
    vlSelf->top__DOT__singleCycle__DOT__csMEM = ((0x400U 
                                                  & (vlSelf->instEX 
                                                     >> 0x14U)) 
                                                 | ((0x380U 
                                                     & (vlSelf->instEX 
                                                        >> 5U)) 
                                                    | ((0x7cU 
                                                        & vlSelf->instEX) 
                                                       | ((2U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                                              << 1U)) 
                                                          | (IData)(vlSelf->top__DOT__singleCycle__DOT__BrLT)))));
    vlSelf->top__DOT__singleCycle__DOT__csEX = ((0x400U 
                                                 & (vlSelf->instID 
                                                    >> 0x14U)) 
                                                | ((0x380U 
                                                    & (vlSelf->instID 
                                                       >> 5U)) 
                                                   | ((0x7cU 
                                                       & vlSelf->instID) 
                                                      | ((2U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BrLT)))));
    vlSelf->top__DOT__singleCycle__DOT__csID = ((0x400U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                                    >> 0x14U)) 
                                                | ((0x380U 
                                                    & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                                       >> 5U)) 
                                                   | ((0x7cU 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instIF) 
                                                      | ((2U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BrLT)))));
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a 
        = vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a;
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__ALU_Result 
        = ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
            ? ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                ? 0U : ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                         ? 0U : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                                  ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a, 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b))
                                  : (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                     >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b)))))
            : ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                        ? (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                           << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b))
                        : vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less)
                    : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                        ? vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less
                        : (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                           & vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b)))
                : ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                        ? (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                           | vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b)
                        : (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                           ^ vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b))
                    : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout))
                        ? ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b)))
                        : (vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a 
                           + vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b)))));
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
        if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                         ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                             ? 0x3306U
                                             : 0U) : 0U))
                            : 0U);
                } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                        } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                             >> 0xaU)))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                                = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971723b8__0;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                         ? 0xf04U : 0x144U))
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                            = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                ? 0x3306U : 0U);
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96e2b52f__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971727a4__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? 0xf04U : 0x134U))
                        : 0U);
            }
        } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U) : 
                   ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                     ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                         ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                             ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                      ? 0U : ((0x400U 
                                               & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                               ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97171f6c__0)
                                               : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d348__0))))
                         : 0U) : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                   ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                                ? 0xf04U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                                    ? 0x194U
                                                    : 0x184U)))
                                   : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                                ? 0U
                                                : 0x105U)))));
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? 0x3306U : 0U);
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__1;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
            }
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716c080__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0xf04U : 0x124U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
        if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U);
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172b90__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? 0xf04U : 0x164U))
                        : 0U);
            }
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172f7c__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__0)));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0xf04U : 0x154U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d754__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__2)));
            }
        } else if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0xf04U;
            } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csWB) 
                                 >> 0xaU)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0x174U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                             ? 0U : 0x105U));
        }
    } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0x3306U : 0U);
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0x2106U;
            } else if ((2U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
                    = vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__0;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = 0U;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout 
            = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                          ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716bc8c__0)
                                          : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716f8a8__0))))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__1))))
                : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0xf04U : 0x104U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csWB))
                                 ? 0U : 0x105U))));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
        if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                         ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                             ? 0x3306U
                                             : 0U) : 0U))
                            : 0U);
                } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                        } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                             >> 0xaU)))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                                = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971723b8__0;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                         ? 0xf04U : 0x144U))
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                            = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                ? 0x3306U : 0U);
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96e2b52f__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971727a4__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? 0xf04U : 0x134U))
                        : 0U);
            }
        } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U) : 
                   ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                     ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                         ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                             ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                      ? 0U : ((0x400U 
                                               & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                               ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97171f6c__0)
                                               : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d348__0))))
                         : 0U) : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                   ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                                ? 0xf04U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                                    ? 0x194U
                                                    : 0x184U)))
                                   : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                                ? 0U
                                                : 0x105U)))));
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? 0x3306U : 0U);
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__1;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
            }
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716c080__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0xf04U : 0x124U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
        if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U);
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172b90__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? 0xf04U : 0x164U))
                        : 0U);
            }
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172f7c__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__0)));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0xf04U : 0x154U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d754__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__2)));
            }
        } else if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0xf04U;
            } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM) 
                                 >> 0xaU)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0x174U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                             ? 0U : 0x105U));
        }
    } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0x3306U : 0U);
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0x2106U;
            } else if ((2U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
                    = vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__0;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = 0U;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout 
            = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                          ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716bc8c__0)
                                          : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716f8a8__0))))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__1))))
                : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0xf04U : 0x104U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csMEM))
                                 ? 0U : 0x105U))));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
        if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                         ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                             ? 0x3306U
                                             : 0U) : 0U))
                            : 0U);
                } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                        } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                             >> 0xaU)))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                                = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971723b8__0;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                         ? 0xf04U : 0x144U))
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                            = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                ? 0x3306U : 0U);
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96e2b52f__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971727a4__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? 0xf04U : 0x134U))
                        : 0U);
            }
        } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U) : 
                   ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                     ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                         ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                             ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                      ? 0U : ((0x400U 
                                               & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                               ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97171f6c__0)
                                               : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d348__0))))
                         : 0U) : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                   ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                                ? 0xf04U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                                    ? 0x194U
                                                    : 0x184U)))
                                   : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                                ? 0U
                                                : 0x105U)))));
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? 0x3306U : 0U);
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__1;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
            }
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716c080__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0xf04U : 0x124U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
        if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U);
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172b90__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? 0xf04U : 0x164U))
                        : 0U);
            }
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172f7c__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__0)));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0xf04U : 0x154U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d754__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__2)));
            }
        } else if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0xf04U;
            } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csEX) 
                                 >> 0xaU)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0x174U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                             ? 0U : 0x105U));
        }
    } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0x3306U : 0U);
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0x2106U;
            } else if ((2U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
                    = vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__0;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = 0U;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout 
            = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                          ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716bc8c__0)
                                          : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716f8a8__0))))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__1))))
                : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0xf04U : 0x104U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csEX))
                                 ? 0U : 0x105U))));
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
        if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                         ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                             ? 0x3306U
                                             : 0U) : 0U))
                            : 0U);
                } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                        } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                             >> 0xaU)))) {
                            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                                = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971723b8__0;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                         ? 0xf04U : 0x144U))
                            : 0U);
                }
            } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                            = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                ? 0x3306U : 0U);
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96e2b52f__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                }
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971727a4__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? 0xf04U : 0x134U))
                        : 0U);
            }
        } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U) : 
                   ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                     ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                         ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                             ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                      ? 0U : ((0x400U 
                                               & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                               ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97171f6c__0)
                                               : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d348__0))))
                         : 0U) : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                   ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                                ? 0xf04U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                                    ? 0x194U
                                                    : 0x184U)))
                                   : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                                ? 0U
                                                : 0x105U)))));
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? 0x3306U : 0U);
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__1;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
            }
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716c080__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0xf04U : 0x124U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
        if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                         ? 0x3306U : 0U)
                                     : 0U)) : 0U);
            } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                         >> 0xaU)))) {
                        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                            = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172b90__0;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                            ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? 0xf04U : 0x164U))
                        : 0U);
            }
        } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172f7c__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__0)));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0xf04U : 0x154U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : 0x105U)));
        }
    } else if ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
        if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                     ? 0x3306U : 0U)
                                 : 0U)) : 0U);
        } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
                } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                     >> 0xaU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                        = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d754__0;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__2)));
            }
        } else if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0xf04U;
            } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__csID) 
                                 >> 0xaU)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0x174U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                             ? 0U : 0x105U));
        }
    } else if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0x3306U : 0U);
            } else if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0x2106U;
            } else if ((2U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID)))) {
                vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
                    = vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__0;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = 0U;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout 
            = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                ? ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : ((0x400U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                          ? (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716bc8c__0)
                                          : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716f8a8__0))))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__1))))
                : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                    ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0xf04U : 0x104U))
                    : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                        ? 0U : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__csID))
                                 ? 0U : 0x105U))));
    }
    if ((0U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout)))) {
        vlSelf->top__DOT__singleCycle__DOT__wb_data 
            = vlSelf->top__DOT__singleCycle__DOT__ALU;
    }
    if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout)))) {
        vlSelf->top__DOT__singleCycle__DOT__wb_data 
            = vlSelf->top__DOT__singleCycle__DOT__Mem;
    }
    if ((2U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout)))) {
        vlSelf->top__DOT__singleCycle__DOT__wb_data 
            = vlSelf->top__DOT__singleCycle__DOT__PC_four;
    }
    if (vlSelf->rst_ni) {
        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                          >> 0xbU)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                              >> 0xbU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_dmem 
                        = vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data;
                }
            }
            if ((0x800U & vlSelf->top__DOT__singleCycle__DOT__ALUOut)) {
                if ((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                  >> 8U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_out 
                        = vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data;
                }
                if ((0U != (7U & (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                  >> 8U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_res 
                        = vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout) 
                      >> 3U)))) {
            if ((0x800U & vlSelf->top__DOT__singleCycle__DOT__ALUOut)) {
                vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out 
                    = (((((((((0x900U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)) 
                              | (0x8a0U == (0xfffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                             | (0x890U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                            | (0x880U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                           | (0x870U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                          | (0x860U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                         | (0x850U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))) 
                        | (0x840U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut)))
                        ? ((0x900U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                            ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram
                            : ((0x8a0U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                ? vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [0xaU] : ((0x890U == 
                                          (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                          ? (0xffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                             [9U]) : 
                                         ((0x880U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                           ? (0x1ffffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                              [8U])
                                           : ((0x870U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                               ? (0x7fU 
                                                  & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                                  [7U])
                                               : ((0x860U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                                   ? 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                                   [6U])
                                                   : 
                                                  ((0x850U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                                    ? 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                                    [5U])
                                                    : 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                                    [4U]))))))))
                        : ((0x830U == (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                            ? (0x7fU & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                               [3U]) : ((0x820U == 
                                         (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                         ? (0x7fU & 
                                            vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                            [2U]) : 
                                        ((0x810U == 
                                          (0xfffU & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                          ? (0x7fU 
                                             & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                             [1U]) : 
                                         ((0x800U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__singleCycle__DOT__ALUOut))
                                           ? (0x7fU 
                                              & vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram
                                              [0U])
                                           : 0U)))));
            } else if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                 >> 0xbU)))) {
                vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out 
                    = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
                        ? 0U : vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram
                       [(0x1ffU & (vlSelf->top__DOT__singleCycle__DOT__ALUOut 
                                   >> 2U))]);
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__PC_DUT__DOT__nxt_pc 
        = ((0x2000U & (IData)(vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout))
            ? vlSelf->top__DOT__singleCycle__DOT__ALUOut
            : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc));
    if ((0U == (7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                      >> 0xaU)))) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0x7ffU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | ((((vlSelf->top__DOT__singleCycle__DOT__instIF 
                     >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
                  | (0x800U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                               >> 0x14U))));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xfffff800U & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | (0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                            >> 0x14U)));
    } else if ((1U == (7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0x7ffU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | ((((vlSelf->top__DOT__singleCycle__DOT__instIF 
                     >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
                  | (0x800U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                               >> 0x14U))));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xfffff800U & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | ((0x7e0U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                             >> 0x14U)) | (0x1fU & 
                                           (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                            >> 7U))));
    } else if ((2U == (7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xfffU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | (((vlSelf->top__DOT__singleCycle__DOT__instIF 
                    >> 0x1fU) ? 0xfffffU : 0U) << 0xcU));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xffffe001U & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | (((0x1000U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                               >> 0x13U)) | (0x800U 
                                             & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                                << 4U))) 
                  | ((0x7e0U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                >> 0x14U)) | (0x1eU 
                                              & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                                 >> 7U)))));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = (0xfffffffeU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm);
    } else if ((3U == (7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instIF);
    } else if ((4U == (7U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout) 
                             >> 0xaU)))) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xfffffU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | ((((vlSelf->top__DOT__singleCycle__DOT__instIF 
                     >> 0x1fU) ? 1U : 0U) << 0x15U) 
                  | (0x100000U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                  >> 0xbU))));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xfff0001fU & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | ((0xff000U & vlSelf->top__DOT__singleCycle__DOT__instIF) 
                  | ((0x800U & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                >> 9U)) | (0x7e0U & 
                                           (vlSelf->top__DOT__singleCycle__DOT__instIF 
                                            >> 0x14U)))));
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm 
            = ((0xffffffe0U & vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm) 
               | (0x1eU & (vlSelf->top__DOT__singleCycle__DOT__instIF 
                           >> 0x14U)));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->instID = VL_RAND_RESET_I(32);
    vlSelf->instEX = VL_RAND_RESET_I(32);
    vlSelf->instMEM = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__csID = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__singleCycle__DOT__csEX = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__singleCycle__DOT__csMEM = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__singleCycle__DOT__csWB = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__singleCycle__DOT__instIF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__BrLT = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__pcIF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__pcID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__RegReadData1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__RegReadData2ID = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__pcEX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__RegReadData2EX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ALU = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__PC_four = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__Mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96fd1319__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h96e2b52f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9712852f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d348__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97171f6c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716d754__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971723b8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h971727a4__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716c080__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172b90__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h97172f7c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716f8a8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT____Vxrand_h9716bc8c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_ID__DOT__dataout = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96fd1319__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h96e2b52f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9712852f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d348__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97171f6c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716d754__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971723b8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h971727a4__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716c080__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172b90__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h97172f7c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716f8a8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT____Vxrand_h9716bc8c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96fd1319__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h96e2b52f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9712852f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d348__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97171f6c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716d754__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971723b8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h971727a4__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716c080__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172b90__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h97172f7c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716f8a8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT____Vxrand_h9716bc8c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_MEM__DOT__dataout = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__2 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96fd1319__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h96e2b52f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__1 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9712852f__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d348__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97171f6c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716d754__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971723b8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h971727a4__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716c080__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172b90__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h97172f7c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716f8a8__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT____Vxrand_h9716bc8c__0 = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__CU_WB__DOT__dataout = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__PC_DUT__DOT__nxt_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__IF_DUT__DOT__IMEM_DUT__DOT__Rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__ID_DUT__DOT__regfile_DUT__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__signed_operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__ALU_Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__un_output_less = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__output_less = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare0__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__alu_DUT__DOT__compare_sign0__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_signed = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_unsigned = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__result_eq = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__EX_DUT__DOT__brcomp__DOT__compare_sign__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_res = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__st_data_dmem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__ld_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__INPUT__DOT__ram = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__OUTPUT__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__LSU__DOT__DMEM__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__MEM_DUT__DOT__DMEM_DUT__DOT__STORE__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__CU_EX__DOT__dataout = VL_RAND_RESET_I(15);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
