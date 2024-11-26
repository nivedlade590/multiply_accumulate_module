// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mac__DOT__CAN_FIRE_get_A = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_get_B = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_get_C = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_get_select = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_result = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_RL_rl_mac_add = 1U;
    vlTOPp->mac__DOT__WILL_FIRE_RL_rl_mac_add = 1U;
    vlTOPp->mac__DOT__CAN_FIRE_RL_rl_mac_mul = 1U;
    vlTOPp->mac__DOT__WILL_FIRE_RL_rl_mac_mul = 1U;
    vlTOPp->mac__DOT__RDY_get_A = 1U;
    vlTOPp->mac__DOT__RDY_get_B = 1U;
    vlTOPp->mac__DOT__RDY_get_C = 1U;
    vlTOPp->mac__DOT__RDY_get_select = 1U;
    vlTOPp->mac__DOT__RDY_result = 1U;
    vlTOPp->mac__DOT__count_D_IN = 0U;
    vlTOPp->mac__DOT__count_EN = 0U;
    vlTOPp->mac__DOT__mult_float_result_EN = 1U;
    vlTOPp->mac__DOT__mult_int_result_EN = 1U;
    vlTOPp->mac__DOT__rg_out_fp_EN = 1U;
    vlTOPp->mac__DOT__rg_out_int_EN = 1U;
    vlTOPp->RDY_get_A = vlTOPp->mac__DOT__RDY_get_A;
    vlTOPp->RDY_get_B = vlTOPp->mac__DOT__RDY_get_B;
    vlTOPp->RDY_get_C = vlTOPp->mac__DOT__RDY_get_C;
    vlTOPp->RDY_get_select = vlTOPp->mac__DOT__RDY_get_select;
    vlTOPp->RDY_result = vlTOPp->mac__DOT__RDY_result;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mac__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mac__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mac__DOT__get_A_a = vlTOPp->get_A_a;
    vlTOPp->mac__DOT__EN_get_A = vlTOPp->EN_get_A;
    vlTOPp->mac__DOT__get_B_b = vlTOPp->get_B_b;
    vlTOPp->mac__DOT__EN_get_B = vlTOPp->EN_get_B;
    vlTOPp->mac__DOT__get_C_c = vlTOPp->get_C_c;
    vlTOPp->mac__DOT__EN_get_C = vlTOPp->EN_get_C;
    vlTOPp->mac__DOT__get_select_s = vlTOPp->get_select_s;
    vlTOPp->mac__DOT__EN_get_select = vlTOPp->EN_get_select;
    vlTOPp->mac__DOT__EN_result = vlTOPp->EN_result;
    vlTOPp->mac__DOT__WILL_FIRE_get_A = vlTOPp->EN_get_A;
    vlTOPp->mac__DOT__WILL_FIRE_get_B = vlTOPp->EN_get_B;
    vlTOPp->mac__DOT__WILL_FIRE_get_C = vlTOPp->EN_get_C;
    vlTOPp->mac__DOT__WILL_FIRE_get_select = vlTOPp->EN_get_select;
    vlTOPp->mac__DOT__WILL_FIRE_result = vlTOPp->EN_result;
    vlTOPp->mac__DOT__rg_A_D_IN = vlTOPp->get_A_a;
    vlTOPp->mac__DOT__rg_A_EN = vlTOPp->EN_get_A;
    vlTOPp->mac__DOT__rg_B_D_IN = vlTOPp->get_B_b;
    vlTOPp->mac__DOT__rg_B_EN = vlTOPp->EN_get_B;
    vlTOPp->mac__DOT__rg_C_D_IN = vlTOPp->get_C_c;
    vlTOPp->mac__DOT__rg_C_EN = vlTOPp->EN_get_C;
    vlTOPp->mac__DOT__rg_select_D_IN = vlTOPp->get_select_s;
    vlTOPp->mac__DOT__rg_select_EN = vlTOPp->EN_get_select;
    vlTOPp->mac__DOT__result = ((IData)(vlTOPp->mac__DOT__rg_select)
                                 ? vlTOPp->mac__DOT__rg_out_fp
                                 : vlTOPp->mac__DOT__rg_out_int);
    vlTOPp->mac__DOT__x___05Fh140588 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1fU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq63 
        = ((0x8000U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                       ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__x___05Fh140686 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1eU));
    vlTOPp->mac__DOT__y___05Fh140734 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1eU));
    vlTOPp->mac__DOT__x___05Fh140406 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1dU));
    vlTOPp->mac__DOT__y___05Fh140454 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1dU));
    vlTOPp->mac__DOT__x___05Fh140126 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1cU));
    vlTOPp->mac__DOT__y___05Fh140174 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1cU));
    vlTOPp->mac__DOT__x___05Fh139846 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1bU));
    vlTOPp->mac__DOT__y___05Fh139894 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1bU));
    vlTOPp->mac__DOT__x___05Fh139566 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1aU));
    vlTOPp->mac__DOT__y___05Fh139614 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x1aU));
    vlTOPp->mac__DOT__x___05Fh139286 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x19U));
    vlTOPp->mac__DOT__y___05Fh139334 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x19U));
    vlTOPp->mac__DOT__x___05Fh139006 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x18U));
    vlTOPp->mac__DOT__y___05Fh139054 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x18U));
    vlTOPp->mac__DOT__IF_mult_int_result_BIT_0_XOR_rg_C_BIT_0_THEN_1_ETC___05Fq64 
        = ((1U & (vlTOPp->mac__DOT__mult_int_result 
                  ^ vlTOPp->mac__DOT__rg_C)) ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh138726 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__y___05Fh138774 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh138446 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh116308 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh138494 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh116404 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh138166 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__y___05Fh138214 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh116034 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh137886 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh116130 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh137934 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh115760 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh137606 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh115856 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh137654 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh137326 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh115486 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh137374 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh115582 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh137046 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh115212 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh137094 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh115308 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh136766 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh114937 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__y___05Fh136814 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh115033 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh136486 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     & (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh114666 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__y___05Fh136534 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh136206 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh136254 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh135926 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh135974 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh135646 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh135694 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh135366 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh135414 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh135086 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh135134 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh134806 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 9U));
    vlTOPp->mac__DOT__y___05Fh134854 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh134526 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 8U));
    vlTOPp->mac__DOT__y___05Fh134574 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh134246 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 7U));
    vlTOPp->mac__DOT__y___05Fh134294 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 7U));
    vlTOPp->mac__DOT__x___05Fh133966 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 6U));
    vlTOPp->mac__DOT__y___05Fh134014 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 6U));
    vlTOPp->mac__DOT__x___05Fh133686 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 5U));
    vlTOPp->mac__DOT__y___05Fh133734 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 5U));
    vlTOPp->mac__DOT__x___05Fh133406 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 4U));
    vlTOPp->mac__DOT__y___05Fh133454 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 4U));
    vlTOPp->mac__DOT__x___05Fh133126 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 3U));
    vlTOPp->mac__DOT__expDiff___05Fh140993 = (0xffU 
                                              & ((vlTOPp->mac__DOT__mult_float_result 
                                                  >> 0x17U) 
                                                 - 
                                                 (vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh141020 = (0xffU 
                                              & ((vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U) 
                                                 - 
                                                 (vlTOPp->mac__DOT__mult_float_result 
                                                  >> 0x17U)));
    vlTOPp->mac__DOT__mult_float_result_769_BITS_30_TO_23_770_ULE_rg_ETC___05F_d1772 
        = ((0xffU & (vlTOPp->mac__DOT__mult_float_result 
                     >> 0x17U)) <= (0xffU & (vlTOPp->mac__DOT__rg_C 
                                             >> 0x17U)));
    vlTOPp->mac__DOT__y___05Fh133174 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 3U));
    vlTOPp->mac__DOT__x___05Fh132846 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 2U));
    vlTOPp->mac__DOT__y___05Fh132894 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 2U));
    vlTOPp->mac__DOT__x___05Fh132565 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               & vlTOPp->mac__DOT__rg_C) 
                                              >> 1U));
    vlTOPp->mac__DOT__IF_mult_int_result_BIT_0_AND_rg_C_BIT_0_THEN_2_ETC___05Fq7 
        = ((1U & (vlTOPp->mac__DOT__mult_int_result 
                  & vlTOPp->mac__DOT__rg_C)) ? 2U : 0U);
    vlTOPp->mac__DOT__y___05Fh132613 = (1U & ((vlTOPp->mac__DOT__mult_int_result 
                                               ^ vlTOPp->mac__DOT__rg_C) 
                                              >> 1U));
    vlTOPp->mac__DOT__IF_rg_A_BIT_0_THEN_1_ELSE_0___05Fq1 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_A)) ? 1U
            : 0U);
    vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq8 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_B));
    vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq9 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_A));
    vlTOPp->RDY_get_A = vlTOPp->mac__DOT__RDY_get_A;
    vlTOPp->RDY_get_B = vlTOPp->mac__DOT__RDY_get_B;
    vlTOPp->RDY_get_C = vlTOPp->mac__DOT__RDY_get_C;
    vlTOPp->RDY_get_select = vlTOPp->mac__DOT__RDY_get_select;
    vlTOPp->RDY_result = vlTOPp->mac__DOT__RDY_result;
    vlTOPp->result = vlTOPp->mac__DOT__result;
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3))) {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = 0U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = 1U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh116959 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh114666) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh115034 = (((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh114666));
    vlTOPp->mac__DOT__shiftedMantB___05Fh140995 = (
                                                   (0x18U 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh140993))
                                                    ? 
                                                   (0x1ffffffU 
                                                    & ((0x800000U 
                                                        | (0x7fffffU 
                                                           & vlTOPp->mac__DOT__rg_C)) 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh140993)))
                                                    : 0U);
    vlTOPp->mac__DOT__shiftedMantA___05Fh141021 = (
                                                   (0x18U 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh141020))
                                                    ? 
                                                   (0x1ffffffU 
                                                    & ((0x800000U 
                                                        | (0x7fffffU 
                                                           & vlTOPp->mac__DOT__mult_float_result)) 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh141020)))
                                                    : 0U);
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979 
        = (0xffU & ((IData)(vlTOPp->mac__DOT__mult_float_result_769_BITS_30_TO_23_770_ULE_rg_ETC___05F_d1772)
                     ? (vlTOPp->mac__DOT__rg_C >> 0x17U)
                     : (vlTOPp->mac__DOT__mult_float_result 
                        >> 0x17U)));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_1_621_XOR_rg_C_531_BIT_ETC___05F_d1753 
        = ((2U & (((IData)(vlTOPp->mac__DOT__y___05Fh132613) 
                   << 1U) ^ (0xfffffffeU & vlTOPp->mac__DOT__IF_mult_int_result_BIT_0_AND_rg_C_BIT_0_THEN_2_ETC___05Fq7))) 
           | (1U & vlTOPp->mac__DOT__IF_mult_int_result_BIT_0_XOR_rg_C_BIT_0_THEN_1_ETC___05Fq64));
    vlTOPp->mac__DOT__y___05Fh132566 = ((vlTOPp->mac__DOT__IF_mult_int_result_BIT_0_AND_rg_C_BIT_0_THEN_2_ETC___05Fq7 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__y___05Fh132613));
    vlTOPp->mac__DOT__mantissa_result___05Fh80095 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mac__DOT__rg_A)) 
                  | (1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_0_THEN_1_ELSE_0___05Fq1))));
    vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq8));
    vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq9) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq9));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5))) {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = 0U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = 1U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh119254 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh116959) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh117232 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh116959));
    vlTOPp->mac__DOT__y___05Fh114938 = ((IData)(vlTOPp->mac__DOT__x___05Fh115033) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh115034));
    if (vlTOPp->mac__DOT__mult_float_result_769_BITS_30_TO_23_770_ULE_rg_ETC___05F_d1772) {
        vlTOPp->mac__DOT__shiftedMantB___05Fh140870 
            = (0x800000U | (0x7fffffU & vlTOPp->mac__DOT__rg_C));
        vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
            = vlTOPp->mac__DOT__shiftedMantA___05Fh141021;
    } else {
        vlTOPp->mac__DOT__shiftedMantB___05Fh140870 
            = vlTOPp->mac__DOT__shiftedMantB___05Fh140995;
        vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
            = (0x800000U | (0x7fffffU & vlTOPp->mac__DOT__mult_float_result));
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979))) {
        vlTOPp->mac__DOT__IF_INV_IF_mult_float_result_769_BITS_30_TO_23___05FETC___05Fq62 = 0U;
        vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BITS_30_TO_23_770___05FETC___05Fq61 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_mult_float_result_769_BITS_30_TO_23___05FETC___05Fq62 = 1U;
        vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BITS_30_TO_23_770___05FETC___05Fq61 = 0U;
    }
    vlTOPp->mac__DOT__y___05Fh132468 = ((IData)(vlTOPp->mac__DOT__x___05Fh132565) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh132566));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh80095)
            : 0U);
    vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq10 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22))
            ? 1U : 0U);
    vlTOPp->mac__DOT__y___05Fh119527 = (((IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh119254));
    vlTOPp->mac__DOT__x___05Fh117231 = ((IData)(vlTOPp->mac__DOT__x___05Fh114937) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh114938));
    vlTOPp->mac__DOT__y___05Fh115309 = ((IData)(vlTOPp->mac__DOT__y___05Fh114938) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh114937));
    vlTOPp->mac__DOT__x___05Fh148536 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x18U));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1783 
        = (vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
           <= vlTOPp->mac__DOT__shiftedMantB___05Fh140870);
    vlTOPp->mac__DOT__x___05Fh148634 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh148256 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh148354 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh147976 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh148074 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh147696 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh147794 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh147416 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh147514 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh147136 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__IF_shiftedMantA40869_BIT_0_XOR_shiftedMantB408_ETC___05Fq60 
        = ((1U & (vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                  ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh147234 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh146856 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh146954 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh146576 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh146674 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh146296 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh146394 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh146016 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh146114 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh145736 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh145834 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh145456 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh145554 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh145176 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh145274 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh144896 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh144994 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh144616 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh144714 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh144336 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh144434 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh144056 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh144154 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 7U));
    vlTOPp->mac__DOT__x___05Fh143776 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 7U));
    vlTOPp->mac__DOT__x___05Fh143874 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 6U));
    vlTOPp->mac__DOT__x___05Fh143496 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 6U));
    vlTOPp->mac__DOT__x___05Fh143594 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 5U));
    vlTOPp->mac__DOT__x___05Fh143216 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 5U));
    vlTOPp->mac__DOT__x___05Fh143314 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 4U));
    vlTOPp->mac__DOT__x___05Fh142936 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 4U));
    vlTOPp->mac__DOT__x___05Fh143034 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 3U));
    vlTOPp->mac__DOT__x___05Fh142656 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 3U));
    vlTOPp->mac__DOT__x___05Fh142754 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 2U));
    vlTOPp->mac__DOT__x___05Fh142375 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 2U));
    vlTOPp->mac__DOT__x___05Fh142473 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 1U));
    vlTOPp->mac__DOT__IF_shiftedMantA40869_BIT_0_AND_shiftedMantB408_ETC___05Fq59 
        = ((1U & (vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                  & vlTOPp->mac__DOT__shiftedMantB___05Fh140870))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh142098 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh140870) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh149459 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BITS_30_TO_23_770___05FETC___05Fq61) 
                                               & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh132847 = ((IData)(vlTOPp->mac__DOT__y___05Fh132468) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh132894));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq41 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh86693 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh86790 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh86416 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh86513 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh86139 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh86236 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh85862 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh85959 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh85585 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh85682 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh85307 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh85404 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq40 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh85033 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mult_result___05Fh8541 = ((0xfffeU 
                                                 & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq10)));
    vlTOPp->mac__DOT__x___05Fh119526 = ((IData)(vlTOPp->mac__DOT__x___05Fh117231) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh117232));
    vlTOPp->mac__DOT__y___05Fh117507 = ((IData)(vlTOPp->mac__DOT__y___05Fh117232) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117231));
    vlTOPp->mac__DOT__y___05Fh115213 = ((IData)(vlTOPp->mac__DOT__x___05Fh115308) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh115309));
    vlTOPp->mac__DOT__IF_IF_IF_mult_float_result_769_BITS_30_TO_23_7_ETC___05F_d1786 
        = ((1U & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1783)
                   ? (vlTOPp->mac__DOT__rg_C >> 0x1fU)
                   : (vlTOPp->mac__DOT__mult_float_result 
                      >> 0x1fU))) ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__add_mant_Result___05Fh148802 
        = (0x1ffffffU & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1783)
                          ? (vlTOPp->mac__DOT__shiftedMantB___05Fh140870 
                             - vlTOPp->mac__DOT__shiftedMantA___05Fh140869)
                          : (vlTOPp->mac__DOT__shiftedMantA___05Fh140869 
                             - vlTOPp->mac__DOT__shiftedMantB___05Fh140870)));
    vlTOPp->mac__DOT__y___05Fh142474 = ((vlTOPp->mac__DOT__IF_shiftedMantA40869_BIT_0_AND_shiftedMantB408_ETC___05Fq59 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh142098));
    vlTOPp->mac__DOT__y___05Fh149737 = ((IData)(vlTOPp->mac__DOT__y___05Fh149459) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           >> 2U));
    vlTOPp->mac__DOT__y___05Fh132749 = ((IData)(vlTOPp->mac__DOT__x___05Fh132846) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh132847));
    vlTOPp->mac__DOT__y___05Fh85405 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq40) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh85033));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8541)
            : 0U);
    vlTOPp->mac__DOT__y___05Fh119802 = ((IData)(vlTOPp->mac__DOT__y___05Fh119527) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh119526));
    vlTOPp->mac__DOT__x___05Fh117506 = ((IData)(vlTOPp->mac__DOT__x___05Fh115212) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh115213));
    vlTOPp->mac__DOT__y___05Fh115583 = ((IData)(vlTOPp->mac__DOT__y___05Fh115213) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh115212));
    vlTOPp->mac__DOT__y___05Fh142376 = ((IData)(vlTOPp->mac__DOT__x___05Fh142473) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh142474));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d2007 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh149737) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh149459) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BITS_30_TO_23_770___05FETC___05Fq61))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_mult_float_result_769_BITS_30_TO_23___05FETC___05Fq62)))));
    vlTOPp->mac__DOT__y___05Fh150014 = ((IData)(vlTOPp->mac__DOT__y___05Fh149737) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           >> 3U));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_3_615_XOR_rg_C_531_BIT_ETC___05F_d1754 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh133174) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh132749)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh132894) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh132468)) 
                       << 2U) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_1_621_XOR_rg_C_531_BIT_ETC___05F_d1753)));
    vlTOPp->mac__DOT__y___05Fh133127 = ((IData)(vlTOPp->mac__DOT__y___05Fh132749) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh133174));
    vlTOPp->mac__DOT__y___05Fh85308 = ((IData)(vlTOPp->mac__DOT__x___05Fh85404) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85405));
    vlTOPp->mac__DOT__x___05Fh17183 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh17280 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh16906 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh17003 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh16629 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh16726 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq12 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh16352 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh16449 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh16075 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh16172 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh15798 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh15895 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh15521 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh15618 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh15244 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh15341 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh14967 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh15064 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh14690 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh14787 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh14413 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh14510 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh14136 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh14233 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh13858 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh13955 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh13584 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__x___05Fh119801 = ((IData)(vlTOPp->mac__DOT__x___05Fh117506) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh117507));
    vlTOPp->mac__DOT__y___05Fh117781 = ((IData)(vlTOPp->mac__DOT__y___05Fh117507) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117506));
    vlTOPp->mac__DOT__y___05Fh115487 = ((IData)(vlTOPp->mac__DOT__x___05Fh115582) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh115583));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1962 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh142375) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh142376)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh142098) 
                              << 1U) ^ (0xfffffffeU 
                                        & vlTOPp->mac__DOT__IF_shiftedMantA40869_BIT_0_AND_shiftedMantB408_ETC___05Fq59))) 
                      | (1U & vlTOPp->mac__DOT__IF_shiftedMantA40869_BIT_0_XOR_shiftedMantB408_ETC___05Fq60)));
    vlTOPp->mac__DOT__y___05Fh142755 = ((IData)(vlTOPp->mac__DOT__y___05Fh142376) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142375));
    vlTOPp->mac__DOT__y___05Fh150291 = ((IData)(vlTOPp->mac__DOT__y___05Fh150014) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           >> 4U));
    vlTOPp->mac__DOT__y___05Fh133029 = ((IData)(vlTOPp->mac__DOT__x___05Fh133126) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh133127));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d943 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh85307) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh85308)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh85033) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq40)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                                ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq41)))));
    vlTOPp->mac__DOT__y___05Fh85683 = ((IData)(vlTOPp->mac__DOT__y___05Fh85308) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh85307));
    vlTOPp->mac__DOT__y___05Fh13956 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh13584));
    vlTOPp->mac__DOT__rg_A_0_BIT_10_389_XOR_rg_B_BIT_10_390_409_XOR___05FETC___05F_d1469 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh119801) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh119802)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh119526) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh119527)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh119254) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6)))) 
                                 | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55)))));
    vlTOPp->mac__DOT__y___05Fh120076 = ((IData)(vlTOPp->mac__DOT__y___05Fh119802) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh119801));
    vlTOPp->mac__DOT__x___05Fh117780 = ((IData)(vlTOPp->mac__DOT__x___05Fh115486) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh115487));
    vlTOPp->mac__DOT__y___05Fh115857 = ((IData)(vlTOPp->mac__DOT__y___05Fh115487) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh115486));
    vlTOPp->mac__DOT__y___05Fh142657 = ((IData)(vlTOPp->mac__DOT__x___05Fh142754) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh142755));
    vlTOPp->mac__DOT__y___05Fh150568 = ((IData)(vlTOPp->mac__DOT__y___05Fh150291) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           >> 5U));
    vlTOPp->mac__DOT__y___05Fh133407 = ((IData)(vlTOPp->mac__DOT__y___05Fh133029) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh133454));
    vlTOPp->mac__DOT__y___05Fh85586 = ((IData)(vlTOPp->mac__DOT__x___05Fh85682) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85683));
    vlTOPp->mac__DOT__y___05Fh13859 = ((IData)(vlTOPp->mac__DOT__x___05Fh13955) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh13956));
    vlTOPp->mac__DOT__x___05Fh120075 = ((IData)(vlTOPp->mac__DOT__x___05Fh117780) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh117781));
    vlTOPp->mac__DOT__y___05Fh118055 = ((IData)(vlTOPp->mac__DOT__y___05Fh117781) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117780));
    vlTOPp->mac__DOT__y___05Fh115761 = ((IData)(vlTOPp->mac__DOT__x___05Fh115856) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh115857));
    vlTOPp->mac__DOT__y___05Fh143035 = ((IData)(vlTOPp->mac__DOT__y___05Fh142657) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142656));
    vlTOPp->mac__DOT__y___05Fh150845 = ((IData)(vlTOPp->mac__DOT__y___05Fh150568) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979) 
                                           >> 6U));
    vlTOPp->mac__DOT__y___05Fh133309 = ((IData)(vlTOPp->mac__DOT__x___05Fh133406) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh133407));
    vlTOPp->mac__DOT__y___05Fh85960 = ((IData)(vlTOPp->mac__DOT__y___05Fh85586) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh85585));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh13858) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh13859)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh13584) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq12)))));
    vlTOPp->mac__DOT__y___05Fh14234 = ((IData)(vlTOPp->mac__DOT__y___05Fh13859) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh13858));
    vlTOPp->mac__DOT__y___05Fh120350 = ((IData)(vlTOPp->mac__DOT__y___05Fh120076) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh120075));
    vlTOPp->mac__DOT__x___05Fh118054 = ((IData)(vlTOPp->mac__DOT__x___05Fh115760) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh115761));
    vlTOPp->mac__DOT__y___05Fh116131 = ((IData)(vlTOPp->mac__DOT__y___05Fh115761) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh115760));
    vlTOPp->mac__DOT__y___05Fh142937 = ((IData)(vlTOPp->mac__DOT__x___05Fh143034) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143035));
    vlTOPp->mac__DOT__add_exp_result___05F_1___05Fh148831 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh150845) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh150568) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh150291) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979)) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh150014) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d2007)))));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_5_609_XOR_rg_C_531_BIT_ETC___05F_d1755 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh133734) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh133309)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh133454) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh133029)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_3_615_XOR_rg_C_531_BIT_ETC___05F_d1754)));
    vlTOPp->mac__DOT__y___05Fh133687 = ((IData)(vlTOPp->mac__DOT__y___05Fh133309) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh133734));
    vlTOPp->mac__DOT__y___05Fh85863 = ((IData)(vlTOPp->mac__DOT__x___05Fh85959) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85960));
    vlTOPp->mac__DOT__y___05Fh14137 = ((IData)(vlTOPp->mac__DOT__x___05Fh14233) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh14234));
    vlTOPp->mac__DOT__x___05Fh120349 = ((IData)(vlTOPp->mac__DOT__x___05Fh118054) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh118055));
    vlTOPp->mac__DOT__y___05Fh118329 = ((IData)(vlTOPp->mac__DOT__y___05Fh118055) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh118054));
    vlTOPp->mac__DOT__y___05Fh116035 = ((IData)(vlTOPp->mac__DOT__x___05Fh116130) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh116131));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1963 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh142936) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh142937)) 
            << 4U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh142656) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh142657)) 
                       << 3U) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1962)));
    vlTOPp->mac__DOT__y___05Fh143315 = ((IData)(vlTOPp->mac__DOT__y___05Fh142937) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142936));
    vlTOPp->mac__DOT__y___05Fh133589 = ((IData)(vlTOPp->mac__DOT__x___05Fh133686) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh133687));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d944 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh85862) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh85863)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh85585) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh85586)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d943)));
    vlTOPp->mac__DOT__y___05Fh86237 = ((IData)(vlTOPp->mac__DOT__y___05Fh85863) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh85862));
    vlTOPp->mac__DOT__y___05Fh14511 = ((IData)(vlTOPp->mac__DOT__y___05Fh14137) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14136));
    vlTOPp->mac__DOT__rg_A_0_BIT_12_383_XOR_rg_B_BIT_12_384_415_XOR___05FETC___05F_d1470 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh120349) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh120350)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh120075) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh120076)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_10_389_XOR_rg_B_BIT_10_390_409_XOR___05FETC___05F_d1469)));
    vlTOPp->mac__DOT__y___05Fh120624 = ((IData)(vlTOPp->mac__DOT__y___05Fh120350) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh120349));
    vlTOPp->mac__DOT__x___05Fh118328 = ((IData)(vlTOPp->mac__DOT__x___05Fh116034) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh116035));
    vlTOPp->mac__DOT__y___05Fh116405 = ((IData)(vlTOPp->mac__DOT__y___05Fh116035) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh116034));
    vlTOPp->mac__DOT__y___05Fh143217 = ((IData)(vlTOPp->mac__DOT__x___05Fh143314) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143315));
    vlTOPp->mac__DOT__y___05Fh133967 = ((IData)(vlTOPp->mac__DOT__y___05Fh133589) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh134014));
    vlTOPp->mac__DOT__y___05Fh86140 = ((IData)(vlTOPp->mac__DOT__x___05Fh86236) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh86237));
    vlTOPp->mac__DOT__y___05Fh14414 = ((IData)(vlTOPp->mac__DOT__x___05Fh14510) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh14511));
    vlTOPp->mac__DOT__x___05Fh120623 = ((IData)(vlTOPp->mac__DOT__x___05Fh118328) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh118329));
    vlTOPp->mac__DOT__y___05Fh118603 = ((IData)(vlTOPp->mac__DOT__y___05Fh118329) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh118328));
    vlTOPp->mac__DOT__y___05Fh116309 = ((IData)(vlTOPp->mac__DOT__x___05Fh116404) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh116405));
    vlTOPp->mac__DOT__y___05Fh143595 = ((IData)(vlTOPp->mac__DOT__y___05Fh143217) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143216));
    vlTOPp->mac__DOT__y___05Fh133869 = ((IData)(vlTOPp->mac__DOT__x___05Fh133966) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh133967));
    vlTOPp->mac__DOT__y___05Fh86514 = ((IData)(vlTOPp->mac__DOT__y___05Fh86140) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh86139));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh14413) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh14414)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh14136) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh14137)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133)));
    vlTOPp->mac__DOT__y___05Fh14788 = ((IData)(vlTOPp->mac__DOT__y___05Fh14414) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14413));
    vlTOPp->mac__DOT__y___05Fh120898 = ((IData)(vlTOPp->mac__DOT__y___05Fh120624) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh120623));
    vlTOPp->mac__DOT__x___05Fh118602 = (1U & (~ ((IData)(vlTOPp->mac__DOT__x___05Fh116308) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh116309))));
    vlTOPp->mac__DOT__y___05Fh143497 = ((IData)(vlTOPp->mac__DOT__x___05Fh143594) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143595));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_7_603_XOR_rg_C_531_BIT_ETC___05F_d1756 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh134294) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh133869)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh134014) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh133589)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_5_609_XOR_rg_C_531_BIT_ETC___05F_d1755)));
    vlTOPp->mac__DOT__y___05Fh134247 = ((IData)(vlTOPp->mac__DOT__y___05Fh133869) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh134294));
    vlTOPp->mac__DOT__y___05Fh86417 = ((IData)(vlTOPp->mac__DOT__x___05Fh86513) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh86514));
    vlTOPp->mac__DOT__y___05Fh14691 = ((IData)(vlTOPp->mac__DOT__x___05Fh14787) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh14788));
    vlTOPp->mac__DOT__x___05Fh120897 = ((IData)(vlTOPp->mac__DOT__x___05Fh118602) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh118603));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1964 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh143496) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh143497)) 
            << 6U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh143216) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh143217)) 
                       << 5U) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1963)));
    vlTOPp->mac__DOT__y___05Fh143875 = ((IData)(vlTOPp->mac__DOT__y___05Fh143497) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143496));
    vlTOPp->mac__DOT__y___05Fh134149 = ((IData)(vlTOPp->mac__DOT__x___05Fh134246) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh134247));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d945 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh86416) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh86417)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh86139) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh86140)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d944)));
    vlTOPp->mac__DOT__y___05Fh86791 = ((IData)(vlTOPp->mac__DOT__y___05Fh86417) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh86416));
    vlTOPp->mac__DOT__y___05Fh15065 = ((IData)(vlTOPp->mac__DOT__y___05Fh14691) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14690));
    vlTOPp->mac__DOT__spliced_bits___05Fh114101 = (
                                                   (((IData)(vlTOPp->mac__DOT__x___05Fh120897) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh120898)) 
                                                    << 7U) 
                                                   | ((((IData)(vlTOPp->mac__DOT__x___05Fh120623) 
                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh120624)) 
                                                       << 6U) 
                                                      | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_12_383_XOR_rg_B_BIT_12_384_415_XOR___05FETC___05F_d1470)));
    vlTOPp->mac__DOT__spliced_bits___05Fh114128 = (
                                                   ((IData)(vlTOPp->mac__DOT__x___05Fh120897) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->mac__DOT__x___05Fh120623) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->mac__DOT__x___05Fh120349) 
                                                          << 5U) 
                                                         | (((IData)(vlTOPp->mac__DOT__x___05Fh120075) 
                                                             << 4U) 
                                                            | (((IData)(vlTOPp->mac__DOT__x___05Fh119801) 
                                                                << 3U) 
                                                               | (((IData)(vlTOPp->mac__DOT__x___05Fh119526) 
                                                                   << 2U) 
                                                                  | (((IData)(vlTOPp->mac__DOT__x___05Fh119254) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5)))))))));
    vlTOPp->mac__DOT__y___05Fh143777 = ((IData)(vlTOPp->mac__DOT__x___05Fh143874) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143875));
    vlTOPp->mac__DOT__y___05Fh134527 = ((IData)(vlTOPp->mac__DOT__y___05Fh134149) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh134574));
    vlTOPp->mac__DOT__y___05Fh86694 = ((IData)(vlTOPp->mac__DOT__x___05Fh86790) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh86791));
    vlTOPp->mac__DOT__y___05Fh14968 = ((IData)(vlTOPp->mac__DOT__x___05Fh15064) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15065));
    vlTOPp->mac__DOT__y___05Fh144155 = ((IData)(vlTOPp->mac__DOT__y___05Fh143777) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143776));
    vlTOPp->mac__DOT__y___05Fh134429 = ((IData)(vlTOPp->mac__DOT__x___05Fh134526) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh134527));
    vlTOPp->mac__DOT__y___05Fh87068 = ((IData)(vlTOPp->mac__DOT__y___05Fh86694) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh86693));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh14967) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh14968)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh14690) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh14691)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134)));
    vlTOPp->mac__DOT__y___05Fh15342 = ((IData)(vlTOPp->mac__DOT__y___05Fh14968) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14967));
    vlTOPp->mac__DOT__y___05Fh144057 = ((IData)(vlTOPp->mac__DOT__x___05Fh144154) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144155));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_9_597_XOR_rg_C_531_BIT_ETC___05F_d1757 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh134854) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh134429)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh134574) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh134149)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_7_603_XOR_rg_C_531_BIT_ETC___05F_d1756)));
    vlTOPp->mac__DOT__y___05Fh134807 = ((IData)(vlTOPp->mac__DOT__y___05Fh134429) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh134854));
    vlTOPp->mac__DOT__y___05Fh86971 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                              >> 8U) 
                                             | (IData)(vlTOPp->mac__DOT__y___05Fh87068)));
    vlTOPp->mac__DOT__y___05Fh15245 = ((IData)(vlTOPp->mac__DOT__x___05Fh15341) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15342));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1965 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh144056) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh144057)) 
            << 8U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh143776) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh143777)) 
                       << 7U) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1964)));
    vlTOPp->mac__DOT__y___05Fh144435 = ((IData)(vlTOPp->mac__DOT__y___05Fh144057) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144056));
    vlTOPp->mac__DOT__y___05Fh134709 = ((IData)(vlTOPp->mac__DOT__x___05Fh134806) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh134807));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d946 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh86971) 
                         << 9U))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh86693) 
                                       ^ (IData)(vlTOPp->mac__DOT__y___05Fh86694)) 
                                      << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d945)));
    vlTOPp->mac__DOT__y___05Fh87248 = ((IData)(vlTOPp->mac__DOT__y___05Fh86971) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 9U));
    vlTOPp->mac__DOT__y___05Fh15619 = ((IData)(vlTOPp->mac__DOT__y___05Fh15245) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15244));
    vlTOPp->mac__DOT__y___05Fh144337 = ((IData)(vlTOPp->mac__DOT__x___05Fh144434) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144435));
    vlTOPp->mac__DOT__y___05Fh135087 = ((IData)(vlTOPp->mac__DOT__y___05Fh134709) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh135134));
    vlTOPp->mac__DOT__y___05Fh87525 = ((IData)(vlTOPp->mac__DOT__y___05Fh87248) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh15522 = ((IData)(vlTOPp->mac__DOT__x___05Fh15618) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15619));
    vlTOPp->mac__DOT__y___05Fh144715 = ((IData)(vlTOPp->mac__DOT__y___05Fh144337) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144336));
    vlTOPp->mac__DOT__y___05Fh134989 = ((IData)(vlTOPp->mac__DOT__x___05Fh135086) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh135087));
    vlTOPp->mac__DOT__y___05Fh87802 = ((IData)(vlTOPp->mac__DOT__y___05Fh87525) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh15521) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh15522)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh15244) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh15245)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135)));
    vlTOPp->mac__DOT__y___05Fh15896 = ((IData)(vlTOPp->mac__DOT__y___05Fh15522) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15521));
    vlTOPp->mac__DOT__y___05Fh144617 = ((IData)(vlTOPp->mac__DOT__x___05Fh144714) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144715));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_11_591_XOR_rg_C_531_BI_ETC___05F_d1758 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh135414) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh134989)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__y___05Fh135134) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh134709)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_9_597_XOR_rg_C_531_BIT_ETC___05F_d1757)));
    vlTOPp->mac__DOT__y___05Fh135367 = ((IData)(vlTOPp->mac__DOT__y___05Fh134989) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh135414));
    vlTOPp->mac__DOT__y___05Fh88079 = ((IData)(vlTOPp->mac__DOT__y___05Fh87802) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh15799 = ((IData)(vlTOPp->mac__DOT__x___05Fh15895) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15896));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1966 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh144616) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh144617)) 
            << 0xaU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh144336) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh144337)) 
                         << 9U) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1965)));
    vlTOPp->mac__DOT__y___05Fh144995 = ((IData)(vlTOPp->mac__DOT__y___05Fh144617) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144616));
    vlTOPp->mac__DOT__y___05Fh135269 = ((IData)(vlTOPp->mac__DOT__x___05Fh135366) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh135367));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d948 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh88079) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh87802) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh87525) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh87248) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d946)))));
    vlTOPp->mac__DOT__y___05Fh88356 = ((IData)(vlTOPp->mac__DOT__y___05Fh88079) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh16173 = ((IData)(vlTOPp->mac__DOT__y___05Fh15799) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15798));
    vlTOPp->mac__DOT__y___05Fh144897 = ((IData)(vlTOPp->mac__DOT__x___05Fh144994) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144995));
    vlTOPp->mac__DOT__y___05Fh135647 = ((IData)(vlTOPp->mac__DOT__y___05Fh135269) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh135694));
    vlTOPp->mac__DOT__y___05Fh88633 = ((IData)(vlTOPp->mac__DOT__y___05Fh88356) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh16076 = ((IData)(vlTOPp->mac__DOT__x___05Fh16172) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16173));
    vlTOPp->mac__DOT__y___05Fh145275 = ((IData)(vlTOPp->mac__DOT__y___05Fh144897) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144896));
    vlTOPp->mac__DOT__y___05Fh135549 = ((IData)(vlTOPp->mac__DOT__x___05Fh135646) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh135647));
    vlTOPp->mac__DOT__mantissa_result___05Fh79586 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh88633) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh88356) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d948)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16075) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16076)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh15798) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh15799)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136)));
    vlTOPp->mac__DOT__y___05Fh16450 = ((IData)(vlTOPp->mac__DOT__y___05Fh16076) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16075));
    vlTOPp->mac__DOT__y___05Fh145177 = ((IData)(vlTOPp->mac__DOT__x___05Fh145274) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145275));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_13_585_XOR_rg_C_531_BI_ETC___05F_d1759 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh135974) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh135549)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__y___05Fh135694) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh135269)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_11_591_XOR_rg_C_531_BI_ETC___05F_d1758)));
    vlTOPp->mac__DOT__y___05Fh135927 = ((IData)(vlTOPp->mac__DOT__y___05Fh135549) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh135974));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950 
        = ((2U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh79586)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866));
    vlTOPp->mac__DOT__y___05Fh16353 = ((IData)(vlTOPp->mac__DOT__x___05Fh16449) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16450));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1967 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh145176) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh145177)) 
            << 0xcU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh144896) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh144897)) 
                         << 0xbU) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1966)));
    vlTOPp->mac__DOT__y___05Fh145555 = ((IData)(vlTOPp->mac__DOT__y___05Fh145177) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145176));
    vlTOPp->mac__DOT__y___05Fh135829 = ((IData)(vlTOPp->mac__DOT__x___05Fh135926) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh135927));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq43 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh91182 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh91279 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh90905 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh91002 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh90628 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh90725 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh90351 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh90448 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh90074 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh90171 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh89796 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh89893 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq42 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh89522 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh16727 = ((IData)(vlTOPp->mac__DOT__y___05Fh16353) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16352));
    vlTOPp->mac__DOT__y___05Fh145457 = ((IData)(vlTOPp->mac__DOT__x___05Fh145554) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145555));
    vlTOPp->mac__DOT__y___05Fh136207 = ((IData)(vlTOPp->mac__DOT__y___05Fh135829) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh136254));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1019 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh89522) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq42)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                     ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq43)))));
    vlTOPp->mac__DOT__y___05Fh89894 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq42) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh89522));
    vlTOPp->mac__DOT__y___05Fh16630 = ((IData)(vlTOPp->mac__DOT__x___05Fh16726) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16727));
    vlTOPp->mac__DOT__y___05Fh145835 = ((IData)(vlTOPp->mac__DOT__y___05Fh145457) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145456));
    vlTOPp->mac__DOT__y___05Fh136109 = ((IData)(vlTOPp->mac__DOT__x___05Fh136206) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh136207));
    vlTOPp->mac__DOT__y___05Fh89797 = ((IData)(vlTOPp->mac__DOT__x___05Fh89893) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh89894));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16629) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16630)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh16352) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh16353)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137)));
    vlTOPp->mac__DOT__y___05Fh17004 = ((IData)(vlTOPp->mac__DOT__y___05Fh16630) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16629));
    vlTOPp->mac__DOT__y___05Fh145737 = ((IData)(vlTOPp->mac__DOT__x___05Fh145834) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145835));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_15_579_XOR_rg_C_531_BI_ETC___05F_d1760 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh136534) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh136109)) 
            << 0xfU) | ((((IData)(vlTOPp->mac__DOT__y___05Fh136254) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh135829)) 
                         << 0xeU) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_13_585_XOR_rg_C_531_BI_ETC___05F_d1759)));
    vlTOPp->mac__DOT__y___05Fh136487 = ((IData)(vlTOPp->mac__DOT__y___05Fh136109) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh136534));
    vlTOPp->mac__DOT__y___05Fh90172 = ((IData)(vlTOPp->mac__DOT__y___05Fh89797) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh89796));
    vlTOPp->mac__DOT__y___05Fh16907 = ((IData)(vlTOPp->mac__DOT__x___05Fh17003) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17004));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1968 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh145736) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh145737)) 
            << 0xeU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh145456) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh145457)) 
                         << 0xdU) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1967)));
    vlTOPp->mac__DOT__y___05Fh146115 = ((IData)(vlTOPp->mac__DOT__y___05Fh145737) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145736));
    vlTOPp->mac__DOT__y___05Fh136389 = ((IData)(vlTOPp->mac__DOT__x___05Fh136486) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh136487));
    vlTOPp->mac__DOT__y___05Fh90075 = ((IData)(vlTOPp->mac__DOT__x___05Fh90171) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90172));
    vlTOPp->mac__DOT__y___05Fh17281 = ((IData)(vlTOPp->mac__DOT__y___05Fh16907) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16906));
    vlTOPp->mac__DOT__y___05Fh146017 = ((IData)(vlTOPp->mac__DOT__x___05Fh146114) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146115));
    vlTOPp->mac__DOT__y___05Fh136767 = ((IData)(vlTOPp->mac__DOT__y___05Fh136389) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh136814));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1020 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh90074) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh90075)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh89796) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh89797)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1019)));
    vlTOPp->mac__DOT__y___05Fh90449 = ((IData)(vlTOPp->mac__DOT__y___05Fh90075) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90074));
    vlTOPp->mac__DOT__y___05Fh17184 = ((IData)(vlTOPp->mac__DOT__x___05Fh17280) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17281));
    vlTOPp->mac__DOT__y___05Fh146395 = ((IData)(vlTOPp->mac__DOT__y___05Fh146017) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146016));
    vlTOPp->mac__DOT__y___05Fh136669 = ((IData)(vlTOPp->mac__DOT__x___05Fh136766) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh136767));
    vlTOPp->mac__DOT__y___05Fh90352 = ((IData)(vlTOPp->mac__DOT__x___05Fh90448) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90449));
    vlTOPp->mac__DOT__mult_result___05Fh8008 = ((((IData)(vlTOPp->mac__DOT__x___05Fh17183) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh17184)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh16906) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh16907)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138)));
    vlTOPp->mac__DOT__y___05Fh146297 = ((IData)(vlTOPp->mac__DOT__x___05Fh146394) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146395));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_17_573_XOR_rg_C_531_BI_ETC___05F_d1761 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh137094) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh136669)) 
            << 0x11U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh136814) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh136389)) 
                          << 0x10U) | (IData)(vlTOPp->mac__DOT__mult_int_result_529_BIT_15_579_XOR_rg_C_531_BI_ETC___05F_d1760)));
    vlTOPp->mac__DOT__y___05Fh137047 = ((IData)(vlTOPp->mac__DOT__y___05Fh136669) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh137094));
    vlTOPp->mac__DOT__y___05Fh90726 = ((IData)(vlTOPp->mac__DOT__y___05Fh90352) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90351));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140 
        = ((2U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8008)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1969 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh146296) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh146297)) 
            << 0x10U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh146016) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh146017)) 
                          << 0xfU) | (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1968)));
    vlTOPp->mac__DOT__y___05Fh146675 = ((IData)(vlTOPp->mac__DOT__y___05Fh146297) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146296));
    vlTOPp->mac__DOT__y___05Fh136949 = ((IData)(vlTOPp->mac__DOT__x___05Fh137046) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh137047));
    vlTOPp->mac__DOT__y___05Fh90629 = ((IData)(vlTOPp->mac__DOT__x___05Fh90725) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90726));
    vlTOPp->mac__DOT__x___05Fh21419 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh21516 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh21142 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh21239 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh20865 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh20962 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq14 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh20588 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh20685 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh20311 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh20408 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh20034 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh20131 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh19757 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh19854 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh19480 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh19577 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh19203 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh19300 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh18926 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh19023 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh18649 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh18746 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh18371 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh18468 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh18097 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh146577 = ((IData)(vlTOPp->mac__DOT__x___05Fh146674) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146675));
    vlTOPp->mac__DOT__y___05Fh137327 = ((IData)(vlTOPp->mac__DOT__y___05Fh136949) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh137374));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1021 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh90628) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh90629)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh90351) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh90352)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1020)));
    vlTOPp->mac__DOT__y___05Fh91003 = ((IData)(vlTOPp->mac__DOT__y___05Fh90629) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90628));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh18097) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                     ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq14)))));
    vlTOPp->mac__DOT__y___05Fh18469 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh18097));
    vlTOPp->mac__DOT__y___05Fh146955 = ((IData)(vlTOPp->mac__DOT__y___05Fh146577) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146576));
    vlTOPp->mac__DOT__y___05Fh137229 = ((IData)(vlTOPp->mac__DOT__x___05Fh137326) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh137327));
    vlTOPp->mac__DOT__y___05Fh90906 = ((IData)(vlTOPp->mac__DOT__x___05Fh91002) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh91003));
    vlTOPp->mac__DOT__y___05Fh18372 = ((IData)(vlTOPp->mac__DOT__x___05Fh18468) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh18469));
    vlTOPp->mac__DOT__y___05Fh146857 = ((IData)(vlTOPp->mac__DOT__x___05Fh146954) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146955));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_19_567_XOR_rg_C_531_BI_ETC___05F_d1762 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh137654) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh137229)) 
            << 0x13U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh137374) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh136949)) 
                          << 0x12U) | vlTOPp->mac__DOT__mult_int_result_529_BIT_17_573_XOR_rg_C_531_BI_ETC___05F_d1761));
    vlTOPp->mac__DOT__y___05Fh137607 = ((IData)(vlTOPp->mac__DOT__y___05Fh137229) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh137654));
    vlTOPp->mac__DOT__y___05Fh91280 = ((IData)(vlTOPp->mac__DOT__y___05Fh90906) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90905));
    vlTOPp->mac__DOT__y___05Fh18747 = ((IData)(vlTOPp->mac__DOT__y___05Fh18372) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh18371));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1970 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh146856) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh146857)) 
            << 0x12U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh146576) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh146577)) 
                          << 0x11U) | vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1969));
    vlTOPp->mac__DOT__y___05Fh147235 = ((IData)(vlTOPp->mac__DOT__y___05Fh146857) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146856));
    vlTOPp->mac__DOT__y___05Fh137509 = ((IData)(vlTOPp->mac__DOT__x___05Fh137606) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh137607));
    vlTOPp->mac__DOT__y___05Fh91183 = ((IData)(vlTOPp->mac__DOT__x___05Fh91279) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh91280));
    vlTOPp->mac__DOT__y___05Fh18650 = ((IData)(vlTOPp->mac__DOT__x___05Fh18746) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh18747));
    vlTOPp->mac__DOT__y___05Fh147137 = ((IData)(vlTOPp->mac__DOT__x___05Fh147234) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147235));
    vlTOPp->mac__DOT__y___05Fh137887 = ((IData)(vlTOPp->mac__DOT__y___05Fh137509) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh137934));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THE_ETC___05F_d1022 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh91182) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh91183)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh90905) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh90906)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1021)));
    vlTOPp->mac__DOT__y___05Fh91557 = ((IData)(vlTOPp->mac__DOT__y___05Fh91183) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh91182));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh18649) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh18650)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh18371) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh18372)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226)));
    vlTOPp->mac__DOT__y___05Fh19024 = ((IData)(vlTOPp->mac__DOT__y___05Fh18650) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh18649));
    vlTOPp->mac__DOT__y___05Fh147515 = ((IData)(vlTOPp->mac__DOT__y___05Fh147137) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147136));
    vlTOPp->mac__DOT__y___05Fh137789 = ((IData)(vlTOPp->mac__DOT__x___05Fh137886) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh137887));
    vlTOPp->mac__DOT__y___05Fh91460 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                              >> 9U) 
                                             | (IData)(vlTOPp->mac__DOT__y___05Fh91557)));
    vlTOPp->mac__DOT__y___05Fh18927 = ((IData)(vlTOPp->mac__DOT__x___05Fh19023) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19024));
    vlTOPp->mac__DOT__y___05Fh147417 = ((IData)(vlTOPp->mac__DOT__x___05Fh147514) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147515));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_21_561_XOR_rg_C_531_BI_ETC___05F_d1763 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh138214) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh137789)) 
            << 0x15U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh137934) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh137509)) 
                          << 0x14U) | vlTOPp->mac__DOT__mult_int_result_529_BIT_19_567_XOR_rg_C_531_BI_ETC___05F_d1762));
    vlTOPp->mac__DOT__y___05Fh138167 = ((IData)(vlTOPp->mac__DOT__y___05Fh137789) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh138214));
    vlTOPp->mac__DOT__y___05Fh91737 = ((IData)(vlTOPp->mac__DOT__y___05Fh91460) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                          >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh19301 = ((IData)(vlTOPp->mac__DOT__y___05Fh18927) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh18926));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1971 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh147416) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh147417)) 
            << 0x14U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh147136) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh147137)) 
                          << 0x13U) | vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1970));
    vlTOPp->mac__DOT__y___05Fh147795 = ((IData)(vlTOPp->mac__DOT__y___05Fh147417) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147416));
    vlTOPp->mac__DOT__y___05Fh138069 = ((IData)(vlTOPp->mac__DOT__x___05Fh138166) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh138167));
    vlTOPp->mac__DOT__y___05Fh92014 = ((IData)(vlTOPp->mac__DOT__y___05Fh91737) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh19204 = ((IData)(vlTOPp->mac__DOT__x___05Fh19300) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19301));
    vlTOPp->mac__DOT__y___05Fh147697 = ((IData)(vlTOPp->mac__DOT__x___05Fh147794) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147795));
    vlTOPp->mac__DOT__y___05Fh138447 = ((IData)(vlTOPp->mac__DOT__y___05Fh138069) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh138494));
    vlTOPp->mac__DOT__y___05Fh92291 = ((IData)(vlTOPp->mac__DOT__y___05Fh92014) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh19203) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh19204)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh18926) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh18927)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227)));
    vlTOPp->mac__DOT__y___05Fh19578 = ((IData)(vlTOPp->mac__DOT__y___05Fh19204) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19203));
    vlTOPp->mac__DOT__y___05Fh148075 = ((IData)(vlTOPp->mac__DOT__y___05Fh147697) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147696));
    vlTOPp->mac__DOT__y___05Fh138349 = ((IData)(vlTOPp->mac__DOT__x___05Fh138446) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh138447));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1024 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh92291) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh92014) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh91737) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh91460) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THE_ETC___05F_d1022)))));
    vlTOPp->mac__DOT__y___05Fh92568 = ((IData)(vlTOPp->mac__DOT__y___05Fh92291) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh19481 = ((IData)(vlTOPp->mac__DOT__x___05Fh19577) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19578));
    vlTOPp->mac__DOT__y___05Fh147977 = ((IData)(vlTOPp->mac__DOT__x___05Fh148074) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh148075));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_23_555_XOR_rg_C_531_BI_ETC___05F_d1764 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh138774) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh138349)) 
            << 0x17U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh138494) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh138069)) 
                          << 0x16U) | vlTOPp->mac__DOT__mult_int_result_529_BIT_21_561_XOR_rg_C_531_BI_ETC___05F_d1763));
    vlTOPp->mac__DOT__y___05Fh138727 = ((IData)(vlTOPp->mac__DOT__y___05Fh138349) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh138774));
    vlTOPp->mac__DOT__y___05Fh92845 = ((IData)(vlTOPp->mac__DOT__y___05Fh92568) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh19855 = ((IData)(vlTOPp->mac__DOT__y___05Fh19481) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19480));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1972 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh147976) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh147977)) 
            << 0x16U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh147696) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh147697)) 
                          << 0x15U) | vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1971));
    vlTOPp->mac__DOT__y___05Fh148355 = ((IData)(vlTOPp->mac__DOT__y___05Fh147977) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147976));
    vlTOPp->mac__DOT__y___05Fh138629 = ((IData)(vlTOPp->mac__DOT__x___05Fh138726) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh138727));
    vlTOPp->mac__DOT__mantissa_result___05Fh79077 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh92845) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh92568) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1024)));
    vlTOPp->mac__DOT__y___05Fh19758 = ((IData)(vlTOPp->mac__DOT__x___05Fh19854) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19855));
    vlTOPp->mac__DOT__y___05Fh148257 = ((IData)(vlTOPp->mac__DOT__x___05Fh148354) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh148355));
    vlTOPp->mac__DOT__y___05Fh139007 = ((IData)(vlTOPp->mac__DOT__y___05Fh138629) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh139054));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026 
        = ((4U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh79077)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh19757) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh19758)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh19480) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh19481)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228)));
    vlTOPp->mac__DOT__y___05Fh20132 = ((IData)(vlTOPp->mac__DOT__y___05Fh19758) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19757));
    vlTOPp->mac__DOT__y___05Fh148635 = ((IData)(vlTOPp->mac__DOT__y___05Fh148257) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh148256));
    vlTOPp->mac__DOT__y___05Fh138909 = ((IData)(vlTOPp->mac__DOT__x___05Fh139006) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh139007));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq45 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh95666 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh95763 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh95389 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh95486 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh95112 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh95209 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh94835 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh94932 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh94558 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh94655 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh94280 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh94377 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq44 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh94006 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh20035 = ((IData)(vlTOPp->mac__DOT__x___05Fh20131) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20132));
    vlTOPp->mac__DOT__y___05Fh148537 = ((IData)(vlTOPp->mac__DOT__x___05Fh148634) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh148635));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_25_549_XOR_rg_C_531_BI_ETC___05F_d1765 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh139334) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh138909)) 
            << 0x19U) | ((((IData)(vlTOPp->mac__DOT__y___05Fh139054) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh138629)) 
                          << 0x18U) | vlTOPp->mac__DOT__mult_int_result_529_BIT_23_555_XOR_rg_C_531_BI_ETC___05F_d1764));
    vlTOPp->mac__DOT__y___05Fh139287 = ((IData)(vlTOPp->mac__DOT__y___05Fh138909) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh139334));
    vlTOPp->mac__DOT__y___05Fh94378 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq44) 
                                        >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh94006));
    vlTOPp->mac__DOT__y___05Fh20409 = ((IData)(vlTOPp->mac__DOT__y___05Fh20035) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20034));
    vlTOPp->mac__DOT__add_mant_Result___05Fh141290 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh148536) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh148537)) 
            << 0x18U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh148256) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh148257)) 
                          << 0x17U) | vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1972));
    vlTOPp->mac__DOT__y___05Fh139189 = ((IData)(vlTOPp->mac__DOT__x___05Fh139286) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh139287));
    vlTOPp->mac__DOT__y___05Fh94281 = ((IData)(vlTOPp->mac__DOT__x___05Fh94377) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh94378));
    vlTOPp->mac__DOT__y___05Fh20312 = ((IData)(vlTOPp->mac__DOT__x___05Fh20408) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20409));
    vlTOPp->mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977 
        = (((1U & (vlTOPp->mac__DOT__mult_float_result 
                   >> 0x1fU)) == (1U & (vlTOPp->mac__DOT__rg_C 
                                        >> 0x1fU)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh141290
            : vlTOPp->mac__DOT__add_mant_Result___05Fh148802);
    vlTOPp->mac__DOT__y___05Fh139567 = ((IData)(vlTOPp->mac__DOT__y___05Fh139189) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh139614));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1092 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh94280) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh94281)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh94006) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq44)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                                ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq45))))));
    vlTOPp->mac__DOT__y___05Fh94656 = ((IData)(vlTOPp->mac__DOT__y___05Fh94281) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh94280));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20311) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20312)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20034) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh20035)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229)));
    vlTOPp->mac__DOT__y___05Fh20686 = ((IData)(vlTOPp->mac__DOT__y___05Fh20312) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20311));
    vlTOPp->mac__DOT__spliced_bits___05Fh140904 = (
                                                   (0x1000000U 
                                                    & vlTOPp->mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977)
                                                    ? (IData)(vlTOPp->mac__DOT__add_exp_result___05F_1___05Fh148831)
                                                    : (IData)(vlTOPp->mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979));
    vlTOPp->mac__DOT__add_mant_Result___05Fh148830 
        = (0x1fffffeU & (vlTOPp->mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977 
                         << 1U));
    vlTOPp->mac__DOT__add_mant_Result___05Fh151156 
        = (0x1fffffcU & (vlTOPp->mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977 
                         << 2U));
    vlTOPp->mac__DOT__y___05Fh139469 = ((IData)(vlTOPp->mac__DOT__x___05Fh139566) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh139567));
    vlTOPp->mac__DOT__y___05Fh94559 = ((IData)(vlTOPp->mac__DOT__x___05Fh94655) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh94656));
    vlTOPp->mac__DOT__y___05Fh20589 = ((IData)(vlTOPp->mac__DOT__x___05Fh20685) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20686));
    vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BIT_31_784_EQ_rg_C_ETC___05Fq66 
        = ((0x1000000U & vlTOPp->mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977)
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh148830
            : vlTOPp->mac__DOT__add_mant_Result___05Fh151156);
    vlTOPp->mac__DOT__mult_int_result_529_BIT_27_543_XOR_rg_C_531_BI_ETC___05F_d1766 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh139894) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh139469)) 
            << 0x1bU) | ((((IData)(vlTOPp->mac__DOT__y___05Fh139614) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh139189)) 
                          << 0x1aU) | vlTOPp->mac__DOT__mult_int_result_529_BIT_25_549_XOR_rg_C_531_BI_ETC___05F_d1765));
    vlTOPp->mac__DOT__y___05Fh139847 = ((IData)(vlTOPp->mac__DOT__y___05Fh139469) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh139894));
    vlTOPp->mac__DOT__y___05Fh94933 = ((IData)(vlTOPp->mac__DOT__y___05Fh94559) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh94558));
    vlTOPp->mac__DOT__y___05Fh20963 = ((IData)(vlTOPp->mac__DOT__y___05Fh20589) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20588));
    vlTOPp->mac__DOT__rg_out_fp_D_IN = ((0x80000000U 
                                         & vlTOPp->mac__DOT__IF_IF_IF_mult_float_result_769_BITS_30_TO_23_7_ETC___05F_d1786) 
                                        | (((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh140904) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (vlTOPp->mac__DOT__IF_IF_mult_float_result_769_BIT_31_784_EQ_rg_C_ETC___05Fq66 
                                                 >> 2U))));
    vlTOPp->mac__DOT__y___05Fh139749 = ((IData)(vlTOPp->mac__DOT__x___05Fh139846) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh139847));
    vlTOPp->mac__DOT__y___05Fh94836 = ((IData)(vlTOPp->mac__DOT__x___05Fh94932) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh94933));
    vlTOPp->mac__DOT__y___05Fh20866 = ((IData)(vlTOPp->mac__DOT__x___05Fh20962) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20963));
    vlTOPp->mac__DOT__y___05Fh140127 = ((IData)(vlTOPp->mac__DOT__y___05Fh139749) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh140174));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1093 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh94835) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh94836)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh94558) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh94559)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1092)));
    vlTOPp->mac__DOT__y___05Fh95210 = ((IData)(vlTOPp->mac__DOT__y___05Fh94836) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh94835));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20865) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20866)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20588) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh20589)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230)));
    vlTOPp->mac__DOT__y___05Fh21240 = ((IData)(vlTOPp->mac__DOT__y___05Fh20866) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20865));
    vlTOPp->mac__DOT__y___05Fh140029 = ((IData)(vlTOPp->mac__DOT__x___05Fh140126) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh140127));
    vlTOPp->mac__DOT__y___05Fh95113 = ((IData)(vlTOPp->mac__DOT__x___05Fh95209) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95210));
    vlTOPp->mac__DOT__y___05Fh21143 = ((IData)(vlTOPp->mac__DOT__x___05Fh21239) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21240));
    vlTOPp->mac__DOT__mult_int_result_529_BIT_29_537_XOR_rg_C_531_BI_ETC___05F_d1767 
        = ((((IData)(vlTOPp->mac__DOT__y___05Fh140454) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh140029)) 
            << 0x1dU) | ((((IData)(vlTOPp->mac__DOT__y___05Fh140174) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh139749)) 
                          << 0x1cU) | vlTOPp->mac__DOT__mult_int_result_529_BIT_27_543_XOR_rg_C_531_BI_ETC___05F_d1766));
    vlTOPp->mac__DOT__y___05Fh140407 = ((IData)(vlTOPp->mac__DOT__y___05Fh140029) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh140454));
    vlTOPp->mac__DOT__y___05Fh95487 = ((IData)(vlTOPp->mac__DOT__y___05Fh95113) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95112));
    vlTOPp->mac__DOT__y___05Fh21517 = ((IData)(vlTOPp->mac__DOT__y___05Fh21143) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21142));
    vlTOPp->mac__DOT__y___05Fh140309 = ((IData)(vlTOPp->mac__DOT__x___05Fh140406) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh140407));
    vlTOPp->mac__DOT__y___05Fh95390 = ((IData)(vlTOPp->mac__DOT__x___05Fh95486) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95487));
    vlTOPp->mac__DOT__y___05Fh21420 = ((IData)(vlTOPp->mac__DOT__x___05Fh21516) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21517));
    vlTOPp->mac__DOT__y___05Fh140687 = ((IData)(vlTOPp->mac__DOT__y___05Fh140309) 
                                        & (IData)(vlTOPp->mac__DOT__y___05Fh140734));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1094 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh95389) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh95390)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh95112) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh95113)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1093)));
    vlTOPp->mac__DOT__y___05Fh95764 = ((IData)(vlTOPp->mac__DOT__y___05Fh95390) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95389));
    vlTOPp->mac__DOT__mult_result___05Fh7475 = ((((IData)(vlTOPp->mac__DOT__x___05Fh21419) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh21420)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh21142) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh21143)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231)));
    vlTOPp->mac__DOT__y___05Fh140589 = ((IData)(vlTOPp->mac__DOT__x___05Fh140686) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh140687));
    vlTOPp->mac__DOT__y___05Fh95667 = ((IData)(vlTOPp->mac__DOT__x___05Fh95763) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95764));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233 
        = ((4U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh7475)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140));
    vlTOPp->mac__DOT__rg_out_int_D_IN = ((((IData)(vlTOPp->mac__DOT__x___05Fh140588) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh140589)) 
                                          << 0x1fU) 
                                         | ((((IData)(vlTOPp->mac__DOT__y___05Fh140734) 
                                              ^ (IData)(vlTOPp->mac__DOT__y___05Fh140309)) 
                                             << 0x1eU) 
                                            | vlTOPp->mac__DOT__mult_int_result_529_BIT_29_537_XOR_rg_C_531_BI_ETC___05F_d1767));
    vlTOPp->mac__DOT__y___05Fh96041 = ((IData)(vlTOPp->mac__DOT__y___05Fh95667) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95666));
    vlTOPp->mac__DOT__x___05Fh25650 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh25747 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh25373 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh25470 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh25096 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq16 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh25193 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh24819 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh24916 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh24542 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh24639 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh24265 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh24362 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh23988 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh24085 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh23711 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh23808 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh23434 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh23531 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh23157 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh23254 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh22879 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh22976 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh22605 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh95944 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                              >> 0xaU) 
                                             | (IData)(vlTOPp->mac__DOT__y___05Fh96041)));
    vlTOPp->mac__DOT__y___05Fh22977 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15) 
                                        >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh22605));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1095 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh95944) 
                         << 0xbU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh95666) 
                                         ^ (IData)(vlTOPp->mac__DOT__y___05Fh95667)) 
                                        << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1094)));
    vlTOPp->mac__DOT__y___05Fh96221 = ((IData)(vlTOPp->mac__DOT__y___05Fh95944) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh22880 = ((IData)(vlTOPp->mac__DOT__x___05Fh22976) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh22977));
    vlTOPp->mac__DOT__y___05Fh96498 = ((IData)(vlTOPp->mac__DOT__y___05Fh96221) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh22879) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh22880)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh22605) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq16))))));
    vlTOPp->mac__DOT__y___05Fh23255 = ((IData)(vlTOPp->mac__DOT__y___05Fh22880) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh22879));
    vlTOPp->mac__DOT__y___05Fh96775 = ((IData)(vlTOPp->mac__DOT__y___05Fh96498) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh23158 = ((IData)(vlTOPp->mac__DOT__x___05Fh23254) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh23255));
    vlTOPp->mac__DOT__y___05Fh97052 = ((IData)(vlTOPp->mac__DOT__y___05Fh96775) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh23532 = ((IData)(vlTOPp->mac__DOT__y___05Fh23158) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23157));
    vlTOPp->mac__DOT__mantissa_result___05Fh78568 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh97052) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh96775) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh96498) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026)) 
                                                ^ ((IData)(vlTOPp->mac__DOT__y___05Fh96221) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1095)))));
    vlTOPp->mac__DOT__y___05Fh23435 = ((IData)(vlTOPp->mac__DOT__x___05Fh23531) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh23532));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098 
        = ((8U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh78568)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh23434) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh23435)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh23157) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh23158)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313)));
    vlTOPp->mac__DOT__y___05Fh23809 = ((IData)(vlTOPp->mac__DOT__y___05Fh23435) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23434));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq47 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh100145 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                                 >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh100242 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh99868 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh99965 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh99591 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh99688 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh99314 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh99411 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh99037 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh99134 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh98759 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh98856 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq46 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh98485 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh23712 = ((IData)(vlTOPp->mac__DOT__x___05Fh23808) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh23809));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1161 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh98485) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq46)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                        ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq47)))));
    vlTOPp->mac__DOT__y___05Fh98857 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq46) 
                                        >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh98485));
    vlTOPp->mac__DOT__y___05Fh24086 = ((IData)(vlTOPp->mac__DOT__y___05Fh23712) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23711));
    vlTOPp->mac__DOT__y___05Fh98760 = ((IData)(vlTOPp->mac__DOT__x___05Fh98856) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh98857));
    vlTOPp->mac__DOT__y___05Fh23989 = ((IData)(vlTOPp->mac__DOT__x___05Fh24085) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24086));
    vlTOPp->mac__DOT__y___05Fh99135 = ((IData)(vlTOPp->mac__DOT__y___05Fh98760) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh98759));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh23988) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh23989)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh23711) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh23712)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314)));
    vlTOPp->mac__DOT__y___05Fh24363 = ((IData)(vlTOPp->mac__DOT__y___05Fh23989) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23988));
    vlTOPp->mac__DOT__y___05Fh99038 = ((IData)(vlTOPp->mac__DOT__x___05Fh99134) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99135));
    vlTOPp->mac__DOT__y___05Fh24266 = ((IData)(vlTOPp->mac__DOT__x___05Fh24362) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24363));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1162 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh99037) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh99038)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh98759) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh98760)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1161)));
    vlTOPp->mac__DOT__y___05Fh99412 = ((IData)(vlTOPp->mac__DOT__y___05Fh99038) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99037));
    vlTOPp->mac__DOT__y___05Fh24640 = ((IData)(vlTOPp->mac__DOT__y___05Fh24266) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24265));
    vlTOPp->mac__DOT__y___05Fh99315 = ((IData)(vlTOPp->mac__DOT__x___05Fh99411) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99412));
    vlTOPp->mac__DOT__y___05Fh24543 = ((IData)(vlTOPp->mac__DOT__x___05Fh24639) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24640));
    vlTOPp->mac__DOT__y___05Fh99689 = ((IData)(vlTOPp->mac__DOT__y___05Fh99315) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99314));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh24542) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh24543)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh24265) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh24266)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315)));
    vlTOPp->mac__DOT__y___05Fh24917 = ((IData)(vlTOPp->mac__DOT__y___05Fh24543) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24542));
    vlTOPp->mac__DOT__y___05Fh99592 = ((IData)(vlTOPp->mac__DOT__x___05Fh99688) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99689));
    vlTOPp->mac__DOT__y___05Fh24820 = ((IData)(vlTOPp->mac__DOT__x___05Fh24916) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24917));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1163 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh99591) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh99592)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh99314) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh99315)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1162)));
    vlTOPp->mac__DOT__y___05Fh99966 = ((IData)(vlTOPp->mac__DOT__y___05Fh99592) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99591));
    vlTOPp->mac__DOT__y___05Fh25194 = ((IData)(vlTOPp->mac__DOT__y___05Fh24820) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24819));
    vlTOPp->mac__DOT__y___05Fh99869 = ((IData)(vlTOPp->mac__DOT__x___05Fh99965) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99966));
    vlTOPp->mac__DOT__y___05Fh25097 = ((IData)(vlTOPp->mac__DOT__x___05Fh25193) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25194));
    vlTOPp->mac__DOT__y___05Fh100243 = ((IData)(vlTOPp->mac__DOT__y___05Fh99869) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh99868));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh25096) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh25097)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh24819) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh24820)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316)));
    vlTOPp->mac__DOT__y___05Fh25471 = ((IData)(vlTOPp->mac__DOT__y___05Fh25097) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25096));
    vlTOPp->mac__DOT__y___05Fh100146 = ((IData)(vlTOPp->mac__DOT__x___05Fh100242) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh100243));
    vlTOPp->mac__DOT__y___05Fh25374 = ((IData)(vlTOPp->mac__DOT__x___05Fh25470) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25471));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THE_ETC___05F_d1164 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh100145) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh100146)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh99868) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh99869)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1163)));
    vlTOPp->mac__DOT__y___05Fh100520 = ((IData)(vlTOPp->mac__DOT__y___05Fh100146) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100145));
    vlTOPp->mac__DOT__y___05Fh25748 = ((IData)(vlTOPp->mac__DOT__y___05Fh25374) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25373));
    vlTOPp->mac__DOT__y___05Fh100423 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                               >> 0xbU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh100520)));
    vlTOPp->mac__DOT__y___05Fh25651 = ((IData)(vlTOPp->mac__DOT__x___05Fh25747) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25748));
    vlTOPp->mac__DOT__y___05Fh100700 = ((IData)(vlTOPp->mac__DOT__y___05Fh100423) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__mult_result___05Fh6942 = ((((IData)(vlTOPp->mac__DOT__x___05Fh25650) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh25651)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh25373) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh25374)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317)));
    vlTOPp->mac__DOT__y___05Fh100977 = ((IData)(vlTOPp->mac__DOT__y___05Fh100700) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319 
        = ((8U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6942)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233));
    vlTOPp->mac__DOT__y___05Fh101254 = ((IData)(vlTOPp->mac__DOT__y___05Fh100977) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh29876 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh29973 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh29599 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh29696 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh29322 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq18 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh29419 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh29045 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh29142 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh28768 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh28865 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh28491 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh28588 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh28214 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh28311 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh27937 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh28034 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh27660 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh27757 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh27382 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh27479 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh27108 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mantissa_result___05Fh78059 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh101254) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh100977) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh100700) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098)) 
                                                ^ ((IData)(vlTOPp->mac__DOT__y___05Fh100423) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THE_ETC___05F_d1164)))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh27108) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq18)))));
    vlTOPp->mac__DOT__y___05Fh27480 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17) 
                                        >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh27108));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh78059)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098));
    vlTOPp->mac__DOT__y___05Fh27383 = ((IData)(vlTOPp->mac__DOT__x___05Fh27479) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh27480));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq49 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh104619 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                                 >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh104716 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh104342 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh104439 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh104065 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh104162 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh103788 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh103885 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh103511 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh103608 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh103233 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh103330 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq48 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh102959 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 6U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh27758 = ((IData)(vlTOPp->mac__DOT__y___05Fh27383) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh27382));
    vlTOPp->mac__DOT__y___05Fh103331 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq48) 
                                         >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh102959));
    vlTOPp->mac__DOT__y___05Fh27661 = ((IData)(vlTOPp->mac__DOT__x___05Fh27757) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh27758));
    vlTOPp->mac__DOT__y___05Fh103234 = ((IData)(vlTOPp->mac__DOT__x___05Fh103330) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh103331));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh27660) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh27661)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh27382) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh27383)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393)));
    vlTOPp->mac__DOT__y___05Fh28035 = ((IData)(vlTOPp->mac__DOT__y___05Fh27661) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh27660));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1227 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh103233) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh103234)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh102959) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq48)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq49))))));
    vlTOPp->mac__DOT__y___05Fh103609 = ((IData)(vlTOPp->mac__DOT__y___05Fh103234) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103233));
    vlTOPp->mac__DOT__y___05Fh27938 = ((IData)(vlTOPp->mac__DOT__x___05Fh28034) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28035));
    vlTOPp->mac__DOT__y___05Fh103512 = ((IData)(vlTOPp->mac__DOT__x___05Fh103608) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh103609));
    vlTOPp->mac__DOT__y___05Fh28312 = ((IData)(vlTOPp->mac__DOT__y___05Fh27938) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh27937));
    vlTOPp->mac__DOT__y___05Fh103886 = ((IData)(vlTOPp->mac__DOT__y___05Fh103512) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103511));
    vlTOPp->mac__DOT__y___05Fh28215 = ((IData)(vlTOPp->mac__DOT__x___05Fh28311) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28312));
    vlTOPp->mac__DOT__y___05Fh103789 = ((IData)(vlTOPp->mac__DOT__x___05Fh103885) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh103886));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh28214) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh28215)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh27937) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh27938)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394)));
    vlTOPp->mac__DOT__y___05Fh28589 = ((IData)(vlTOPp->mac__DOT__y___05Fh28215) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28214));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1228 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh103788) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh103789)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh103511) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh103512)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1227)));
    vlTOPp->mac__DOT__y___05Fh104163 = ((IData)(vlTOPp->mac__DOT__y___05Fh103789) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103788));
    vlTOPp->mac__DOT__y___05Fh28492 = ((IData)(vlTOPp->mac__DOT__x___05Fh28588) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28589));
    vlTOPp->mac__DOT__y___05Fh104066 = ((IData)(vlTOPp->mac__DOT__x___05Fh104162) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104163));
    vlTOPp->mac__DOT__y___05Fh28866 = ((IData)(vlTOPp->mac__DOT__y___05Fh28492) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28491));
    vlTOPp->mac__DOT__y___05Fh104440 = ((IData)(vlTOPp->mac__DOT__y___05Fh104066) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104065));
    vlTOPp->mac__DOT__y___05Fh28769 = ((IData)(vlTOPp->mac__DOT__x___05Fh28865) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28866));
    vlTOPp->mac__DOT__y___05Fh104343 = ((IData)(vlTOPp->mac__DOT__x___05Fh104439) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104440));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh28768) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh28769)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh28491) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh28492)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395)));
    vlTOPp->mac__DOT__y___05Fh29143 = ((IData)(vlTOPp->mac__DOT__y___05Fh28769) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28768));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1229 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh104342) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh104343)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh104065) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh104066)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1228)));
    vlTOPp->mac__DOT__y___05Fh104717 = ((IData)(vlTOPp->mac__DOT__y___05Fh104343) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104342));
    vlTOPp->mac__DOT__y___05Fh29046 = ((IData)(vlTOPp->mac__DOT__x___05Fh29142) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29143));
    vlTOPp->mac__DOT__y___05Fh104620 = ((IData)(vlTOPp->mac__DOT__x___05Fh104716) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104717));
    vlTOPp->mac__DOT__y___05Fh29420 = ((IData)(vlTOPp->mac__DOT__y___05Fh29046) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29045));
    vlTOPp->mac__DOT__y___05Fh104994 = ((IData)(vlTOPp->mac__DOT__y___05Fh104620) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104619));
    vlTOPp->mac__DOT__y___05Fh29323 = ((IData)(vlTOPp->mac__DOT__x___05Fh29419) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29420));
    vlTOPp->mac__DOT__y___05Fh104897 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                               >> 0xcU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh104994)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh29322) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh29323)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh29045) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh29046)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396)));
    vlTOPp->mac__DOT__y___05Fh29697 = ((IData)(vlTOPp->mac__DOT__y___05Fh29323) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29322));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1230 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh104897) 
                          << 0xdU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh104619) 
                                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh104620)) 
                                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1229)));
    vlTOPp->mac__DOT__y___05Fh105174 = ((IData)(vlTOPp->mac__DOT__y___05Fh104897) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh29600 = ((IData)(vlTOPp->mac__DOT__x___05Fh29696) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29697));
    vlTOPp->mac__DOT__y___05Fh105451 = ((IData)(vlTOPp->mac__DOT__y___05Fh105174) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh29974 = ((IData)(vlTOPp->mac__DOT__y___05Fh29600) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29599));
    vlTOPp->mac__DOT__mantissa_result___05Fh77550 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh105451) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh105174) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1230)));
    vlTOPp->mac__DOT__y___05Fh29877 = ((IData)(vlTOPp->mac__DOT__x___05Fh29973) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29974));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh77550)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167));
    vlTOPp->mac__DOT__mult_result___05Fh6409 = ((((IData)(vlTOPp->mac__DOT__x___05Fh29876) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh29877)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh29599) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh29600)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397)));
    vlTOPp->mac__DOT__x___05Fh109088 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                                 >> 0xdU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq51 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh109185 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xcU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh108811 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xcU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh108908 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh108534 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh108631 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh108257 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh108354 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh107980 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh108077 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh107702 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh107799 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq50 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh107428 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6409)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1289 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh107428) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq50)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232)) 
                        ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq51)))));
    vlTOPp->mac__DOT__y___05Fh107800 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq50) 
                                         >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh107428));
    vlTOPp->mac__DOT__x___05Fh34097 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh34194 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh33820 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh33917 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq20 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh33543 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh33640 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh33266 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh33363 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh32989 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh33086 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh32712 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh32809 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh32435 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh32532 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh32158 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh32255 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh31880 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh31977 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh31606 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh107703 = ((IData)(vlTOPp->mac__DOT__x___05Fh107799) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh107800));
    vlTOPp->mac__DOT__y___05Fh31978 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19) 
                                        >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh31606));
    vlTOPp->mac__DOT__y___05Fh108078 = ((IData)(vlTOPp->mac__DOT__y___05Fh107703) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh107702));
    vlTOPp->mac__DOT__y___05Fh31881 = ((IData)(vlTOPp->mac__DOT__x___05Fh31977) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh31978));
    vlTOPp->mac__DOT__y___05Fh107981 = ((IData)(vlTOPp->mac__DOT__x___05Fh108077) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108078));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh31880) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh31881)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh31606) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq20))))));
    vlTOPp->mac__DOT__y___05Fh32256 = ((IData)(vlTOPp->mac__DOT__y___05Fh31881) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh31880));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1290 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh107980) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh107981)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh107702) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh107703)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1289)));
    vlTOPp->mac__DOT__y___05Fh108355 = ((IData)(vlTOPp->mac__DOT__y___05Fh107981) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh107980));
    vlTOPp->mac__DOT__y___05Fh32159 = ((IData)(vlTOPp->mac__DOT__x___05Fh32255) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh32256));
    vlTOPp->mac__DOT__y___05Fh108258 = ((IData)(vlTOPp->mac__DOT__x___05Fh108354) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108355));
    vlTOPp->mac__DOT__y___05Fh32533 = ((IData)(vlTOPp->mac__DOT__y___05Fh32159) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32158));
    vlTOPp->mac__DOT__y___05Fh108632 = ((IData)(vlTOPp->mac__DOT__y___05Fh108258) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108257));
    vlTOPp->mac__DOT__y___05Fh32436 = ((IData)(vlTOPp->mac__DOT__x___05Fh32532) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh32533));
    vlTOPp->mac__DOT__y___05Fh108535 = ((IData)(vlTOPp->mac__DOT__x___05Fh108631) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108632));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh32435) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh32436)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh32158) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh32159)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467)));
    vlTOPp->mac__DOT__y___05Fh32810 = ((IData)(vlTOPp->mac__DOT__y___05Fh32436) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32435));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1291 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh108534) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh108535)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh108257) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh108258)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1290)));
    vlTOPp->mac__DOT__y___05Fh108909 = ((IData)(vlTOPp->mac__DOT__y___05Fh108535) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108534));
    vlTOPp->mac__DOT__y___05Fh32713 = ((IData)(vlTOPp->mac__DOT__x___05Fh32809) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh32810));
    vlTOPp->mac__DOT__y___05Fh108812 = ((IData)(vlTOPp->mac__DOT__x___05Fh108908) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108909));
    vlTOPp->mac__DOT__y___05Fh33087 = ((IData)(vlTOPp->mac__DOT__y___05Fh32713) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32712));
    vlTOPp->mac__DOT__y___05Fh109186 = ((IData)(vlTOPp->mac__DOT__y___05Fh108812) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108811));
    vlTOPp->mac__DOT__y___05Fh32990 = ((IData)(vlTOPp->mac__DOT__x___05Fh33086) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33087));
    vlTOPp->mac__DOT__y___05Fh109089 = ((IData)(vlTOPp->mac__DOT__x___05Fh109185) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh109186));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh32989) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh32990)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh32712) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh32713)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468)));
    vlTOPp->mac__DOT__y___05Fh33364 = ((IData)(vlTOPp->mac__DOT__y___05Fh32990) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32989));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THE_ETC___05F_d1292 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh109088) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh109089)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh108811) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh108812)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1291)));
    vlTOPp->mac__DOT__y___05Fh109463 = ((IData)(vlTOPp->mac__DOT__y___05Fh109089) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh109088));
    vlTOPp->mac__DOT__y___05Fh33267 = ((IData)(vlTOPp->mac__DOT__x___05Fh33363) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33364));
    vlTOPp->mac__DOT__y___05Fh109366 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                               >> 0xdU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh109463)));
    vlTOPp->mac__DOT__y___05Fh33641 = ((IData)(vlTOPp->mac__DOT__y___05Fh33267) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33266));
    vlTOPp->mac__DOT__y___05Fh109643 = ((IData)(vlTOPp->mac__DOT__y___05Fh109366) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh33544 = ((IData)(vlTOPp->mac__DOT__x___05Fh33640) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33641));
    vlTOPp->mac__DOT__mantissa_result___05Fh77041 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh109643) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh109366) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THE_ETC___05F_d1292)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh33543) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh33544)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh33266) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh33267)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469)));
    vlTOPp->mac__DOT__y___05Fh33918 = ((IData)(vlTOPp->mac__DOT__y___05Fh33544) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33543));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh77041)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232));
    vlTOPp->mac__DOT__y___05Fh33821 = ((IData)(vlTOPp->mac__DOT__x___05Fh33917) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33918));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq53 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh113552 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                                 >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh113649 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xdU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh113275 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xdU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh113372 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xcU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh112998 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xcU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh113095 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh112721 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh112818 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh112444 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh112541 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh112166 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh112263 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq52 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh111892 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh34195 = ((IData)(vlTOPp->mac__DOT__y___05Fh33821) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33820));
    vlTOPp->mac__DOT__y___05Fh112264 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq52) 
                                         >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh111892));
    vlTOPp->mac__DOT__y___05Fh34098 = ((IData)(vlTOPp->mac__DOT__x___05Fh34194) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34195));
    vlTOPp->mac__DOT__y___05Fh112167 = ((IData)(vlTOPp->mac__DOT__x___05Fh112263) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh112264));
    vlTOPp->mac__DOT__mult_result___05Fh5876 = ((((IData)(vlTOPp->mac__DOT__x___05Fh34097) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh34098)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh33820) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh33821)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1348 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh112166) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh112167)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh111892) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq52)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq53))))));
    vlTOPp->mac__DOT__y___05Fh112542 = ((IData)(vlTOPp->mac__DOT__y___05Fh112167) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh112166));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5876)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399));
    vlTOPp->mac__DOT__y___05Fh112445 = ((IData)(vlTOPp->mac__DOT__x___05Fh112541) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh112542));
    vlTOPp->mac__DOT__x___05Fh38313 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh38410 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh38036 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh38133 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq22 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh37759 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh37856 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh37482 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh37579 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh37205 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh37302 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh36928 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh37025 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh36651 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh36748 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh36373 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh36470 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh36099 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh112819 = ((IData)(vlTOPp->mac__DOT__y___05Fh112445) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh112444));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh36099) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq22)))));
    vlTOPp->mac__DOT__y___05Fh36471 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21) 
                                        >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh36099));
    vlTOPp->mac__DOT__y___05Fh112722 = ((IData)(vlTOPp->mac__DOT__x___05Fh112818) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh112819));
    vlTOPp->mac__DOT__y___05Fh36374 = ((IData)(vlTOPp->mac__DOT__x___05Fh36470) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh36471));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1349 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh112721) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh112722)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh112444) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh112445)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1348)));
    vlTOPp->mac__DOT__y___05Fh113096 = ((IData)(vlTOPp->mac__DOT__y___05Fh112722) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh112721));
    vlTOPp->mac__DOT__y___05Fh36749 = ((IData)(vlTOPp->mac__DOT__y___05Fh36374) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh36373));
    vlTOPp->mac__DOT__y___05Fh112999 = ((IData)(vlTOPp->mac__DOT__x___05Fh113095) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113096));
    vlTOPp->mac__DOT__y___05Fh36652 = ((IData)(vlTOPp->mac__DOT__x___05Fh36748) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh36749));
    vlTOPp->mac__DOT__y___05Fh113373 = ((IData)(vlTOPp->mac__DOT__y___05Fh112999) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh112998));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh36651) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh36652)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh36373) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh36374)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534)));
    vlTOPp->mac__DOT__y___05Fh37026 = ((IData)(vlTOPp->mac__DOT__y___05Fh36652) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh36651));
    vlTOPp->mac__DOT__y___05Fh113276 = ((IData)(vlTOPp->mac__DOT__x___05Fh113372) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113373));
    vlTOPp->mac__DOT__y___05Fh36929 = ((IData)(vlTOPp->mac__DOT__x___05Fh37025) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37026));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1350 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh113275) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh113276)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh112998) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh112999)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1349)));
    vlTOPp->mac__DOT__y___05Fh113650 = ((IData)(vlTOPp->mac__DOT__y___05Fh113276) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh113275));
    vlTOPp->mac__DOT__y___05Fh37303 = ((IData)(vlTOPp->mac__DOT__y___05Fh36929) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh36928));
    vlTOPp->mac__DOT__mantissa_result___05Fh121184 
        = ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1350) 
           << 2U);
    vlTOPp->mac__DOT__y___05Fh113553 = ((IData)(vlTOPp->mac__DOT__x___05Fh113649) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113650));
    vlTOPp->mac__DOT__y___05Fh37206 = ((IData)(vlTOPp->mac__DOT__x___05Fh37302) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37303));
    vlTOPp->mac__DOT__mantissa_result___05Fh114098 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh113552) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh113553)) 
            << 0xfU) | ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1350) 
                        << 1U));
    vlTOPp->mac__DOT__y___05Fh113927 = ((IData)(vlTOPp->mac__DOT__y___05Fh113553) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh113552));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh37205) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh37206)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh36928) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh36929)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535)));
    vlTOPp->mac__DOT__y___05Fh37580 = ((IData)(vlTOPp->mac__DOT__y___05Fh37206) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37205));
    vlTOPp->mac__DOT__y___05Fh113830 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                                               >> 0xeU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh113927)));
    vlTOPp->mac__DOT__y___05Fh37483 = ((IData)(vlTOPp->mac__DOT__x___05Fh37579) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37580));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1334 
        = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294) 
                  >> 0xfU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh113830)));
    vlTOPp->mac__DOT__y___05Fh37857 = ((IData)(vlTOPp->mac__DOT__y___05Fh37483) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37482));
    if (vlTOPp->mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1334) {
        vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097 
            = vlTOPp->mac__DOT__mantissa_result___05Fh114098;
        vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476 
            = vlTOPp->mac__DOT__spliced_bits___05Fh114101;
    } else {
        vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097 
            = vlTOPp->mac__DOT__mantissa_result___05Fh121184;
        vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476 
            = vlTOPp->mac__DOT__spliced_bits___05Fh114128;
    }
    vlTOPp->mac__DOT__y___05Fh37760 = ((IData)(vlTOPp->mac__DOT__x___05Fh37856) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37857));
    if ((0x200U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097))) {
        vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_2_snd14097_BIT_9_THEN_2_E_ETC___05Fq57 = 0U;
        vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_9_THEN_4_ELSE_0___05Fq54 = 4U;
    } else {
        vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_2_snd14097_BIT_9_THEN_2_E_ETC___05Fq57 = 2U;
        vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_9_THEN_4_ELSE_0___05Fq54 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476))) {
        vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5___05FETC___05Fq58 = 0U;
        vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05Fq56 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5___05FETC___05Fq58 = 1U;
        vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05Fq56 = 0U;
    }
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh37759) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh37760)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh37482) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh37483)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536)));
    vlTOPp->mac__DOT__y___05Fh38134 = ((IData)(vlTOPp->mac__DOT__y___05Fh37760) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37759));
    vlTOPp->mac__DOT__y___05Fh122210 = (1U & (((IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_9_THEN_4_ELSE_0___05Fq54) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                                 >> 0xaU)));
    vlTOPp->mac__DOT__y___05Fh124527 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05Fq56) 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh38037 = ((IData)(vlTOPp->mac__DOT__x___05Fh38133) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38134));
    vlTOPp->mac__DOT__y___05Fh122485 = ((IData)(vlTOPp->mac__DOT__y___05Fh122210) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                           >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh124802 = ((IData)(vlTOPp->mac__DOT__y___05Fh124527) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           >> 2U));
    vlTOPp->mac__DOT__y___05Fh38411 = ((IData)(vlTOPp->mac__DOT__y___05Fh38037) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38036));
    vlTOPp->mac__DOT__y___05Fh122759 = ((IData)(vlTOPp->mac__DOT__y___05Fh122485) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1504 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh124802) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh124527) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05Fq56))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5___05FETC___05Fq58)))));
    vlTOPp->mac__DOT__y___05Fh125076 = ((IData)(vlTOPp->mac__DOT__y___05Fh124802) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           >> 3U));
    vlTOPp->mac__DOT__y___05Fh38314 = ((IData)(vlTOPp->mac__DOT__x___05Fh38410) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38411));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1521 
        = ((0x20U & ((0xffffe0U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                   >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh122759) 
                                              << 5U))) 
           | ((0x10U & ((0xfffff0U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                      >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh122485) 
                                                 << 4U))) 
              | ((8U & ((0xfffff8U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                      >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh122210) 
                                                 << 3U))) 
                 | ((4U & ((0xfffffcU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                         >> 8U)) ^ 
                           (0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_9_THEN_4_ELSE_0___05Fq54)))) 
                    | (3U & (IData)(vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_2_snd14097_BIT_9_THEN_2_E_ETC___05Fq57))))));
    vlTOPp->mac__DOT__y___05Fh123033 = ((IData)(vlTOPp->mac__DOT__y___05Fh122759) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh125350 = ((IData)(vlTOPp->mac__DOT__y___05Fh125076) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           >> 4U));
    vlTOPp->mac__DOT__mult_result___05Fh5343 = ((((IData)(vlTOPp->mac__DOT__x___05Fh38313) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh38314)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh38036) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh38037)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537)));
    vlTOPp->mac__DOT__y___05Fh123307 = ((IData)(vlTOPp->mac__DOT__y___05Fh123033) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh125624 = ((IData)(vlTOPp->mac__DOT__y___05Fh125350) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           >> 5U));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5343)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1525 
        = ((1U & ((((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                    >> 7U) | (0U != (0x3f80U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                                << 7U)))) 
                  | ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                     >> 9U))) ? ((0x80U & ((0xffff80U 
                                            & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                               >> 8U)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh123307) 
                                              << 7U))) 
                                 | ((0x40U & ((0xffffc0U 
                                               & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                                  >> 8U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh123033) 
                                                 << 6U))) 
                                    | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1521)))
            : (0xfeU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                        >> 8U)));
    vlTOPp->mac__DOT__y___05Fh125898 = ((IData)(vlTOPp->mac__DOT__y___05Fh125624) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476) 
                                           >> 6U));
    vlTOPp->mac__DOT__x___05Fh42524 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh42621 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh42247 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq24 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh42344 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh41970 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh42067 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh41693 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh41790 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh41416 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh41513 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh41139 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh41236 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh40861 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh40958 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh40587 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_8_THEN_IF_IF_I_ETC___05Fq65 
        = ((0x100U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097))
            ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1525)
            : (0xfeU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                        >> 8U)));
    vlTOPp->mac__DOT__spliced_bits___05Fh123842 = (
                                                   (0x80U 
                                                    & ((0xffffff80U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh125898) 
                                                        << 7U))) 
                                                   | ((0x40U 
                                                       & ((0xffffffc0U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__y___05Fh125624) 
                                                           << 6U))) 
                                                      | ((0x20U 
                                                          & ((0xffffffe0U 
                                                              & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mac__DOT__y___05Fh125350) 
                                                              << 5U))) 
                                                         | ((0x10U 
                                                             & ((0xfffffff0U 
                                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mac__DOT__y___05Fh125076) 
                                                                 << 4U))) 
                                                            | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1504)))));
    vlTOPp->mac__DOT__y___05Fh40959 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23) 
                                        >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh40587));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_5_ETC___05F_d1507 
        = (((IData)(vlTOPp->mac__DOT__y___05Fh123307) 
            & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
               >> 0xfU)) ? (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh123842)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476));
    vlTOPp->mac__DOT__y___05Fh40862 = ((IData)(vlTOPp->mac__DOT__x___05Fh40958) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh40959));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1508 
        = ((1U & ((((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                    >> 7U) | (0U != (0x3f80U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                                                << 7U)))) 
                  | ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097) 
                     >> 9U))) ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_5_ETC___05F_d1507)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh40861) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh40862)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh40587) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq24))))));
    vlTOPp->mac__DOT__y___05Fh41237 = ((IData)(vlTOPp->mac__DOT__y___05Fh40862) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh40861));
    vlTOPp->mac__DOT__IF_rg_A_0_BIT_15_49_XOR_rg_B_BIT_15_50_51_THEN_ETC___05F_d1510 
        = ((0x100U & (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq63 
                      >> 0x17U)) | ((0x100U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_2_snd___05Fh114097))
                                     ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1508)
                                     : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476)));
    vlTOPp->mac__DOT__y___05Fh41140 = ((IData)(vlTOPp->mac__DOT__x___05Fh41236) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41237));
    vlTOPp->mac__DOT__mult_float_result_D_IN = (((IData)(vlTOPp->mac__DOT__IF_rg_A_0_BIT_15_49_XOR_rg_B_BIT_15_50_51_THEN_ETC___05F_d1510) 
                                                 << 0x17U) 
                                                | (0x7f0000U 
                                                   & ((IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_8_THEN_IF_IF_I_ETC___05Fq65) 
                                                      << 0xfU)));
    vlTOPp->mac__DOT__y___05Fh41514 = ((IData)(vlTOPp->mac__DOT__y___05Fh41140) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41139));
    vlTOPp->mac__DOT__y___05Fh41417 = ((IData)(vlTOPp->mac__DOT__x___05Fh41513) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41514));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh41416) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh41417)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh41139) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh41140)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595)));
    vlTOPp->mac__DOT__y___05Fh41791 = ((IData)(vlTOPp->mac__DOT__y___05Fh41417) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41416));
    vlTOPp->mac__DOT__y___05Fh41694 = ((IData)(vlTOPp->mac__DOT__x___05Fh41790) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41791));
    vlTOPp->mac__DOT__y___05Fh42068 = ((IData)(vlTOPp->mac__DOT__y___05Fh41694) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41693));
    vlTOPp->mac__DOT__y___05Fh41971 = ((IData)(vlTOPp->mac__DOT__x___05Fh42067) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42068));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh41970) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh41971)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh41693) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh41694)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596)));
    vlTOPp->mac__DOT__y___05Fh42345 = ((IData)(vlTOPp->mac__DOT__y___05Fh41971) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41970));
    vlTOPp->mac__DOT__y___05Fh42248 = ((IData)(vlTOPp->mac__DOT__x___05Fh42344) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42345));
    vlTOPp->mac__DOT__y___05Fh42622 = ((IData)(vlTOPp->mac__DOT__y___05Fh42248) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42247));
    vlTOPp->mac__DOT__y___05Fh42525 = ((IData)(vlTOPp->mac__DOT__x___05Fh42621) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42622));
    vlTOPp->mac__DOT__mult_result___05Fh4810 = ((((IData)(vlTOPp->mac__DOT__x___05Fh42524) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh42525)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh42247) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh42248)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599 
        = ((0x80U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4810)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539));
    vlTOPp->mac__DOT__x___05Fh46730 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh46827 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh46453 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq26 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh46550 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh46176 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh46273 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh45899 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh45996 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh45622 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh45719 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh45344 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh45441 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                   >> 8U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x200U : 0U);
    vlTOPp->mac__DOT__x___05Fh45070 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649 
        = ((0x200U & (((IData)(vlTOPp->mac__DOT__x___05Fh45070) 
                       << 9U) ^ (0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25)))) 
           | ((0x100U & ((0xffffff00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 8U))) | ((0xfeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                                        | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq26)))));
    vlTOPp->mac__DOT__y___05Fh45442 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25) 
                                        >> 9U) & (IData)(vlTOPp->mac__DOT__x___05Fh45070));
    vlTOPp->mac__DOT__y___05Fh45345 = ((IData)(vlTOPp->mac__DOT__x___05Fh45441) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh45442));
    vlTOPp->mac__DOT__y___05Fh45720 = ((IData)(vlTOPp->mac__DOT__y___05Fh45345) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh45344));
    vlTOPp->mac__DOT__y___05Fh45623 = ((IData)(vlTOPp->mac__DOT__x___05Fh45719) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh45720));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh45622) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh45623)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh45344) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh45345)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649)));
    vlTOPp->mac__DOT__y___05Fh45997 = ((IData)(vlTOPp->mac__DOT__y___05Fh45623) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh45622));
    vlTOPp->mac__DOT__y___05Fh45900 = ((IData)(vlTOPp->mac__DOT__x___05Fh45996) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh45997));
    vlTOPp->mac__DOT__y___05Fh46274 = ((IData)(vlTOPp->mac__DOT__y___05Fh45900) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh45899));
    vlTOPp->mac__DOT__y___05Fh46177 = ((IData)(vlTOPp->mac__DOT__x___05Fh46273) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46274));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh46176) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh46177)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh45899) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh45900)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650)));
    vlTOPp->mac__DOT__y___05Fh46551 = ((IData)(vlTOPp->mac__DOT__y___05Fh46177) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46176));
    vlTOPp->mac__DOT__y___05Fh46454 = ((IData)(vlTOPp->mac__DOT__x___05Fh46550) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46551));
    vlTOPp->mac__DOT__y___05Fh46828 = ((IData)(vlTOPp->mac__DOT__y___05Fh46454) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46453));
    vlTOPp->mac__DOT__y___05Fh46731 = ((IData)(vlTOPp->mac__DOT__x___05Fh46827) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46828));
    vlTOPp->mac__DOT__mult_result___05Fh4277 = ((((IData)(vlTOPp->mac__DOT__x___05Fh46730) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh46731)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh46453) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh46454)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653 
        = ((0x100U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4277)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599));
    vlTOPp->mac__DOT__x___05Fh50931 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh51028 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq28 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh50654 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh50751 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh50377 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh50474 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh50100 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh50197 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh49822 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh49919 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                   >> 9U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x400U : 0U);
    vlTOPp->mac__DOT__x___05Fh49548 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh49920 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27) 
                                        >> 0xaU) & (IData)(vlTOPp->mac__DOT__x___05Fh49548));
    vlTOPp->mac__DOT__y___05Fh49823 = ((IData)(vlTOPp->mac__DOT__x___05Fh49919) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh49920));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh49822) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh49823)) 
            << 0xbU) | ((0x400U & (((IData)(vlTOPp->mac__DOT__x___05Fh49548) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27)))) 
                        | ((0x200U & ((0xfffffe00U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 9U))) | 
                           ((0x1feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                            | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq28))))));
    vlTOPp->mac__DOT__y___05Fh50198 = ((IData)(vlTOPp->mac__DOT__y___05Fh49823) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh49822));
    vlTOPp->mac__DOT__y___05Fh50101 = ((IData)(vlTOPp->mac__DOT__x___05Fh50197) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50198));
    vlTOPp->mac__DOT__y___05Fh50475 = ((IData)(vlTOPp->mac__DOT__y___05Fh50101) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50100));
    vlTOPp->mac__DOT__y___05Fh50378 = ((IData)(vlTOPp->mac__DOT__x___05Fh50474) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50475));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh50377) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh50378)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh50100) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh50101)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697)));
    vlTOPp->mac__DOT__y___05Fh50752 = ((IData)(vlTOPp->mac__DOT__y___05Fh50378) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50377));
    vlTOPp->mac__DOT__y___05Fh50655 = ((IData)(vlTOPp->mac__DOT__x___05Fh50751) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50752));
    vlTOPp->mac__DOT__y___05Fh51029 = ((IData)(vlTOPp->mac__DOT__y___05Fh50655) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50654));
    vlTOPp->mac__DOT__y___05Fh50932 = ((IData)(vlTOPp->mac__DOT__x___05Fh51028) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51029));
    vlTOPp->mac__DOT__mult_result___05Fh3744 = ((((IData)(vlTOPp->mac__DOT__x___05Fh50931) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh50932)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh50654) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh50655)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700 
        = ((0x200U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh3744)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653));
    vlTOPp->mac__DOT__x___05Fh55127 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh55224 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq30 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh54850 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh54947 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh54573 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh54670 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh54295 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh54392 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                   >> 0xaU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x800U : 0U);
    vlTOPp->mac__DOT__x___05Fh54021 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738 
        = ((0x800U & (((IData)(vlTOPp->mac__DOT__x___05Fh54021) 
                       << 0xbU) ^ (0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29)))) 
           | ((0x400U & ((0xfffffc00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 0xaU))) | ((0x3feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                                          | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq30)))));
    vlTOPp->mac__DOT__y___05Fh54393 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29) 
                                        >> 0xbU) & (IData)(vlTOPp->mac__DOT__x___05Fh54021));
    vlTOPp->mac__DOT__y___05Fh54296 = ((IData)(vlTOPp->mac__DOT__x___05Fh54392) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh54393));
    vlTOPp->mac__DOT__y___05Fh54671 = ((IData)(vlTOPp->mac__DOT__y___05Fh54296) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh54295));
    vlTOPp->mac__DOT__y___05Fh54574 = ((IData)(vlTOPp->mac__DOT__x___05Fh54670) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh54671));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh54573) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh54574)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh54295) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh54296)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738)));
    vlTOPp->mac__DOT__y___05Fh54948 = ((IData)(vlTOPp->mac__DOT__y___05Fh54574) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh54573));
    vlTOPp->mac__DOT__y___05Fh54851 = ((IData)(vlTOPp->mac__DOT__x___05Fh54947) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh54948));
    vlTOPp->mac__DOT__y___05Fh55225 = ((IData)(vlTOPp->mac__DOT__y___05Fh54851) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh54850));
    vlTOPp->mac__DOT__y___05Fh55128 = ((IData)(vlTOPp->mac__DOT__x___05Fh55224) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55225));
    vlTOPp->mac__DOT__mult_result___05Fh3211 = ((((IData)(vlTOPp->mac__DOT__x___05Fh55127) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh55128)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh54850) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh54851)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741 
        = ((0x400U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh3211)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700));
    vlTOPp->mac__DOT__x___05Fh59318 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh59415 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq32 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh59041 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh59138 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh58763 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh58860 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                   >> 0xbU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x1000U : 0U);
    vlTOPp->mac__DOT__x___05Fh58489 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh58861 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31) 
                                        >> 0xcU) & (IData)(vlTOPp->mac__DOT__x___05Fh58489));
    vlTOPp->mac__DOT__y___05Fh58764 = ((IData)(vlTOPp->mac__DOT__x___05Fh58860) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh58861));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh58763) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh58764)) 
            << 0xdU) | ((0x1000U & (((IData)(vlTOPp->mac__DOT__x___05Fh58489) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31)))) 
                        | ((0x800U & ((0xfffff800U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 0xbU))) 
                           | ((0x7feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                              | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq32))))));
    vlTOPp->mac__DOT__y___05Fh59139 = ((IData)(vlTOPp->mac__DOT__y___05Fh58764) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh58763));
    vlTOPp->mac__DOT__y___05Fh59042 = ((IData)(vlTOPp->mac__DOT__x___05Fh59138) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59139));
    vlTOPp->mac__DOT__y___05Fh59416 = ((IData)(vlTOPp->mac__DOT__y___05Fh59042) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh59041));
    vlTOPp->mac__DOT__y___05Fh59319 = ((IData)(vlTOPp->mac__DOT__x___05Fh59415) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59416));
    vlTOPp->mac__DOT__mult_result___05Fh2678 = ((((IData)(vlTOPp->mac__DOT__x___05Fh59318) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh59319)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh59041) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh59042)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775 
        = ((0x800U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2678)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741));
    vlTOPp->mac__DOT__x___05Fh63504 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh63601 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq34 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh63226 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh63323 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                   >> 0xcU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x2000U : 0U);
    vlTOPp->mac__DOT__x___05Fh62952 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801 
        = ((0x2000U & (((IData)(vlTOPp->mac__DOT__x___05Fh62952) 
                        << 0xdU) ^ (0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33)))) 
           | ((0x1000U & ((0xfffff000U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                          ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                             << 0xcU))) | ((0xffeU 
                                            & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                                           | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq34)))));
    vlTOPp->mac__DOT__y___05Fh63324 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33) 
                                        >> 0xdU) & (IData)(vlTOPp->mac__DOT__x___05Fh62952));
    vlTOPp->mac__DOT__y___05Fh63227 = ((IData)(vlTOPp->mac__DOT__x___05Fh63323) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63324));
    vlTOPp->mac__DOT__y___05Fh63602 = ((IData)(vlTOPp->mac__DOT__y___05Fh63227) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh63226));
    vlTOPp->mac__DOT__y___05Fh63505 = ((IData)(vlTOPp->mac__DOT__x___05Fh63601) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63602));
    vlTOPp->mac__DOT__mult_result___05Fh2145 = ((((IData)(vlTOPp->mac__DOT__x___05Fh63504) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh63505)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh63226) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh63227)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803 
        = ((0x1000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2145)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq36 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh67684 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh67781 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                   >> 0xdU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x4000U : 0U);
    vlTOPp->mac__DOT__x___05Fh67410 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh67782 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35) 
                                        >> 0xeU) & (IData)(vlTOPp->mac__DOT__x___05Fh67410));
    vlTOPp->mac__DOT__y___05Fh67685 = ((IData)(vlTOPp->mac__DOT__x___05Fh67781) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh67782));
    vlTOPp->mac__DOT__mult_result___05Fh1612 = ((((IData)(vlTOPp->mac__DOT__x___05Fh67684) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh67685)) 
                                                 << 0xfU) 
                                                | ((0x4000U 
                                                    & (((IData)(vlTOPp->mac__DOT__x___05Fh67410) 
                                                        << 0xeU) 
                                                       ^ 
                                                       (0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35)))) 
                                                   | ((0x2000U 
                                                       & ((0xffffe000U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                           << 0xdU))) 
                                                      | ((0x1ffeU 
                                                          & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                         | (1U 
                                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq36))))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824 
        = ((0x2000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1612)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq38 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824))
            ? 1U : 0U);
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                   >> 0xeU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x8000U : 0U);
    vlTOPp->mac__DOT__x___05Fh71863 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mult_result___05Fh1079 = ((0x8000U 
                                                 & (((IData)(vlTOPp->mac__DOT__x___05Fh71863) 
                                                     << 0xfU) 
                                                    ^ 
                                                    (0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37)))) 
                                                | ((0x4000U 
                                                    & ((0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                        << 0xeU))) 
                                                   | ((0x3ffeU 
                                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq38)))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839 
        = ((0x4000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1079)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq39 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839))
            ? 1U : 0U);
    vlTOPp->mac__DOT__mult_result___05Fh529 = ((0x8000U 
                                                & ((0xffff8000U 
                                                    & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                    << 0xfU))) 
                                               | ((0x7ffeU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq39))));
    vlTOPp->mac__DOT__x___05Fh365 = ((0x8000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
                                      ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh529)
                                      : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839));
    vlTOPp->mac__DOT__mult_int_result_D_IN = ((0xffff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->mac__DOT__x___05Fh365) 
                                                                 >> 0xfU)))) 
                                                  << 0x10U)) 
                                              | (IData)(vlTOPp->mac__DOT__x___05Fh365));
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    get_A_a = VL_RAND_RESET_I(16);
    EN_get_A = VL_RAND_RESET_I(1);
    RDY_get_A = VL_RAND_RESET_I(1);
    get_B_b = VL_RAND_RESET_I(16);
    EN_get_B = VL_RAND_RESET_I(1);
    RDY_get_B = VL_RAND_RESET_I(1);
    get_C_c = VL_RAND_RESET_I(32);
    EN_get_C = VL_RAND_RESET_I(1);
    RDY_get_C = VL_RAND_RESET_I(1);
    get_select_s = VL_RAND_RESET_I(1);
    EN_get_select = VL_RAND_RESET_I(1);
    RDY_get_select = VL_RAND_RESET_I(1);
    EN_result = VL_RAND_RESET_I(1);
    result = VL_RAND_RESET_I(32);
    RDY_result = VL_RAND_RESET_I(1);
    mac__DOT__CLK = VL_RAND_RESET_I(1);
    mac__DOT__RST_N = VL_RAND_RESET_I(1);
    mac__DOT__get_A_a = VL_RAND_RESET_I(16);
    mac__DOT__EN_get_A = VL_RAND_RESET_I(1);
    mac__DOT__RDY_get_A = VL_RAND_RESET_I(1);
    mac__DOT__get_B_b = VL_RAND_RESET_I(16);
    mac__DOT__EN_get_B = VL_RAND_RESET_I(1);
    mac__DOT__RDY_get_B = VL_RAND_RESET_I(1);
    mac__DOT__get_C_c = VL_RAND_RESET_I(32);
    mac__DOT__EN_get_C = VL_RAND_RESET_I(1);
    mac__DOT__RDY_get_C = VL_RAND_RESET_I(1);
    mac__DOT__get_select_s = VL_RAND_RESET_I(1);
    mac__DOT__EN_get_select = VL_RAND_RESET_I(1);
    mac__DOT__RDY_get_select = VL_RAND_RESET_I(1);
    mac__DOT__EN_result = VL_RAND_RESET_I(1);
    mac__DOT__result = VL_RAND_RESET_I(32);
    mac__DOT__RDY_result = VL_RAND_RESET_I(1);
    mac__DOT__count = VL_RAND_RESET_I(1);
    mac__DOT__count_D_IN = VL_RAND_RESET_I(1);
    mac__DOT__count_EN = VL_RAND_RESET_I(1);
    mac__DOT__mult_float_result = VL_RAND_RESET_I(32);
    mac__DOT__mult_float_result_D_IN = VL_RAND_RESET_I(32);
    mac__DOT__mult_float_result_EN = VL_RAND_RESET_I(1);
    mac__DOT__mult_int_result = VL_RAND_RESET_I(32);
    mac__DOT__mult_int_result_D_IN = VL_RAND_RESET_I(32);
    mac__DOT__mult_int_result_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_A = VL_RAND_RESET_I(16);
    mac__DOT__rg_A_D_IN = VL_RAND_RESET_I(16);
    mac__DOT__rg_A_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_B = VL_RAND_RESET_I(16);
    mac__DOT__rg_B_D_IN = VL_RAND_RESET_I(16);
    mac__DOT__rg_B_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_C = VL_RAND_RESET_I(32);
    mac__DOT__rg_C_D_IN = VL_RAND_RESET_I(32);
    mac__DOT__rg_C_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_out_fp = VL_RAND_RESET_I(32);
    mac__DOT__rg_out_fp_D_IN = VL_RAND_RESET_I(32);
    mac__DOT__rg_out_fp_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_out_int = VL_RAND_RESET_I(32);
    mac__DOT__rg_out_int_D_IN = VL_RAND_RESET_I(32);
    mac__DOT__rg_out_int_EN = VL_RAND_RESET_I(1);
    mac__DOT__rg_select = VL_RAND_RESET_I(1);
    mac__DOT__rg_select_D_IN = VL_RAND_RESET_I(1);
    mac__DOT__rg_select_EN = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_RL_rl_mac_add = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_RL_rl_mac_mul = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_A = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_B = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_C = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_select = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_result = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_RL_rl_mac_add = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_RL_rl_mac_mul = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_A = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_B = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_C = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_select = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_result = VL_RAND_RESET_I(1);
    mac__DOT__IF_IF_IF_mult_float_result_769_BITS_30_TO_23_7_ETC___05F_d1786 = VL_RAND_RESET_I(32);
    mac__DOT__IF_mult_int_result_BIT_0_AND_rg_C_BIT_0_THEN_2_ETC___05Fq7 = VL_RAND_RESET_I(32);
    mac__DOT__IF_mult_int_result_BIT_0_XOR_rg_C_BIT_0_THEN_1_ETC___05Fq64 = VL_RAND_RESET_I(32);
    mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq63 = VL_RAND_RESET_I(32);
    mac__DOT__mult_int_result_529_BIT_29_537_XOR_rg_C_531_BI_ETC___05F_d1767 = VL_RAND_RESET_I(30);
    mac__DOT__mult_int_result_529_BIT_27_543_XOR_rg_C_531_BI_ETC___05F_d1766 = VL_RAND_RESET_I(28);
    mac__DOT__mult_int_result_529_BIT_25_549_XOR_rg_C_531_BI_ETC___05F_d1765 = VL_RAND_RESET_I(26);
    mac__DOT__IF_IF_mult_float_result_769_BIT_31_784_EQ_rg_C_ETC___05Fq66 = VL_RAND_RESET_I(25);
    mac__DOT__IF_mult_float_result_769_BIT_31_784_EQ_rg_C_53_ETC___05F_d1977 = VL_RAND_RESET_I(25);
    mac__DOT__IF_shiftedMantA40869_BIT_0_AND_shiftedMantB408_ETC___05Fq59 = VL_RAND_RESET_I(25);
    mac__DOT__IF_shiftedMantA40869_BIT_0_XOR_shiftedMantB408_ETC___05Fq60 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh141290 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh148802 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh148830 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh151156 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantA___05Fh140869 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantA___05Fh141021 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantB___05Fh140870 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantB___05Fh140995 = VL_RAND_RESET_I(25);
    mac__DOT__mult_int_result_529_BIT_23_555_XOR_rg_C_531_BI_ETC___05F_d1764 = VL_RAND_RESET_I(24);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1972 = VL_RAND_RESET_I(23);
    mac__DOT__mult_int_result_529_BIT_21_561_XOR_rg_C_531_BI_ETC___05F_d1763 = VL_RAND_RESET_I(22);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1971 = VL_RAND_RESET_I(21);
    mac__DOT__mult_int_result_529_BIT_19_567_XOR_rg_C_531_BI_ETC___05F_d1762 = VL_RAND_RESET_I(20);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1970 = VL_RAND_RESET_I(19);
    mac__DOT__mult_int_result_529_BIT_17_573_XOR_rg_C_531_BI_ETC___05F_d1761 = VL_RAND_RESET_I(18);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1969 = VL_RAND_RESET_I(17);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq12 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq32 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq34 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq36 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq38 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq39 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq14 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq16 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq18 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq20 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq22 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq24 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq26 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq28 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq30 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq40 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS___05FETC___05Fq41 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq42 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_ETC___05Fq43 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq44 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_ETC___05Fq45 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq46 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_ETC___05Fq47 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq48 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_ETC___05Fq49 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq50 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_ETC___05Fq51 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq52 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05Fq53 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq10 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_A_BIT_0_THEN_1_ELSE_0___05Fq1 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d866 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d950 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1026 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1098 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1167 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1232 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1294 = VL_RAND_RESET_I(16);
    mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22 = VL_RAND_RESET_I(16);
    mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3 = VL_RAND_RESET_I(16);
    mac__DOT___theResult___05F___05F_2_snd___05Fh114097 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh114098 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh121184 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh77041 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh77550 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh78059 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh78568 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh79077 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh79586 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh80095 = VL_RAND_RESET_I(16);
    mac__DOT__mult_int_result_529_BIT_15_579_XOR_rg_C_531_BI_ETC___05F_d1760 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh1079 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh1612 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh2145 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh2678 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh3211 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh3744 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh4277 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh4810 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh529 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh5343 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh5876 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh6409 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh6942 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh7475 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh8008 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh8541 = VL_RAND_RESET_I(16);
    mac__DOT__x___05Fh365 = VL_RAND_RESET_I(16);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1968 = VL_RAND_RESET_I(15);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698 = VL_RAND_RESET_I(14);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d948 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1024 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1230 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1350 = VL_RAND_RESET_I(14);
    mac__DOT__INV_IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THE_ETC___05F_d1292 = VL_RAND_RESET_I(14);
    mac__DOT__mult_int_result_529_BIT_13_585_XOR_rg_C_531_BI_ETC___05F_d1759 = VL_RAND_RESET_I(14);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1967 = VL_RAND_RESET_I(13);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697 = VL_RAND_RESET_I(12);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1095 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1229 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1291 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1349 = VL_RAND_RESET_I(12);
    mac__DOT__INV_IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THE_ETC___05F_d1164 = VL_RAND_RESET_I(12);
    mac__DOT__mult_int_result_529_BIT_11_591_XOR_rg_C_531_BI_ETC___05F_d1758 = VL_RAND_RESET_I(12);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1966 = VL_RAND_RESET_I(11);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d946 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1094 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1163 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1228 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1290 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1348 = VL_RAND_RESET_I(10);
    mac__DOT__INV_IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THE_ETC___05F_d1022 = VL_RAND_RESET_I(10);
    mac__DOT__mult_int_result_529_BIT_9_597_XOR_rg_C_531_BIT_ETC___05F_d1757 = VL_RAND_RESET_I(10);
    mac__DOT__IF_INV_theResult___05F___05F_2_snd14097_BIT_9_THEN_2_E_ETC___05Fq57 = VL_RAND_RESET_I(9);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1965 = VL_RAND_RESET_I(9);
    mac__DOT__IF_rg_A_0_BIT_15_49_XOR_rg_B_BIT_15_50_51_THEN_ETC___05F_d1510 = VL_RAND_RESET_I(9);
    mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_9_THEN_4_ELSE_0___05Fq54 = VL_RAND_RESET_I(9);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_5_ETC___05F_d1507 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1508 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05F_d1525 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_T_ETC___05Fq56 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_mult_float_result_769_BITS_30_TO_23_770___05FETC___05Fq61 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1476 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5___05FETC___05Fq58 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_mult_float_result_769_BITS_30_TO_23___05FETC___05Fq62 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534 = VL_RAND_RESET_I(8);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1979 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d945 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1021 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1093 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1162 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_4_56_THEN_IF_rg_B_BIT_3_57_THEN_IF_ETC___05F_d1227 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_5_55_THEN_IF_rg_B_BIT_4_56_THEN_IF_ETC___05F_d1289 = VL_RAND_RESET_I(8);
    mac__DOT__IF_theResult___05F___05F_2_snd14097_BIT_8_THEN_IF_IF_I_ETC___05Fq65 = VL_RAND_RESET_I(8);
    mac__DOT__add_exp_result___05F_1___05Fh148831 = VL_RAND_RESET_I(8);
    mac__DOT__expDiff___05Fh140993 = VL_RAND_RESET_I(8);
    mac__DOT__expDiff___05Fh141020 = VL_RAND_RESET_I(8);
    mac__DOT__mult_int_result_529_BIT_7_603_XOR_rg_C_531_BIT_ETC___05F_d1756 = VL_RAND_RESET_I(8);
    mac__DOT__rg_A_BITS_7_TO_0___05Fq9 = VL_RAND_RESET_I(8);
    mac__DOT__rg_B_BITS_7_TO_0___05Fq8 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh114101 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh114128 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh123842 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh140904 = VL_RAND_RESET_I(8);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1964 = VL_RAND_RESET_I(7);
    mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1521 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d944 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1020 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_2_58_THEN_IF_rg_B_BIT_1_59_THEN_IF_ETC___05F_d1092 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_3_57_THEN_IF_rg_B_BIT_2_58_THEN_IF_ETC___05F_d1161 = VL_RAND_RESET_I(6);
    mac__DOT__mult_int_result_529_BIT_5_609_XOR_rg_C_531_BIT_ETC___05F_d1755 = VL_RAND_RESET_I(6);
    mac__DOT__rg_A_0_BIT_12_383_XOR_rg_B_BIT_12_384_415_XOR___05FETC___05F_d1470 = VL_RAND_RESET_I(6);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1963 = VL_RAND_RESET_I(5);
    mac__DOT__IF_IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_ETC___05F_d1504 = VL_RAND_RESET_I(4);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133 = VL_RAND_RESET_I(4);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226 = VL_RAND_RESET_I(4);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d2007 = VL_RAND_RESET_I(4);
    mac__DOT__IF_rg_B_BIT_0_60_THEN_1_CONCAT_rg_A_0_BITS_6_T_ETC___05F_d943 = VL_RAND_RESET_I(4);
    mac__DOT__IF_rg_B_BIT_1_59_THEN_IF_rg_B_BIT_0_60_THEN_1___05FETC___05F_d1019 = VL_RAND_RESET_I(4);
    mac__DOT__mult_int_result_529_BIT_3_615_XOR_rg_C_531_BIT_ETC___05F_d1754 = VL_RAND_RESET_I(4);
    mac__DOT__rg_A_0_BIT_10_389_XOR_rg_B_BIT_10_390_409_XOR___05FETC___05F_d1469 = VL_RAND_RESET_I(4);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1962 = VL_RAND_RESET_I(3);
    mac__DOT__mult_int_result_529_BIT_1_621_XOR_rg_C_531_BIT_ETC___05F_d1753 = VL_RAND_RESET_I(2);
    mac__DOT__IF_mult_float_result_769_BITS_30_TO_23_770_ULE_ETC___05F_d1783 = VL_RAND_RESET_I(1);
    mac__DOT__IF_rg_B_BIT_6_54_THEN_IF_rg_B_BIT_5_55_THEN_IF_ETC___05F_d1334 = VL_RAND_RESET_I(1);
    mac__DOT__mult_float_result_769_BITS_30_TO_23_770_ULE_rg_ETC___05F_d1772 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100145 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100242 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh102959 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103233 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103330 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103511 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103608 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103788 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103885 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104065 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104162 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104342 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104439 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104619 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104716 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh107428 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh107702 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh107799 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh107980 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108077 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108257 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108354 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108534 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108631 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108811 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108908 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109088 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109185 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh111892 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112166 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112263 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112444 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112541 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112721 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112818 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112998 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113095 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113275 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113372 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113552 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113649 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114666 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114937 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115033 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115212 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115308 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115486 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115582 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115760 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh115856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh116034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh116130 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh116308 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh116404 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh116959 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117231 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117506 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117780 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118054 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118328 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118602 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh119254 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh119526 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh119801 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh120075 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh120349 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh120623 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh120897 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh132565 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh132846 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh133126 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh133406 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh133686 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh133966 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh134246 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh134526 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh134806 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh135086 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh135366 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh135646 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh13584 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh135926 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh136206 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh136486 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh136766 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh137046 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh137326 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh137606 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh137886 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh138166 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh138446 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh13858 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh138726 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh139006 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh139286 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh13955 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh139566 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh139846 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh140126 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh140406 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh140588 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh140686 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14136 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142098 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14233 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142375 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142473 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142656 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142754 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142936 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143216 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143314 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143496 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143594 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143776 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143874 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144056 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14413 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144154 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144336 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144434 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144616 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144714 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144896 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144994 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14510 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145176 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145274 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145456 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145554 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145736 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145834 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146016 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146114 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146296 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146394 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146576 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146674 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14690 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146954 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147136 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147234 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147416 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147514 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147696 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147794 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14787 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147976 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148074 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148256 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148354 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148536 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148634 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14967 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15064 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15244 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15341 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15521 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15618 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15798 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15895 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16075 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16172 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16352 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16449 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16629 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16726 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16906 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17003 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17183 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17280 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18097 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18371 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18468 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18649 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18746 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18926 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19023 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19203 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19300 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19480 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19577 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19757 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19854 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20131 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20311 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20408 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20588 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20685 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20865 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20962 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21142 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21239 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21419 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21516 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22605 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22879 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22976 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23157 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23254 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23434 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23531 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23711 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23808 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23988 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24085 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24265 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24362 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24542 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24639 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24819 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24916 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25096 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25193 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25373 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25470 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25650 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25747 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27108 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27382 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27479 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27660 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27757 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27937 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28214 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28311 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28491 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28588 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28768 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28865 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29045 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29142 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29322 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29419 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29599 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29696 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29876 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29973 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh31606 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh31880 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh31977 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32158 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32255 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32435 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32532 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32712 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32809 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32989 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33086 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33266 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33363 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33543 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33640 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33820 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33917 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34097 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34194 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36099 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36373 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36470 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36651 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36748 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36928 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37025 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37205 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37302 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37482 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37579 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37759 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38036 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38133 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38313 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38410 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh40587 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh40861 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh40958 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41139 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41236 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41416 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41513 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41693 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41790 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41970 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42067 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42247 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42344 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42524 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42621 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45070 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45344 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45441 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45622 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45719 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45899 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45996 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46176 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46273 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46453 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46550 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46730 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46827 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh49548 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh49822 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh49919 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50100 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50197 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50377 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50474 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50654 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50751 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50931 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51028 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54021 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54295 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54392 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54573 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54670 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54850 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54947 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55127 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55224 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh58489 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh58763 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh58860 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59041 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59138 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59318 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59415 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh62952 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh63226 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh63323 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh63504 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh63601 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh67410 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh67684 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh67781 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh71863 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85033 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85307 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85404 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85585 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85682 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85862 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85959 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86139 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86236 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86416 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86513 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86693 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh86790 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh89522 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh89796 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh89893 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90074 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90171 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90351 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90448 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90628 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90725 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh90905 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh91002 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh91182 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh91279 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94006 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94280 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94377 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94558 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94655 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94835 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94932 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95112 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95209 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95389 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95486 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95666 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95763 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh98485 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh98759 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh98856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99037 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99134 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99314 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99411 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99591 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99688 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99868 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99965 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100146 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100243 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100423 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100520 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100700 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100977 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101254 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103234 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103331 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103512 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103609 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103789 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103886 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104066 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104163 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104343 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104440 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104620 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104717 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104897 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104994 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105174 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105451 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh107703 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh107800 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh107981 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108078 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108258 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108355 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108535 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108632 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108812 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108909 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109089 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109186 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109366 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109463 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109643 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112167 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112264 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112445 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112542 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112722 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112819 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112999 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113096 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113276 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113373 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113553 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113650 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113830 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113927 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114938 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115034 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115213 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115309 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115487 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115583 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115761 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh116035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh116131 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh116309 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh116405 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117232 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117507 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117781 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118055 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118329 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118603 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh119527 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh119802 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh120076 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh120350 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh120624 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh120898 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122210 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122485 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122759 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123033 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123307 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124527 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124802 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125076 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125350 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125624 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125898 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132468 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132566 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132613 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132749 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132847 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132894 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133029 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133127 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133174 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133309 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133407 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133454 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133589 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133687 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133734 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133869 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh133967 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134014 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134149 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134247 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134294 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134429 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134527 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134574 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134709 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134807 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134854 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134989 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135087 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135134 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135269 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135367 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135414 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135549 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135647 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135694 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135829 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135927 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135974 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136109 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136207 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136254 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136389 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136487 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136534 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136669 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136767 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136814 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh136949 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137047 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137094 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137229 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137327 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137374 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137509 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137607 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137654 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137789 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137887 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh137934 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138069 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138167 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138214 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138349 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138447 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138494 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh13859 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138629 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138727 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138774 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh138909 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139007 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139054 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139189 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139287 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139334 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139469 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh13956 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139567 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139614 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139749 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139847 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh139894 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140029 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140127 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140174 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140309 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140407 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140454 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140589 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140687 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh140734 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14137 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14234 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142376 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142474 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142657 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142755 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142937 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143217 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143315 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143497 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143595 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143777 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143875 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144057 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14414 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144155 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144337 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144435 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144617 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144715 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144897 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144995 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14511 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145177 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145275 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145457 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145555 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145737 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145835 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146017 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146115 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146297 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146395 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146577 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146675 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14691 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146955 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147137 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147235 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147417 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147515 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147697 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147795 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14788 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147977 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148075 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148257 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148355 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148537 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148635 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh149459 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14968 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh149737 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150014 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150291 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150568 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15065 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150845 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15245 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15342 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15522 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15619 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15799 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15896 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16076 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16173 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16353 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16450 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16630 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16727 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16907 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17004 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17184 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17281 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18372 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18469 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18650 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18747 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18927 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19024 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19204 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19301 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19481 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19578 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19758 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19855 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20132 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20312 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20409 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20589 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20686 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20866 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20963 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21143 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21240 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21420 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21517 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh22880 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh22977 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23158 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23255 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23435 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23532 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23712 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23809 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23989 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24086 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24266 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24363 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24543 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24640 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24820 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24917 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25097 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25194 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25374 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25471 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25651 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25748 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh27383 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh27480 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh27661 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh27758 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh27938 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28215 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28312 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28492 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28589 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28769 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28866 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29046 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29143 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29323 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29420 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29600 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29697 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29877 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29974 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh31881 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh31978 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32159 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32256 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32436 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32533 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32713 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32810 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32990 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33087 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33267 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33364 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33544 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33641 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33821 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33918 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34098 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34195 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh36374 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh36471 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh36652 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh36749 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh36929 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37026 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37206 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37303 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37483 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37580 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37760 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38037 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38134 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38314 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38411 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh40862 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh40959 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41140 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41237 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41417 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41514 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41694 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41791 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41971 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42068 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42248 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42345 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42525 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42622 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45345 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45442 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45623 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45720 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45900 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh45997 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46177 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46274 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46454 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46551 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46731 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46828 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh49823 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh49920 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50101 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50198 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50378 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50475 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50655 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50752 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50932 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51029 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54296 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54393 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54574 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54671 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54851 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh54948 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55128 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55225 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh58764 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh58861 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59042 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59139 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59319 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59416 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh63227 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh63324 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh63505 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh63602 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh67685 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh67782 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85308 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85405 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85586 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85683 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85863 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85960 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86140 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86237 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86417 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86514 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86694 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86791 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh86971 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh87068 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh87248 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh87525 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh87802 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh88079 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh88356 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh88633 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh89797 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh89894 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90075 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90172 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90352 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90449 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90629 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90726 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh90906 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91003 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91183 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91280 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91460 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91557 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh91737 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh92014 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh92291 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh92568 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh92845 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94281 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94378 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94559 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94656 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94836 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94933 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95113 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95210 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95390 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95487 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95667 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95764 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95944 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96041 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96221 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96498 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96775 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh97052 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh98760 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh98857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99038 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99135 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99315 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99412 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99592 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99689 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99869 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99966 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
