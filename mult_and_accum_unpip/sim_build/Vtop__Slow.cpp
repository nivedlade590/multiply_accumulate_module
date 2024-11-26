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
    vlTOPp->mac__DOT__CAN_FIRE_RL_rl_mac = 1U;
    vlTOPp->mac__DOT__WILL_FIRE_RL_rl_mac = 1U;
    vlTOPp->mac__DOT__RDY_get_A = 1U;
    vlTOPp->mac__DOT__RDY_get_B = 1U;
    vlTOPp->mac__DOT__RDY_get_C = 1U;
    vlTOPp->mac__DOT__RDY_get_select = 1U;
    vlTOPp->mac__DOT__RDY_result = 1U;
    vlTOPp->mac__DOT__rg_A = 0xaaaaU;
    vlTOPp->mac__DOT__rg_B = 0xaaaaU;
    vlTOPp->mac__DOT__rg_C = 0xaaaaaaaaU;
    vlTOPp->mac__DOT__rg_out_fp = 0xaaaaaaaaU;
    vlTOPp->mac__DOT__rg_out_int = 0xaaaaaaaaU;
    vlTOPp->mac__DOT__rg_select = 0U;
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
    vlTOPp->RDY_get_A = vlTOPp->mac__DOT__RDY_get_A;
    vlTOPp->RDY_get_B = vlTOPp->mac__DOT__RDY_get_B;
    vlTOPp->RDY_get_C = vlTOPp->mac__DOT__RDY_get_C;
    vlTOPp->RDY_get_select = vlTOPp->mac__DOT__RDY_get_select;
    vlTOPp->RDY_result = vlTOPp->mac__DOT__RDY_result;
    vlTOPp->mac__DOT__result = ((IData)(vlTOPp->mac__DOT__rg_select)
                                 ? vlTOPp->mac__DOT__rg_out_fp
                                 : vlTOPp->mac__DOT__rg_out_int);
    vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq7 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_B));
    vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq61 
        = ((0x8000U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                       ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__x___05Fh125973 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh126069 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh125699 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh125795 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh125425 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh125521 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh125151 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh125247 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh124877 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh124973 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh124602 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh124698 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     & (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh124331 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__IF_rg_A_BIT_0_THEN_1_ELSE_0___05Fq1 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_A)) ? 1U
            : 0U);
    vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq8 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_A));
    vlTOPp->result = vlTOPp->mac__DOT__result;
    vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq7));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3))) {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = 0U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = 1U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh126624 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh124331) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh124699 = (((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh124331));
    vlTOPp->mac__DOT__mantissa_result___05Fh89760 = 
        (0x80U | ((0x7eU & (IData)(vlTOPp->mac__DOT__rg_A)) 
                  | (1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_0_THEN_1_ELSE_0___05Fq1))));
    vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq8) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq8));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5))) {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = 0U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = 1U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh128919 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh126624) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh126897 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh126624));
    vlTOPp->mac__DOT__y___05Fh124603 = ((IData)(vlTOPp->mac__DOT__x___05Fh124698) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh124699));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh89760)
            : 0U);
    vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq9 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22))
            ? 1U : 0U);
    vlTOPp->mac__DOT__y___05Fh129192 = (((IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh128919));
    vlTOPp->mac__DOT__x___05Fh126896 = ((IData)(vlTOPp->mac__DOT__x___05Fh124602) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh124603));
    vlTOPp->mac__DOT__y___05Fh124974 = ((IData)(vlTOPp->mac__DOT__y___05Fh124603) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh124602));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq41 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh96358 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh96455 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh96081 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh96178 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh95804 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh95901 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh95527 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh95624 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh95250 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh95347 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh94972 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh95069 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq40 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh94698 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mult_result___05Fh9361 = ((0xfffeU 
                                                 & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq9)));
    vlTOPp->mac__DOT__x___05Fh129191 = ((IData)(vlTOPp->mac__DOT__x___05Fh126896) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh126897));
    vlTOPp->mac__DOT__y___05Fh127172 = ((IData)(vlTOPp->mac__DOT__y___05Fh126897) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh126896));
    vlTOPp->mac__DOT__y___05Fh124878 = ((IData)(vlTOPp->mac__DOT__x___05Fh124973) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh124974));
    vlTOPp->mac__DOT__y___05Fh95070 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq40) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh94698));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh9361)
            : 0U);
    vlTOPp->mac__DOT__y___05Fh129467 = ((IData)(vlTOPp->mac__DOT__y___05Fh129192) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh129191));
    vlTOPp->mac__DOT__x___05Fh127171 = ((IData)(vlTOPp->mac__DOT__x___05Fh124877) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh124878));
    vlTOPp->mac__DOT__y___05Fh125248 = ((IData)(vlTOPp->mac__DOT__y___05Fh124878) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh124877));
    vlTOPp->mac__DOT__y___05Fh94973 = ((IData)(vlTOPp->mac__DOT__x___05Fh95069) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95070));
    vlTOPp->mac__DOT__x___05Fh18003 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh18100 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh17726 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh17823 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh17449 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh17546 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh17172 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh17269 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh16895 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh16992 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh16618 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh16715 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh16341 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh16438 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh16064 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh16161 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh15787 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh15884 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh15510 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh15607 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh15233 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh15330 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh14956 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh15053 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh14678 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh14775 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh14404 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__x___05Fh129466 = ((IData)(vlTOPp->mac__DOT__x___05Fh127171) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh127172));
    vlTOPp->mac__DOT__y___05Fh127446 = ((IData)(vlTOPp->mac__DOT__y___05Fh127172) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh127171));
    vlTOPp->mac__DOT__y___05Fh125152 = ((IData)(vlTOPp->mac__DOT__x___05Fh125247) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh125248));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1177 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh94972) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh94973)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh94698) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq40)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                                ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq41)))));
    vlTOPp->mac__DOT__y___05Fh95348 = ((IData)(vlTOPp->mac__DOT__y___05Fh94973) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh94972));
    vlTOPp->mac__DOT__y___05Fh14776 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh14404));
    vlTOPp->mac__DOT__rg_A_0_BIT_10_623_XOR_rg_B_BIT_10_624_643_XOR___05FETC___05F_d1703 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh129466) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh129467)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh129191) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh129192)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh128919) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6)))) 
                                 | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55)))));
    vlTOPp->mac__DOT__y___05Fh129741 = ((IData)(vlTOPp->mac__DOT__y___05Fh129467) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh129466));
    vlTOPp->mac__DOT__x___05Fh127445 = ((IData)(vlTOPp->mac__DOT__x___05Fh125151) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh125152));
    vlTOPp->mac__DOT__y___05Fh125522 = ((IData)(vlTOPp->mac__DOT__y___05Fh125152) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh125151));
    vlTOPp->mac__DOT__y___05Fh95251 = ((IData)(vlTOPp->mac__DOT__x___05Fh95347) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95348));
    vlTOPp->mac__DOT__y___05Fh14679 = ((IData)(vlTOPp->mac__DOT__x___05Fh14775) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh14776));
    vlTOPp->mac__DOT__x___05Fh129740 = ((IData)(vlTOPp->mac__DOT__x___05Fh127445) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh127446));
    vlTOPp->mac__DOT__y___05Fh127720 = ((IData)(vlTOPp->mac__DOT__y___05Fh127446) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh127445));
    vlTOPp->mac__DOT__y___05Fh125426 = ((IData)(vlTOPp->mac__DOT__x___05Fh125521) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh125522));
    vlTOPp->mac__DOT__y___05Fh95625 = ((IData)(vlTOPp->mac__DOT__y___05Fh95251) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95250));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh14678) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh14679)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh14404) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11)))));
    vlTOPp->mac__DOT__y___05Fh15054 = ((IData)(vlTOPp->mac__DOT__y___05Fh14679) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14678));
    vlTOPp->mac__DOT__y___05Fh130015 = ((IData)(vlTOPp->mac__DOT__y___05Fh129741) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh129740));
    vlTOPp->mac__DOT__x___05Fh127719 = ((IData)(vlTOPp->mac__DOT__x___05Fh125425) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh125426));
    vlTOPp->mac__DOT__y___05Fh125796 = ((IData)(vlTOPp->mac__DOT__y___05Fh125426) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh125425));
    vlTOPp->mac__DOT__y___05Fh95528 = ((IData)(vlTOPp->mac__DOT__x___05Fh95624) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95625));
    vlTOPp->mac__DOT__y___05Fh14957 = ((IData)(vlTOPp->mac__DOT__x___05Fh15053) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15054));
    vlTOPp->mac__DOT__x___05Fh130014 = ((IData)(vlTOPp->mac__DOT__x___05Fh127719) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh127720));
    vlTOPp->mac__DOT__y___05Fh127994 = ((IData)(vlTOPp->mac__DOT__y___05Fh127720) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh127719));
    vlTOPp->mac__DOT__y___05Fh125700 = ((IData)(vlTOPp->mac__DOT__x___05Fh125795) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh125796));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1178 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh95527) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh95528)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh95250) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh95251)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1177)));
    vlTOPp->mac__DOT__y___05Fh95902 = ((IData)(vlTOPp->mac__DOT__y___05Fh95528) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95527));
    vlTOPp->mac__DOT__y___05Fh15331 = ((IData)(vlTOPp->mac__DOT__y___05Fh14957) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14956));
    vlTOPp->mac__DOT__rg_A_0_BIT_12_617_XOR_rg_B_BIT_12_618_649_XOR___05FETC___05F_d1704 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh130014) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh130015)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh129740) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh129741)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_10_623_XOR_rg_B_BIT_10_624_643_XOR___05FETC___05F_d1703)));
    vlTOPp->mac__DOT__y___05Fh130289 = ((IData)(vlTOPp->mac__DOT__y___05Fh130015) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh130014));
    vlTOPp->mac__DOT__x___05Fh127993 = ((IData)(vlTOPp->mac__DOT__x___05Fh125699) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh125700));
    vlTOPp->mac__DOT__y___05Fh126070 = ((IData)(vlTOPp->mac__DOT__y___05Fh125700) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh125699));
    vlTOPp->mac__DOT__y___05Fh95805 = ((IData)(vlTOPp->mac__DOT__x___05Fh95901) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh95902));
    vlTOPp->mac__DOT__y___05Fh15234 = ((IData)(vlTOPp->mac__DOT__x___05Fh15330) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15331));
    vlTOPp->mac__DOT__x___05Fh130288 = ((IData)(vlTOPp->mac__DOT__x___05Fh127993) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh127994));
    vlTOPp->mac__DOT__y___05Fh128268 = ((IData)(vlTOPp->mac__DOT__y___05Fh127994) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh127993));
    vlTOPp->mac__DOT__y___05Fh125974 = ((IData)(vlTOPp->mac__DOT__x___05Fh126069) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh126070));
    vlTOPp->mac__DOT__y___05Fh96179 = ((IData)(vlTOPp->mac__DOT__y___05Fh95805) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh95804));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh15233) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh15234)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh14956) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh14957)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133)));
    vlTOPp->mac__DOT__y___05Fh15608 = ((IData)(vlTOPp->mac__DOT__y___05Fh15234) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15233));
    vlTOPp->mac__DOT__y___05Fh130563 = ((IData)(vlTOPp->mac__DOT__y___05Fh130289) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh130288));
    vlTOPp->mac__DOT__x___05Fh128267 = (1U & (~ ((IData)(vlTOPp->mac__DOT__x___05Fh125973) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh125974))));
    vlTOPp->mac__DOT__y___05Fh96082 = ((IData)(vlTOPp->mac__DOT__x___05Fh96178) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh96179));
    vlTOPp->mac__DOT__y___05Fh15511 = ((IData)(vlTOPp->mac__DOT__x___05Fh15607) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15608));
    vlTOPp->mac__DOT__x___05Fh130562 = ((IData)(vlTOPp->mac__DOT__x___05Fh128267) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh128268));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1179 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh96081) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh96082)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh95804) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh95805)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1178)));
    vlTOPp->mac__DOT__y___05Fh96456 = ((IData)(vlTOPp->mac__DOT__y___05Fh96082) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh96081));
    vlTOPp->mac__DOT__y___05Fh15885 = ((IData)(vlTOPp->mac__DOT__y___05Fh15511) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15510));
    vlTOPp->mac__DOT__spliced_bits___05Fh123766 = (
                                                   (((IData)(vlTOPp->mac__DOT__x___05Fh130562) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh130563)) 
                                                    << 7U) 
                                                   | ((((IData)(vlTOPp->mac__DOT__x___05Fh130288) 
                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh130289)) 
                                                       << 6U) 
                                                      | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_12_617_XOR_rg_B_BIT_12_618_649_XOR___05FETC___05F_d1704)));
    vlTOPp->mac__DOT__spliced_bits___05Fh123793 = (
                                                   ((IData)(vlTOPp->mac__DOT__x___05Fh130562) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->mac__DOT__x___05Fh130288) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->mac__DOT__x___05Fh130014) 
                                                          << 5U) 
                                                         | (((IData)(vlTOPp->mac__DOT__x___05Fh129740) 
                                                             << 4U) 
                                                            | (((IData)(vlTOPp->mac__DOT__x___05Fh129466) 
                                                                << 3U) 
                                                               | (((IData)(vlTOPp->mac__DOT__x___05Fh129191) 
                                                                   << 2U) 
                                                                  | (((IData)(vlTOPp->mac__DOT__x___05Fh128919) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5)))))))));
    vlTOPp->mac__DOT__y___05Fh96359 = ((IData)(vlTOPp->mac__DOT__x___05Fh96455) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh96456));
    vlTOPp->mac__DOT__y___05Fh15788 = ((IData)(vlTOPp->mac__DOT__x___05Fh15884) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15885));
    vlTOPp->mac__DOT__y___05Fh96733 = ((IData)(vlTOPp->mac__DOT__y___05Fh96359) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh96358));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh15787) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh15788)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh15510) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh15511)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134)));
    vlTOPp->mac__DOT__y___05Fh16162 = ((IData)(vlTOPp->mac__DOT__y___05Fh15788) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15787));
    vlTOPp->mac__DOT__y___05Fh96636 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                              >> 8U) 
                                             | (IData)(vlTOPp->mac__DOT__y___05Fh96733)));
    vlTOPp->mac__DOT__y___05Fh16065 = ((IData)(vlTOPp->mac__DOT__x___05Fh16161) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16162));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1180 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh96636) 
                         << 9U))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh96358) 
                                       ^ (IData)(vlTOPp->mac__DOT__y___05Fh96359)) 
                                      << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1179)));
    vlTOPp->mac__DOT__y___05Fh96913 = ((IData)(vlTOPp->mac__DOT__y___05Fh96636) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 9U));
    vlTOPp->mac__DOT__y___05Fh16439 = ((IData)(vlTOPp->mac__DOT__y___05Fh16065) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16064));
    vlTOPp->mac__DOT__y___05Fh97190 = ((IData)(vlTOPp->mac__DOT__y___05Fh96913) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh16342 = ((IData)(vlTOPp->mac__DOT__x___05Fh16438) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16439));
    vlTOPp->mac__DOT__y___05Fh97467 = ((IData)(vlTOPp->mac__DOT__y___05Fh97190) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16341) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16342)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh16064) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh16065)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135)));
    vlTOPp->mac__DOT__y___05Fh16716 = ((IData)(vlTOPp->mac__DOT__y___05Fh16342) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16341));
    vlTOPp->mac__DOT__y___05Fh97744 = ((IData)(vlTOPp->mac__DOT__y___05Fh97467) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh16619 = ((IData)(vlTOPp->mac__DOT__x___05Fh16715) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16716));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1182 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh97744) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh97467) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh97190) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh96913) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1180)))));
    vlTOPp->mac__DOT__y___05Fh98021 = ((IData)(vlTOPp->mac__DOT__y___05Fh97744) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh16993 = ((IData)(vlTOPp->mac__DOT__y___05Fh16619) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16618));
    vlTOPp->mac__DOT__y___05Fh98298 = ((IData)(vlTOPp->mac__DOT__y___05Fh98021) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh16896 = ((IData)(vlTOPp->mac__DOT__x___05Fh16992) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16993));
    vlTOPp->mac__DOT__mantissa_result___05Fh89251 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh98298) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh98021) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1182)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16895) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16896)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh16618) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh16619)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136)));
    vlTOPp->mac__DOT__y___05Fh17270 = ((IData)(vlTOPp->mac__DOT__y___05Fh16896) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16895));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184 
        = ((2U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh89251)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100));
    vlTOPp->mac__DOT__y___05Fh17173 = ((IData)(vlTOPp->mac__DOT__x___05Fh17269) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17270));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq43 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh100847 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                                 >> 9U)));
    vlTOPp->mac__DOT__x___05Fh100944 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh100570 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh100667 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh100293 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh100390 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh100016 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 6U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh100113 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 5U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh99739 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh99836 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh99461 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh99558 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq42 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh99187 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh17547 = ((IData)(vlTOPp->mac__DOT__y___05Fh17173) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17172));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1253 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh99187) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq42)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                     ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq43)))));
    vlTOPp->mac__DOT__y___05Fh99559 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq42) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh99187));
    vlTOPp->mac__DOT__y___05Fh17450 = ((IData)(vlTOPp->mac__DOT__x___05Fh17546) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17547));
    vlTOPp->mac__DOT__y___05Fh99462 = ((IData)(vlTOPp->mac__DOT__x___05Fh99558) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99559));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh17449) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh17450)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh17172) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh17173)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137)));
    vlTOPp->mac__DOT__y___05Fh17824 = ((IData)(vlTOPp->mac__DOT__y___05Fh17450) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17449));
    vlTOPp->mac__DOT__y___05Fh99837 = ((IData)(vlTOPp->mac__DOT__y___05Fh99462) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99461));
    vlTOPp->mac__DOT__y___05Fh17727 = ((IData)(vlTOPp->mac__DOT__x___05Fh17823) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17824));
    vlTOPp->mac__DOT__y___05Fh99740 = ((IData)(vlTOPp->mac__DOT__x___05Fh99836) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh99837));
    vlTOPp->mac__DOT__y___05Fh18101 = ((IData)(vlTOPp->mac__DOT__y___05Fh17727) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17726));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1254 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh99739) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh99740)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh99461) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh99462)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1253)));
    vlTOPp->mac__DOT__y___05Fh100114 = ((IData)(vlTOPp->mac__DOT__y___05Fh99740) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh99739));
    vlTOPp->mac__DOT__y___05Fh18004 = ((IData)(vlTOPp->mac__DOT__x___05Fh18100) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh18101));
    vlTOPp->mac__DOT__y___05Fh100017 = ((IData)(vlTOPp->mac__DOT__x___05Fh100113) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh100114));
    vlTOPp->mac__DOT__mult_result___05Fh8828 = ((((IData)(vlTOPp->mac__DOT__x___05Fh18003) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh18004)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh17726) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh17727)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138)));
    vlTOPp->mac__DOT__y___05Fh100391 = ((IData)(vlTOPp->mac__DOT__y___05Fh100017) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100016));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140 
        = ((2U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8828)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28));
    vlTOPp->mac__DOT__y___05Fh100294 = ((IData)(vlTOPp->mac__DOT__x___05Fh100390) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh100391));
    vlTOPp->mac__DOT__x___05Fh22239 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh22336 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh21962 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh22059 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh21685 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh21782 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh21408 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh21505 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh21131 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh21228 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh20854 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh20951 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh20577 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh20674 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh20300 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh20397 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh20023 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh20120 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh19746 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh19843 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh19469 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh19566 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh19191 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh19288 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh18917 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1255 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh100293) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh100294)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh100016) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh100017)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1254)));
    vlTOPp->mac__DOT__y___05Fh100668 = ((IData)(vlTOPp->mac__DOT__y___05Fh100294) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100293));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh18917) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                     ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13)))));
    vlTOPp->mac__DOT__y___05Fh19289 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh18917));
    vlTOPp->mac__DOT__y___05Fh100571 = ((IData)(vlTOPp->mac__DOT__x___05Fh100667) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh100668));
    vlTOPp->mac__DOT__y___05Fh19192 = ((IData)(vlTOPp->mac__DOT__x___05Fh19288) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19289));
    vlTOPp->mac__DOT__y___05Fh100945 = ((IData)(vlTOPp->mac__DOT__y___05Fh100571) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100570));
    vlTOPp->mac__DOT__y___05Fh19567 = ((IData)(vlTOPp->mac__DOT__y___05Fh19192) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19191));
    vlTOPp->mac__DOT__y___05Fh100848 = ((IData)(vlTOPp->mac__DOT__x___05Fh100944) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh100945));
    vlTOPp->mac__DOT__y___05Fh19470 = ((IData)(vlTOPp->mac__DOT__x___05Fh19566) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19567));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_T_ETC___05F_d1256 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh100847) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh100848)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh100570) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh100571)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1255)));
    vlTOPp->mac__DOT__y___05Fh101222 = ((IData)(vlTOPp->mac__DOT__y___05Fh100848) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100847));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh19469) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh19470)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh19191) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh19192)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226)));
    vlTOPp->mac__DOT__y___05Fh19844 = ((IData)(vlTOPp->mac__DOT__y___05Fh19470) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19469));
    vlTOPp->mac__DOT__y___05Fh101125 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                               >> 9U) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh101222)));
    vlTOPp->mac__DOT__y___05Fh19747 = ((IData)(vlTOPp->mac__DOT__x___05Fh19843) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19844));
    vlTOPp->mac__DOT__y___05Fh101402 = ((IData)(vlTOPp->mac__DOT__y___05Fh101125) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                           >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh20121 = ((IData)(vlTOPp->mac__DOT__y___05Fh19747) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19746));
    vlTOPp->mac__DOT__y___05Fh101679 = ((IData)(vlTOPp->mac__DOT__y___05Fh101402) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                           >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh20024 = ((IData)(vlTOPp->mac__DOT__x___05Fh20120) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20121));
    vlTOPp->mac__DOT__y___05Fh101956 = ((IData)(vlTOPp->mac__DOT__y___05Fh101679) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20023) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20024)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh19746) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh19747)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227)));
    vlTOPp->mac__DOT__y___05Fh20398 = ((IData)(vlTOPp->mac__DOT__y___05Fh20024) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20023));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1258 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh101956) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh101679) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh101402) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh101125) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_T_ETC___05F_d1256)))));
    vlTOPp->mac__DOT__y___05Fh102233 = ((IData)(vlTOPp->mac__DOT__y___05Fh101956) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh20301 = ((IData)(vlTOPp->mac__DOT__x___05Fh20397) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20398));
    vlTOPp->mac__DOT__y___05Fh102510 = ((IData)(vlTOPp->mac__DOT__y___05Fh102233) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh20675 = ((IData)(vlTOPp->mac__DOT__y___05Fh20301) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20300));
    vlTOPp->mac__DOT__mantissa_result___05Fh88742 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh102510) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh102233) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1258)));
    vlTOPp->mac__DOT__y___05Fh20578 = ((IData)(vlTOPp->mac__DOT__x___05Fh20674) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20675));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260 
        = ((4U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh88742)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20577) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20578)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20300) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh20301)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228)));
    vlTOPp->mac__DOT__y___05Fh20952 = ((IData)(vlTOPp->mac__DOT__y___05Fh20578) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20577));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq45 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh105331 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                                 >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh105428 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh105054 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh105151 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh104777 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh104874 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh104500 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh104597 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh104223 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 6U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh104320 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 5U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh103945 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 5U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh104042 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 4U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq44 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh103671 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 4U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh20855 = ((IData)(vlTOPp->mac__DOT__x___05Fh20951) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20952));
    vlTOPp->mac__DOT__y___05Fh104043 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq44) 
                                         >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh103671));
    vlTOPp->mac__DOT__y___05Fh21229 = ((IData)(vlTOPp->mac__DOT__y___05Fh20855) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20854));
    vlTOPp->mac__DOT__y___05Fh103946 = ((IData)(vlTOPp->mac__DOT__x___05Fh104042) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104043));
    vlTOPp->mac__DOT__y___05Fh21132 = ((IData)(vlTOPp->mac__DOT__x___05Fh21228) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21229));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1326 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh103945) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh103946)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh103671) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq44)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                                ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq45))))));
    vlTOPp->mac__DOT__y___05Fh104321 = ((IData)(vlTOPp->mac__DOT__y___05Fh103946) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103945));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh21131) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh21132)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20854) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh20855)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229)));
    vlTOPp->mac__DOT__y___05Fh21506 = ((IData)(vlTOPp->mac__DOT__y___05Fh21132) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21131));
    vlTOPp->mac__DOT__y___05Fh104224 = ((IData)(vlTOPp->mac__DOT__x___05Fh104320) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104321));
    vlTOPp->mac__DOT__y___05Fh21409 = ((IData)(vlTOPp->mac__DOT__x___05Fh21505) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21506));
    vlTOPp->mac__DOT__y___05Fh104598 = ((IData)(vlTOPp->mac__DOT__y___05Fh104224) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104223));
    vlTOPp->mac__DOT__y___05Fh21783 = ((IData)(vlTOPp->mac__DOT__y___05Fh21409) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21408));
    vlTOPp->mac__DOT__y___05Fh104501 = ((IData)(vlTOPp->mac__DOT__x___05Fh104597) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104598));
    vlTOPp->mac__DOT__y___05Fh21686 = ((IData)(vlTOPp->mac__DOT__x___05Fh21782) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21783));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1327 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh104500) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh104501)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh104223) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh104224)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1326)));
    vlTOPp->mac__DOT__y___05Fh104875 = ((IData)(vlTOPp->mac__DOT__y___05Fh104501) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104500));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh21685) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh21686)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh21408) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh21409)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230)));
    vlTOPp->mac__DOT__y___05Fh22060 = ((IData)(vlTOPp->mac__DOT__y___05Fh21686) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21685));
    vlTOPp->mac__DOT__y___05Fh104778 = ((IData)(vlTOPp->mac__DOT__x___05Fh104874) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh104875));
    vlTOPp->mac__DOT__y___05Fh21963 = ((IData)(vlTOPp->mac__DOT__x___05Fh22059) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh22060));
    vlTOPp->mac__DOT__y___05Fh105152 = ((IData)(vlTOPp->mac__DOT__y___05Fh104778) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104777));
    vlTOPp->mac__DOT__y___05Fh22337 = ((IData)(vlTOPp->mac__DOT__y___05Fh21963) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21962));
    vlTOPp->mac__DOT__y___05Fh105055 = ((IData)(vlTOPp->mac__DOT__x___05Fh105151) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh105152));
    vlTOPp->mac__DOT__y___05Fh22240 = ((IData)(vlTOPp->mac__DOT__x___05Fh22336) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh22337));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1328 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh105054) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh105055)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh104777) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh104778)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1327)));
    vlTOPp->mac__DOT__y___05Fh105429 = ((IData)(vlTOPp->mac__DOT__y___05Fh105055) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh105054));
    vlTOPp->mac__DOT__mult_result___05Fh8295 = ((((IData)(vlTOPp->mac__DOT__x___05Fh22239) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh22240)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh21962) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh21963)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231)));
    vlTOPp->mac__DOT__y___05Fh105332 = ((IData)(vlTOPp->mac__DOT__x___05Fh105428) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh105429));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233 
        = ((4U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8295)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140));
    vlTOPp->mac__DOT__y___05Fh105706 = ((IData)(vlTOPp->mac__DOT__y___05Fh105332) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh105331));
    vlTOPp->mac__DOT__x___05Fh26470 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh26567 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh26193 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh26290 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh25916 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh26013 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh25639 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh25736 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh25362 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh25459 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh25085 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh25182 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh24808 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh24905 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh24531 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh24628 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh24254 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh24351 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh23977 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh24074 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh23699 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh23796 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh23425 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh105609 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                               >> 0xaU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh105706)));
    vlTOPp->mac__DOT__y___05Fh23797 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14) 
                                        >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh23425));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1329 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh105609) 
                         << 0xbU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh105331) 
                                         ^ (IData)(vlTOPp->mac__DOT__y___05Fh105332)) 
                                        << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1328)));
    vlTOPp->mac__DOT__y___05Fh105886 = ((IData)(vlTOPp->mac__DOT__y___05Fh105609) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                           >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh23700 = ((IData)(vlTOPp->mac__DOT__x___05Fh23796) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh23797));
    vlTOPp->mac__DOT__y___05Fh106163 = ((IData)(vlTOPp->mac__DOT__y___05Fh105886) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh23699) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh23700)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh23425) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15))))));
    vlTOPp->mac__DOT__y___05Fh24075 = ((IData)(vlTOPp->mac__DOT__y___05Fh23700) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23699));
    vlTOPp->mac__DOT__y___05Fh106440 = ((IData)(vlTOPp->mac__DOT__y___05Fh106163) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh23978 = ((IData)(vlTOPp->mac__DOT__x___05Fh24074) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24075));
    vlTOPp->mac__DOT__y___05Fh106717 = ((IData)(vlTOPp->mac__DOT__y___05Fh106440) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh24352 = ((IData)(vlTOPp->mac__DOT__y___05Fh23978) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23977));
    vlTOPp->mac__DOT__mantissa_result___05Fh88233 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh106717) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh106440) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh106163) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260)) 
                                                ^ ((IData)(vlTOPp->mac__DOT__y___05Fh105886) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1329)))));
    vlTOPp->mac__DOT__y___05Fh24255 = ((IData)(vlTOPp->mac__DOT__x___05Fh24351) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24352));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332 
        = ((8U & (IData)(vlTOPp->mac__DOT__rg_B)) ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh88233)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh24254) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh24255)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh23977) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh23978)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313)));
    vlTOPp->mac__DOT__y___05Fh24629 = ((IData)(vlTOPp->mac__DOT__y___05Fh24255) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24254));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq47 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh109810 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                                 >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh109907 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh109533 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh109630 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh109256 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh109353 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh108979 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh109076 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh108702 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh108799 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh108424 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 6U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh108521 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 5U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq46 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh108150 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 5U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh24532 = ((IData)(vlTOPp->mac__DOT__x___05Fh24628) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24629));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1395 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh108150) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq46)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                        ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq47)))));
    vlTOPp->mac__DOT__y___05Fh108522 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq46) 
                                         >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh108150));
    vlTOPp->mac__DOT__y___05Fh24906 = ((IData)(vlTOPp->mac__DOT__y___05Fh24532) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24531));
    vlTOPp->mac__DOT__y___05Fh108425 = ((IData)(vlTOPp->mac__DOT__x___05Fh108521) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108522));
    vlTOPp->mac__DOT__y___05Fh24809 = ((IData)(vlTOPp->mac__DOT__x___05Fh24905) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24906));
    vlTOPp->mac__DOT__y___05Fh108800 = ((IData)(vlTOPp->mac__DOT__y___05Fh108425) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108424));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh24808) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh24809)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh24531) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh24532)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314)));
    vlTOPp->mac__DOT__y___05Fh25183 = ((IData)(vlTOPp->mac__DOT__y___05Fh24809) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24808));
    vlTOPp->mac__DOT__y___05Fh108703 = ((IData)(vlTOPp->mac__DOT__x___05Fh108799) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh108800));
    vlTOPp->mac__DOT__y___05Fh25086 = ((IData)(vlTOPp->mac__DOT__x___05Fh25182) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25183));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1396 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh108702) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh108703)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh108424) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh108425)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1395)));
    vlTOPp->mac__DOT__y___05Fh109077 = ((IData)(vlTOPp->mac__DOT__y___05Fh108703) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108702));
    vlTOPp->mac__DOT__y___05Fh25460 = ((IData)(vlTOPp->mac__DOT__y___05Fh25086) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25085));
    vlTOPp->mac__DOT__y___05Fh108980 = ((IData)(vlTOPp->mac__DOT__x___05Fh109076) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh109077));
    vlTOPp->mac__DOT__y___05Fh25363 = ((IData)(vlTOPp->mac__DOT__x___05Fh25459) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25460));
    vlTOPp->mac__DOT__y___05Fh109354 = ((IData)(vlTOPp->mac__DOT__y___05Fh108980) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh108979));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh25362) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh25363)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh25085) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh25086)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315)));
    vlTOPp->mac__DOT__y___05Fh25737 = ((IData)(vlTOPp->mac__DOT__y___05Fh25363) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25362));
    vlTOPp->mac__DOT__y___05Fh109257 = ((IData)(vlTOPp->mac__DOT__x___05Fh109353) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh109354));
    vlTOPp->mac__DOT__y___05Fh25640 = ((IData)(vlTOPp->mac__DOT__x___05Fh25736) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25737));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1397 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh109256) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh109257)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh108979) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh108980)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1396)));
    vlTOPp->mac__DOT__y___05Fh109631 = ((IData)(vlTOPp->mac__DOT__y___05Fh109257) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh109256));
    vlTOPp->mac__DOT__y___05Fh26014 = ((IData)(vlTOPp->mac__DOT__y___05Fh25640) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25639));
    vlTOPp->mac__DOT__y___05Fh109534 = ((IData)(vlTOPp->mac__DOT__x___05Fh109630) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh109631));
    vlTOPp->mac__DOT__y___05Fh25917 = ((IData)(vlTOPp->mac__DOT__x___05Fh26013) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26014));
    vlTOPp->mac__DOT__y___05Fh109908 = ((IData)(vlTOPp->mac__DOT__y___05Fh109534) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh109533));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh25916) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh25917)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh25639) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh25640)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316)));
    vlTOPp->mac__DOT__y___05Fh26291 = ((IData)(vlTOPp->mac__DOT__y___05Fh25917) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25916));
    vlTOPp->mac__DOT__y___05Fh109811 = ((IData)(vlTOPp->mac__DOT__x___05Fh109907) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh109908));
    vlTOPp->mac__DOT__y___05Fh26194 = ((IData)(vlTOPp->mac__DOT__x___05Fh26290) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26291));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_T_ETC___05F_d1398 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh109810) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh109811)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh109533) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh109534)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1397)));
    vlTOPp->mac__DOT__y___05Fh110185 = ((IData)(vlTOPp->mac__DOT__y___05Fh109811) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh109810));
    vlTOPp->mac__DOT__y___05Fh26568 = ((IData)(vlTOPp->mac__DOT__y___05Fh26194) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh26193));
    vlTOPp->mac__DOT__y___05Fh110088 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                               >> 0xbU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh110185)));
    vlTOPp->mac__DOT__y___05Fh26471 = ((IData)(vlTOPp->mac__DOT__x___05Fh26567) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26568));
    vlTOPp->mac__DOT__y___05Fh110365 = ((IData)(vlTOPp->mac__DOT__y___05Fh110088) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__mult_result___05Fh7762 = ((((IData)(vlTOPp->mac__DOT__x___05Fh26470) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh26471)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh26193) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh26194)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317)));
    vlTOPp->mac__DOT__y___05Fh110642 = ((IData)(vlTOPp->mac__DOT__y___05Fh110365) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319 
        = ((8U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh7762)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233));
    vlTOPp->mac__DOT__y___05Fh110919 = ((IData)(vlTOPp->mac__DOT__y___05Fh110642) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh30696 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh30793 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh30419 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh30516 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh30142 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh30239 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh29865 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh29962 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh29588 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh29685 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh29311 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh29408 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh29034 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh29131 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh28757 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh28854 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh28480 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh28577 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh28202 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh28299 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh27928 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mantissa_result___05Fh87724 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh110919) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh110642) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh110365) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332)) 
                                                ^ ((IData)(vlTOPp->mac__DOT__y___05Fh110088) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_T_ETC___05F_d1398)))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh27928) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17)))));
    vlTOPp->mac__DOT__y___05Fh28300 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16) 
                                        >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh27928));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh87724)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332));
    vlTOPp->mac__DOT__y___05Fh28203 = ((IData)(vlTOPp->mac__DOT__x___05Fh28299) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28300));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq49 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh114284 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                                 >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh114381 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh114007 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh114104 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh113730 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh113827 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh113453 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh113550 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh113176 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh113273 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh112898 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh112995 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq48 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh112624 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 6U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh28578 = ((IData)(vlTOPp->mac__DOT__y___05Fh28203) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28202));
    vlTOPp->mac__DOT__y___05Fh112996 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq48) 
                                         >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh112624));
    vlTOPp->mac__DOT__y___05Fh28481 = ((IData)(vlTOPp->mac__DOT__x___05Fh28577) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28578));
    vlTOPp->mac__DOT__y___05Fh112899 = ((IData)(vlTOPp->mac__DOT__x___05Fh112995) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh112996));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh28480) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh28481)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh28202) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh28203)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393)));
    vlTOPp->mac__DOT__y___05Fh28855 = ((IData)(vlTOPp->mac__DOT__y___05Fh28481) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28480));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1461 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh112898) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh112899)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh112624) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq48)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq49))))));
    vlTOPp->mac__DOT__y___05Fh113274 = ((IData)(vlTOPp->mac__DOT__y___05Fh112899) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh112898));
    vlTOPp->mac__DOT__y___05Fh28758 = ((IData)(vlTOPp->mac__DOT__x___05Fh28854) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28855));
    vlTOPp->mac__DOT__y___05Fh113177 = ((IData)(vlTOPp->mac__DOT__x___05Fh113273) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113274));
    vlTOPp->mac__DOT__y___05Fh29132 = ((IData)(vlTOPp->mac__DOT__y___05Fh28758) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28757));
    vlTOPp->mac__DOT__y___05Fh113551 = ((IData)(vlTOPp->mac__DOT__y___05Fh113177) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh113176));
    vlTOPp->mac__DOT__y___05Fh29035 = ((IData)(vlTOPp->mac__DOT__x___05Fh29131) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29132));
    vlTOPp->mac__DOT__y___05Fh113454 = ((IData)(vlTOPp->mac__DOT__x___05Fh113550) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113551));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh29034) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh29035)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh28757) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh28758)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394)));
    vlTOPp->mac__DOT__y___05Fh29409 = ((IData)(vlTOPp->mac__DOT__y___05Fh29035) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29034));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1462 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh113453) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh113454)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh113176) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh113177)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1461)));
    vlTOPp->mac__DOT__y___05Fh113828 = ((IData)(vlTOPp->mac__DOT__y___05Fh113454) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh113453));
    vlTOPp->mac__DOT__y___05Fh29312 = ((IData)(vlTOPp->mac__DOT__x___05Fh29408) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29409));
    vlTOPp->mac__DOT__y___05Fh113731 = ((IData)(vlTOPp->mac__DOT__x___05Fh113827) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh113828));
    vlTOPp->mac__DOT__y___05Fh29686 = ((IData)(vlTOPp->mac__DOT__y___05Fh29312) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29311));
    vlTOPp->mac__DOT__y___05Fh114105 = ((IData)(vlTOPp->mac__DOT__y___05Fh113731) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh113730));
    vlTOPp->mac__DOT__y___05Fh29589 = ((IData)(vlTOPp->mac__DOT__x___05Fh29685) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29686));
    vlTOPp->mac__DOT__y___05Fh114008 = ((IData)(vlTOPp->mac__DOT__x___05Fh114104) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh114105));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh29588) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh29589)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh29311) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh29312)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395)));
    vlTOPp->mac__DOT__y___05Fh29963 = ((IData)(vlTOPp->mac__DOT__y___05Fh29589) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29588));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1463 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh114007) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh114008)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh113730) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh113731)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1462)));
    vlTOPp->mac__DOT__y___05Fh114382 = ((IData)(vlTOPp->mac__DOT__y___05Fh114008) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh114007));
    vlTOPp->mac__DOT__y___05Fh29866 = ((IData)(vlTOPp->mac__DOT__x___05Fh29962) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29963));
    vlTOPp->mac__DOT__y___05Fh114285 = ((IData)(vlTOPp->mac__DOT__x___05Fh114381) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh114382));
    vlTOPp->mac__DOT__y___05Fh30240 = ((IData)(vlTOPp->mac__DOT__y___05Fh29866) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29865));
    vlTOPp->mac__DOT__y___05Fh114659 = ((IData)(vlTOPp->mac__DOT__y___05Fh114285) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh114284));
    vlTOPp->mac__DOT__y___05Fh30143 = ((IData)(vlTOPp->mac__DOT__x___05Fh30239) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30240));
    vlTOPp->mac__DOT__y___05Fh114562 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                               >> 0xcU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh114659)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh30142) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh30143)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh29865) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh29866)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396)));
    vlTOPp->mac__DOT__y___05Fh30517 = ((IData)(vlTOPp->mac__DOT__y___05Fh30143) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh30142));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1464 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh114562) 
                          << 0xdU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh114284) 
                                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh114285)) 
                                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1463)));
    vlTOPp->mac__DOT__y___05Fh114839 = ((IData)(vlTOPp->mac__DOT__y___05Fh114562) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh30420 = ((IData)(vlTOPp->mac__DOT__x___05Fh30516) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30517));
    vlTOPp->mac__DOT__y___05Fh115116 = ((IData)(vlTOPp->mac__DOT__y___05Fh114839) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh30794 = ((IData)(vlTOPp->mac__DOT__y___05Fh30420) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh30419));
    vlTOPp->mac__DOT__mantissa_result___05Fh87215 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh115116) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh114839) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1464)));
    vlTOPp->mac__DOT__y___05Fh30697 = ((IData)(vlTOPp->mac__DOT__x___05Fh30793) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30794));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh87215)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401));
    vlTOPp->mac__DOT__mult_result___05Fh7229 = ((((IData)(vlTOPp->mac__DOT__x___05Fh30696) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh30697)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh30419) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh30420)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397)));
    vlTOPp->mac__DOT__x___05Fh118753 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                                 >> 0xdU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq51 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh118850 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xcU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh118476 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xcU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh118573 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh118199 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh118296 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh117922 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh118019 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh117645 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh117742 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh117367 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh117464 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq50 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh117093 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 7U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh7229)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1523 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh117093) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq50)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466)) 
                        ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq51)))));
    vlTOPp->mac__DOT__y___05Fh117465 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq50) 
                                         >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh117093));
    vlTOPp->mac__DOT__x___05Fh34917 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh35014 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh34640 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh34737 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh34363 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh34460 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh34086 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh34183 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh33809 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh33906 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh33532 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh33629 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh33255 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh33352 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh32978 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh33075 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh32700 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh32797 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh32426 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh117368 = ((IData)(vlTOPp->mac__DOT__x___05Fh117464) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh117465));
    vlTOPp->mac__DOT__y___05Fh32798 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18) 
                                        >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh32426));
    vlTOPp->mac__DOT__y___05Fh117743 = ((IData)(vlTOPp->mac__DOT__y___05Fh117368) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117367));
    vlTOPp->mac__DOT__y___05Fh32701 = ((IData)(vlTOPp->mac__DOT__x___05Fh32797) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh32798));
    vlTOPp->mac__DOT__y___05Fh117646 = ((IData)(vlTOPp->mac__DOT__x___05Fh117742) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh117743));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh32700) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh32701)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh32426) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19))))));
    vlTOPp->mac__DOT__y___05Fh33076 = ((IData)(vlTOPp->mac__DOT__y___05Fh32701) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32700));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1524 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh117645) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh117646)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh117367) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh117368)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1523)));
    vlTOPp->mac__DOT__y___05Fh118020 = ((IData)(vlTOPp->mac__DOT__y___05Fh117646) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117645));
    vlTOPp->mac__DOT__y___05Fh32979 = ((IData)(vlTOPp->mac__DOT__x___05Fh33075) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33076));
    vlTOPp->mac__DOT__y___05Fh117923 = ((IData)(vlTOPp->mac__DOT__x___05Fh118019) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh118020));
    vlTOPp->mac__DOT__y___05Fh33353 = ((IData)(vlTOPp->mac__DOT__y___05Fh32979) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32978));
    vlTOPp->mac__DOT__y___05Fh118297 = ((IData)(vlTOPp->mac__DOT__y___05Fh117923) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh117922));
    vlTOPp->mac__DOT__y___05Fh33256 = ((IData)(vlTOPp->mac__DOT__x___05Fh33352) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33353));
    vlTOPp->mac__DOT__y___05Fh118200 = ((IData)(vlTOPp->mac__DOT__x___05Fh118296) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh118297));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh33255) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh33256)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh32978) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh32979)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467)));
    vlTOPp->mac__DOT__y___05Fh33630 = ((IData)(vlTOPp->mac__DOT__y___05Fh33256) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33255));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1525 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh118199) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh118200)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh117922) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh117923)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1524)));
    vlTOPp->mac__DOT__y___05Fh118574 = ((IData)(vlTOPp->mac__DOT__y___05Fh118200) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh118199));
    vlTOPp->mac__DOT__y___05Fh33533 = ((IData)(vlTOPp->mac__DOT__x___05Fh33629) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33630));
    vlTOPp->mac__DOT__y___05Fh118477 = ((IData)(vlTOPp->mac__DOT__x___05Fh118573) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh118574));
    vlTOPp->mac__DOT__y___05Fh33907 = ((IData)(vlTOPp->mac__DOT__y___05Fh33533) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33532));
    vlTOPp->mac__DOT__y___05Fh118851 = ((IData)(vlTOPp->mac__DOT__y___05Fh118477) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh118476));
    vlTOPp->mac__DOT__y___05Fh33810 = ((IData)(vlTOPp->mac__DOT__x___05Fh33906) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33907));
    vlTOPp->mac__DOT__y___05Fh118754 = ((IData)(vlTOPp->mac__DOT__x___05Fh118850) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh118851));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh33809) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh33810)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh33532) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh33533)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468)));
    vlTOPp->mac__DOT__y___05Fh34184 = ((IData)(vlTOPp->mac__DOT__y___05Fh33810) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33809));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_T_ETC___05F_d1526 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh118753) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh118754)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh118476) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh118477)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1525)));
    vlTOPp->mac__DOT__y___05Fh119128 = ((IData)(vlTOPp->mac__DOT__y___05Fh118754) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh118753));
    vlTOPp->mac__DOT__y___05Fh34087 = ((IData)(vlTOPp->mac__DOT__x___05Fh34183) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34184));
    vlTOPp->mac__DOT__y___05Fh119031 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                               >> 0xdU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh119128)));
    vlTOPp->mac__DOT__y___05Fh34461 = ((IData)(vlTOPp->mac__DOT__y___05Fh34087) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34086));
    vlTOPp->mac__DOT__y___05Fh119308 = ((IData)(vlTOPp->mac__DOT__y___05Fh119031) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh34364 = ((IData)(vlTOPp->mac__DOT__x___05Fh34460) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34461));
    vlTOPp->mac__DOT__mantissa_result___05Fh86706 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh119308) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh119031) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_T_ETC___05F_d1526)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh34363) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh34364)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh34086) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh34087)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469)));
    vlTOPp->mac__DOT__y___05Fh34738 = ((IData)(vlTOPp->mac__DOT__y___05Fh34364) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34363));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? (IData)(vlTOPp->mac__DOT__mantissa_result___05Fh86706)
            : (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466));
    vlTOPp->mac__DOT__y___05Fh34641 = ((IData)(vlTOPp->mac__DOT__x___05Fh34737) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34738));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq53 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh123217 = (1U & (~ ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                                 >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh123314 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xdU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh122940 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xdU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh123037 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xcU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh122663 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xcU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh122760 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xbU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh122386 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xbU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh122483 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xaU) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh122109 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xaU) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh122206 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 9U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh121831 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 9U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh121928 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq52 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__rg_A)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh121557 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 8U) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh35015 = ((IData)(vlTOPp->mac__DOT__y___05Fh34641) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34640));
    vlTOPp->mac__DOT__y___05Fh121929 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq52) 
                                         >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh121557));
    vlTOPp->mac__DOT__y___05Fh34918 = ((IData)(vlTOPp->mac__DOT__x___05Fh35014) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35015));
    vlTOPp->mac__DOT__y___05Fh121832 = ((IData)(vlTOPp->mac__DOT__x___05Fh121928) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh121929));
    vlTOPp->mac__DOT__mult_result___05Fh6696 = ((((IData)(vlTOPp->mac__DOT__x___05Fh34917) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh34918)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh34640) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh34641)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1582 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh121831) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh121832)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh121557) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq52)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq53))))));
    vlTOPp->mac__DOT__y___05Fh122207 = ((IData)(vlTOPp->mac__DOT__y___05Fh121832) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh121831));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6696)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399));
    vlTOPp->mac__DOT__y___05Fh122110 = ((IData)(vlTOPp->mac__DOT__x___05Fh122206) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh122207));
    vlTOPp->mac__DOT__x___05Fh39133 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh39230 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh38856 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh38953 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh38579 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh38676 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh38302 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh38399 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh38025 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh38122 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh37748 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh37845 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh37471 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh37568 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh37193 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh37290 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh36919 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh122484 = ((IData)(vlTOPp->mac__DOT__y___05Fh122110) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh122109));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh36919) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21)))));
    vlTOPp->mac__DOT__y___05Fh37291 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20) 
                                        >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh36919));
    vlTOPp->mac__DOT__y___05Fh122387 = ((IData)(vlTOPp->mac__DOT__x___05Fh122483) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh122484));
    vlTOPp->mac__DOT__y___05Fh37194 = ((IData)(vlTOPp->mac__DOT__x___05Fh37290) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37291));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1583 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh122386) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh122387)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh122109) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh122110)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1582)));
    vlTOPp->mac__DOT__y___05Fh122761 = ((IData)(vlTOPp->mac__DOT__y___05Fh122387) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh122386));
    vlTOPp->mac__DOT__y___05Fh37569 = ((IData)(vlTOPp->mac__DOT__y___05Fh37194) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37193));
    vlTOPp->mac__DOT__y___05Fh122664 = ((IData)(vlTOPp->mac__DOT__x___05Fh122760) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh122761));
    vlTOPp->mac__DOT__y___05Fh37472 = ((IData)(vlTOPp->mac__DOT__x___05Fh37568) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37569));
    vlTOPp->mac__DOT__y___05Fh123038 = ((IData)(vlTOPp->mac__DOT__y___05Fh122664) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh122663));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh37471) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh37472)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh37193) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh37194)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534)));
    vlTOPp->mac__DOT__y___05Fh37846 = ((IData)(vlTOPp->mac__DOT__y___05Fh37472) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37471));
    vlTOPp->mac__DOT__y___05Fh122941 = ((IData)(vlTOPp->mac__DOT__x___05Fh123037) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh123038));
    vlTOPp->mac__DOT__y___05Fh37749 = ((IData)(vlTOPp->mac__DOT__x___05Fh37845) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37846));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1584 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh122940) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh122941)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh122663) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh122664)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1583)));
    vlTOPp->mac__DOT__y___05Fh123315 = ((IData)(vlTOPp->mac__DOT__y___05Fh122941) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh122940));
    vlTOPp->mac__DOT__y___05Fh38123 = ((IData)(vlTOPp->mac__DOT__y___05Fh37749) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37748));
    vlTOPp->mac__DOT__mantissa_result___05Fh130849 
        = ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1584) 
           << 2U);
    vlTOPp->mac__DOT__y___05Fh123218 = ((IData)(vlTOPp->mac__DOT__x___05Fh123314) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh123315));
    vlTOPp->mac__DOT__y___05Fh38026 = ((IData)(vlTOPp->mac__DOT__x___05Fh38122) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38123));
    vlTOPp->mac__DOT__mantissa_result___05Fh123763 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh123217) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh123218)) 
            << 0xfU) | ((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1584) 
                        << 1U));
    vlTOPp->mac__DOT__y___05Fh123592 = ((IData)(vlTOPp->mac__DOT__y___05Fh123218) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh123217));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh38025) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh38026)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh37748) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh37749)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535)));
    vlTOPp->mac__DOT__y___05Fh38400 = ((IData)(vlTOPp->mac__DOT__y___05Fh38026) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38025));
    vlTOPp->mac__DOT__y___05Fh123495 = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                                               >> 0xeU) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh123592)));
    vlTOPp->mac__DOT__y___05Fh38303 = ((IData)(vlTOPp->mac__DOT__x___05Fh38399) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38400));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1568 
        = (1U & (((IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528) 
                  >> 0xfU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh123495)));
    vlTOPp->mac__DOT__y___05Fh38677 = ((IData)(vlTOPp->mac__DOT__y___05Fh38303) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38302));
    if (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1568) {
        vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762 
            = vlTOPp->mac__DOT__mantissa_result___05Fh123763;
        vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710 
            = vlTOPp->mac__DOT__spliced_bits___05Fh123766;
    } else {
        vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762 
            = vlTOPp->mac__DOT__mantissa_result___05Fh130849;
        vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710 
            = vlTOPp->mac__DOT__spliced_bits___05Fh123793;
    }
    vlTOPp->mac__DOT__y___05Fh38580 = ((IData)(vlTOPp->mac__DOT__x___05Fh38676) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38677));
    if ((0x200U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762))) {
        vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_5_snd23762_BIT_9_THEN_2_E_ETC___05Fq57 = 0U;
        vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_9_THEN_4_ELSE_0___05Fq54 = 4U;
    } else {
        vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_5_snd23762_BIT_9_THEN_2_E_ETC___05Fq57 = 2U;
        vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_9_THEN_4_ELSE_0___05Fq54 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710))) {
        vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_ETC___05Fq58 = 0U;
        vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05Fq56 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_ETC___05Fq58 = 1U;
        vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05Fq56 = 0U;
    }
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh38579) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh38580)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh38302) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh38303)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536)));
    vlTOPp->mac__DOT__y___05Fh38954 = ((IData)(vlTOPp->mac__DOT__y___05Fh38580) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38579));
    vlTOPp->mac__DOT__y___05Fh131875 = (1U & (((IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_9_THEN_4_ELSE_0___05Fq54) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                                 >> 0xaU)));
    vlTOPp->mac__DOT__y___05Fh134192 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05Fq56) 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh38857 = ((IData)(vlTOPp->mac__DOT__x___05Fh38953) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38954));
    vlTOPp->mac__DOT__y___05Fh132150 = ((IData)(vlTOPp->mac__DOT__y___05Fh131875) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                           >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh134467 = ((IData)(vlTOPp->mac__DOT__y___05Fh134192) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           >> 2U));
    vlTOPp->mac__DOT__y___05Fh39231 = ((IData)(vlTOPp->mac__DOT__y___05Fh38857) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38856));
    vlTOPp->mac__DOT__y___05Fh132424 = ((IData)(vlTOPp->mac__DOT__y___05Fh132150) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                           >> 0xcU));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1738 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh134467) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh134192) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05Fq56))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_ETC___05Fq58)))));
    vlTOPp->mac__DOT__y___05Fh134741 = ((IData)(vlTOPp->mac__DOT__y___05Fh134467) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           >> 3U));
    vlTOPp->mac__DOT__y___05Fh39134 = ((IData)(vlTOPp->mac__DOT__x___05Fh39230) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh39231));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1756 
        = ((0x20U & ((0xffffe0U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                   >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh132424) 
                                              << 5U))) 
           | ((0x10U & ((0xfffff0U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                      >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh132150) 
                                                 << 4U))) 
              | ((8U & ((0xfffff8U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                      >> 8U)) ^ ((IData)(vlTOPp->mac__DOT__y___05Fh131875) 
                                                 << 3U))) 
                 | ((4U & ((0xfffffcU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                         >> 8U)) ^ 
                           (0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_9_THEN_4_ELSE_0___05Fq54)))) 
                    | (3U & (IData)(vlTOPp->mac__DOT__IF_INV_theResult___05F___05F_5_snd23762_BIT_9_THEN_2_E_ETC___05Fq57))))));
    vlTOPp->mac__DOT__y___05Fh132698 = ((IData)(vlTOPp->mac__DOT__y___05Fh132424) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                           >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh135015 = ((IData)(vlTOPp->mac__DOT__y___05Fh134741) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           >> 4U));
    vlTOPp->mac__DOT__mult_result___05Fh6163 = ((((IData)(vlTOPp->mac__DOT__x___05Fh39133) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh39134)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh38856) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh38857)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537)));
    vlTOPp->mac__DOT__y___05Fh132972 = ((IData)(vlTOPp->mac__DOT__y___05Fh132698) 
                                        & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                           >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh135289 = ((IData)(vlTOPp->mac__DOT__y___05Fh135015) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           >> 5U));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6163)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1760 
        = ((1U & ((((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                    >> 7U) | (0U != (0x3f80U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                                << 7U)))) 
                  | ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                     >> 9U))) ? ((0x80U & ((0xffff80U 
                                            & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                               >> 8U)) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh132972) 
                                              << 7U))) 
                                 | ((0x40U & ((0xffffc0U 
                                               & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                                  >> 8U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh132698) 
                                                 << 6U))) 
                                    | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1756)))
            : (0xfeU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                        >> 8U)));
    vlTOPp->mac__DOT__y___05Fh135563 = ((IData)(vlTOPp->mac__DOT__y___05Fh135289) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710) 
                                           >> 6U));
    vlTOPp->mac__DOT__x___05Fh43344 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh43441 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh43067 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh43164 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh42790 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh42887 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh42513 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh42610 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh42236 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh42333 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh41959 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh42056 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh41681 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh41778 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh41407 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_8_THEN_IF_IF_I_ETC___05Fq59 
        = ((0x100U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762))
            ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1760)
            : (0xfeU & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                        >> 8U)));
    vlTOPp->mac__DOT__spliced_bits___05Fh133507 = (
                                                   (0x80U 
                                                    & ((0xffffff80U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh135563) 
                                                        << 7U))) 
                                                   | ((0x40U 
                                                       & ((0xffffffc0U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__y___05Fh135289) 
                                                           << 6U))) 
                                                      | ((0x20U 
                                                          & ((0xffffffe0U 
                                                              & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mac__DOT__y___05Fh135015) 
                                                              << 5U))) 
                                                         | ((0x10U 
                                                             & ((0xfffffff0U 
                                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mac__DOT__y___05Fh134741) 
                                                                 << 4U))) 
                                                            | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1738)))));
    vlTOPp->mac__DOT__y___05Fh41779 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22) 
                                        >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh41407));
    vlTOPp->mac__DOT__shiftedMantA___05Fh140853 = (0x800000U 
                                                   | (0x7f0000U 
                                                      & ((IData)(vlTOPp->mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_8_THEN_IF_IF_I_ETC___05Fq59) 
                                                         << 0xfU)));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1741 
        = (((IData)(vlTOPp->mac__DOT__y___05Fh132972) 
            & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
               >> 0xfU)) ? (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh133507)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710));
    vlTOPp->mac__DOT__y___05Fh41682 = ((IData)(vlTOPp->mac__DOT__x___05Fh41778) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41779));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1742 
        = ((1U & ((((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                    >> 7U) | (0U != (0x3f80U & ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                                                << 7U)))) 
                  | ((IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762) 
                     >> 9U))) ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1741)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh41681) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh41682)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh41407) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23))))));
    vlTOPp->mac__DOT__y___05Fh42057 = ((IData)(vlTOPp->mac__DOT__y___05Fh41682) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41681));
    vlTOPp->mac__DOT__expA___05Fh85884 = ((0x100U & (IData)(vlTOPp->mac__DOT___theResult___05F___05F_5_snd___05Fh123762))
                                           ? (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1742)
                                           : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710));
    vlTOPp->mac__DOT__y___05Fh41960 = ((IData)(vlTOPp->mac__DOT__x___05Fh42056) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42057));
    vlTOPp->mac__DOT__expDiff___05Fh140852 = (0xffU 
                                              & ((IData)(vlTOPp->mac__DOT__expA___05Fh85884) 
                                                 - 
                                                 (vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh140879 = (0xffU 
                                              & ((vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U) 
                                                 - (IData)(vlTOPp->mac__DOT__expA___05Fh85884)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1745 
        = ((IData)(vlTOPp->mac__DOT__expA___05Fh85884) 
           <= (0xffU & (vlTOPp->mac__DOT__rg_C >> 0x17U)));
    vlTOPp->mac__DOT__y___05Fh42334 = ((IData)(vlTOPp->mac__DOT__y___05Fh41960) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41959));
    vlTOPp->mac__DOT__shiftedMantB___05Fh140854 = (
                                                   (0x18U 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh140852))
                                                    ? 
                                                   (0x1ffffffU 
                                                    & ((0x800000U 
                                                        | (0x7fffffU 
                                                           & vlTOPp->mac__DOT__rg_C)) 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh140852)))
                                                    : 0U);
    vlTOPp->mac__DOT__shiftedMantA___05Fh140880 = (
                                                   (0x18U 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh140879))
                                                    ? 
                                                   (0x1ffffffU 
                                                    & (vlTOPp->mac__DOT__shiftedMantA___05Fh140853 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh140879)))
                                                    : 0U);
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972 
        = (0xffU & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1745)
                     ? (vlTOPp->mac__DOT__rg_C >> 0x17U)
                     : (IData)(vlTOPp->mac__DOT__expA___05Fh85884)));
    vlTOPp->mac__DOT__y___05Fh42237 = ((IData)(vlTOPp->mac__DOT__x___05Fh42333) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42334));
    if (vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1745) {
        vlTOPp->mac__DOT__shiftedMantB___05Fh85891 
            = (0x800000U | (0x7fffffU & vlTOPp->mac__DOT__rg_C));
        vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
            = vlTOPp->mac__DOT__shiftedMantA___05Fh140880;
    } else {
        vlTOPp->mac__DOT__shiftedMantB___05Fh85891 
            = vlTOPp->mac__DOT__shiftedMantB___05Fh140854;
        vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
            = vlTOPp->mac__DOT__shiftedMantA___05Fh140853;
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972))) {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_ETC___05Fq64 = 0U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05Fq63 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_ETC___05Fq64 = 1U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05Fq63 = 0U;
    }
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42236) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42237)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh41959) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh41960)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595)));
    vlTOPp->mac__DOT__y___05Fh42611 = ((IData)(vlTOPp->mac__DOT__y___05Fh42237) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42236));
    vlTOPp->mac__DOT__x___05Fh148394 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x18U));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1772 
        = (vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
           <= vlTOPp->mac__DOT__shiftedMantB___05Fh85891);
    vlTOPp->mac__DOT__x___05Fh148492 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh148114 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh148212 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh147834 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh147932 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh147554 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh147652 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh147274 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh147372 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh146994 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x13U));
    vlTOPp->mac__DOT__IF_shiftedMantA5890_BIT_0_XOR_shiftedMantB5891_ETC___05Fq62 
        = ((1U & (vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                  ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh147092 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh146714 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh146812 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh146434 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh146532 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh146154 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh146252 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh145874 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh145972 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh145594 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh145692 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh145314 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh145412 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh145034 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh145132 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh144754 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh144852 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh144474 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh144572 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh144194 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh144292 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh143914 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 8U));
    vlTOPp->mac__DOT__x___05Fh144012 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 7U));
    vlTOPp->mac__DOT__x___05Fh143634 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 7U));
    vlTOPp->mac__DOT__x___05Fh143732 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 6U));
    vlTOPp->mac__DOT__x___05Fh143354 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 6U));
    vlTOPp->mac__DOT__x___05Fh143452 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 5U));
    vlTOPp->mac__DOT__x___05Fh143074 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 5U));
    vlTOPp->mac__DOT__x___05Fh143172 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 4U));
    vlTOPp->mac__DOT__x___05Fh142794 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 4U));
    vlTOPp->mac__DOT__x___05Fh142892 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 3U));
    vlTOPp->mac__DOT__x___05Fh142514 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 3U));
    vlTOPp->mac__DOT__x___05Fh142612 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 2U));
    vlTOPp->mac__DOT__x___05Fh142233 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 2U));
    vlTOPp->mac__DOT__x___05Fh142331 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               & vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 1U));
    vlTOPp->mac__DOT__IF_shiftedMantA5890_BIT_0_AND_shiftedMantB5891_ETC___05Fq60 
        = ((1U & (vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                  & vlTOPp->mac__DOT__shiftedMantB___05Fh85891))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh141956 = (1U & ((vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                                               ^ vlTOPp->mac__DOT__shiftedMantB___05Fh85891) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh149317 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05Fq63) 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                                              >> 1U));
    vlTOPp->mac__DOT__y___05Fh42514 = ((IData)(vlTOPp->mac__DOT__x___05Fh42610) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42611));
    vlTOPp->mac__DOT__IF_IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B___05FETC___05F_d1779 
        = ((1U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1772)
                   ? (vlTOPp->mac__DOT__rg_C >> 0x1fU)
                   : (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq61 
                      >> 0x1fU))) ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__add_mant_Result___05Fh148660 
        = (0x1ffffffU & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1772)
                          ? (vlTOPp->mac__DOT__shiftedMantB___05Fh85891 
                             - vlTOPp->mac__DOT__shiftedMantA___05Fh85890)
                          : (vlTOPp->mac__DOT__shiftedMantA___05Fh85890 
                             - vlTOPp->mac__DOT__shiftedMantB___05Fh85891)));
    vlTOPp->mac__DOT__y___05Fh142332 = ((vlTOPp->mac__DOT__IF_shiftedMantA5890_BIT_0_AND_shiftedMantB5891_ETC___05Fq60 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh141956));
    vlTOPp->mac__DOT__y___05Fh149595 = ((IData)(vlTOPp->mac__DOT__y___05Fh149317) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           >> 2U));
    vlTOPp->mac__DOT__y___05Fh42888 = ((IData)(vlTOPp->mac__DOT__y___05Fh42514) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42513));
    vlTOPp->mac__DOT__y___05Fh142234 = ((IData)(vlTOPp->mac__DOT__x___05Fh142331) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh142332));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d2000 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh149595) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh149317) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05Fq63))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_ETC___05Fq64)))));
    vlTOPp->mac__DOT__y___05Fh149872 = ((IData)(vlTOPp->mac__DOT__y___05Fh149595) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           >> 3U));
    vlTOPp->mac__DOT__y___05Fh42791 = ((IData)(vlTOPp->mac__DOT__x___05Fh42887) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42888));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1955 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh142233) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh142234)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh141956) 
                              << 1U) ^ (0xfffffffeU 
                                        & vlTOPp->mac__DOT__IF_shiftedMantA5890_BIT_0_AND_shiftedMantB5891_ETC___05Fq60))) 
                      | (1U & vlTOPp->mac__DOT__IF_shiftedMantA5890_BIT_0_XOR_shiftedMantB5891_ETC___05Fq62)));
    vlTOPp->mac__DOT__y___05Fh142613 = ((IData)(vlTOPp->mac__DOT__y___05Fh142234) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142233));
    vlTOPp->mac__DOT__y___05Fh150149 = ((IData)(vlTOPp->mac__DOT__y___05Fh149872) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           >> 4U));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42790) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42791)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh42513) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh42514)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596)));
    vlTOPp->mac__DOT__y___05Fh43165 = ((IData)(vlTOPp->mac__DOT__y___05Fh42791) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42790));
    vlTOPp->mac__DOT__y___05Fh142515 = ((IData)(vlTOPp->mac__DOT__x___05Fh142612) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh142613));
    vlTOPp->mac__DOT__y___05Fh150426 = ((IData)(vlTOPp->mac__DOT__y___05Fh150149) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           >> 5U));
    vlTOPp->mac__DOT__y___05Fh43068 = ((IData)(vlTOPp->mac__DOT__x___05Fh43164) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43165));
    vlTOPp->mac__DOT__y___05Fh142893 = ((IData)(vlTOPp->mac__DOT__y___05Fh142515) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142514));
    vlTOPp->mac__DOT__y___05Fh150703 = ((IData)(vlTOPp->mac__DOT__y___05Fh150426) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972) 
                                           >> 6U));
    vlTOPp->mac__DOT__y___05Fh43442 = ((IData)(vlTOPp->mac__DOT__y___05Fh43068) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh43067));
    vlTOPp->mac__DOT__y___05Fh142795 = ((IData)(vlTOPp->mac__DOT__x___05Fh142892) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh142893));
    vlTOPp->mac__DOT__add_exp_result___05F_1___05Fh148689 
        = ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh150703) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh150426) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh150149) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972)) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh149872) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d2000)))));
    vlTOPp->mac__DOT__y___05Fh43345 = ((IData)(vlTOPp->mac__DOT__x___05Fh43441) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43442));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1956 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh142794) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh142795)) 
            << 4U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh142514) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh142515)) 
                       << 3U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1955)));
    vlTOPp->mac__DOT__y___05Fh143173 = ((IData)(vlTOPp->mac__DOT__y___05Fh142795) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh142794));
    vlTOPp->mac__DOT__mult_result___05Fh5630 = ((((IData)(vlTOPp->mac__DOT__x___05Fh43344) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh43345)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh43067) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh43068)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597)));
    vlTOPp->mac__DOT__y___05Fh143075 = ((IData)(vlTOPp->mac__DOT__x___05Fh143172) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143173));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599 
        = ((0x80U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5630)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539));
    vlTOPp->mac__DOT__y___05Fh143453 = ((IData)(vlTOPp->mac__DOT__y___05Fh143075) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143074));
    vlTOPp->mac__DOT__x___05Fh47550 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh47647 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh47273 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh47370 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh46996 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh47093 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh46719 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh46816 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh46442 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh46539 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh46164 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh46261 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                   >> 8U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x200U : 0U);
    vlTOPp->mac__DOT__x___05Fh45890 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh143355 = ((IData)(vlTOPp->mac__DOT__x___05Fh143452) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143453));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649 
        = ((0x200U & (((IData)(vlTOPp->mac__DOT__x___05Fh45890) 
                       << 9U) ^ (0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24)))) 
           | ((0x100U & ((0xffffff00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 8U))) | ((0xfeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                                        | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25)))));
    vlTOPp->mac__DOT__y___05Fh46262 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24) 
                                        >> 9U) & (IData)(vlTOPp->mac__DOT__x___05Fh45890));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1957 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh143354) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh143355)) 
            << 6U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh143074) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh143075)) 
                       << 5U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1956)));
    vlTOPp->mac__DOT__y___05Fh143733 = ((IData)(vlTOPp->mac__DOT__y___05Fh143355) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143354));
    vlTOPp->mac__DOT__y___05Fh46165 = ((IData)(vlTOPp->mac__DOT__x___05Fh46261) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46262));
    vlTOPp->mac__DOT__y___05Fh143635 = ((IData)(vlTOPp->mac__DOT__x___05Fh143732) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh143733));
    vlTOPp->mac__DOT__y___05Fh46540 = ((IData)(vlTOPp->mac__DOT__y___05Fh46165) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46164));
    vlTOPp->mac__DOT__y___05Fh144013 = ((IData)(vlTOPp->mac__DOT__y___05Fh143635) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143634));
    vlTOPp->mac__DOT__y___05Fh46443 = ((IData)(vlTOPp->mac__DOT__x___05Fh46539) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46540));
    vlTOPp->mac__DOT__y___05Fh143915 = ((IData)(vlTOPp->mac__DOT__x___05Fh144012) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144013));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh46442) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh46443)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh46164) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh46165)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649)));
    vlTOPp->mac__DOT__y___05Fh46817 = ((IData)(vlTOPp->mac__DOT__y___05Fh46443) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46442));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1958 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh143914) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh143915)) 
            << 8U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh143634) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh143635)) 
                       << 7U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1957)));
    vlTOPp->mac__DOT__y___05Fh144293 = ((IData)(vlTOPp->mac__DOT__y___05Fh143915) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh143914));
    vlTOPp->mac__DOT__y___05Fh46720 = ((IData)(vlTOPp->mac__DOT__x___05Fh46816) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46817));
    vlTOPp->mac__DOT__y___05Fh144195 = ((IData)(vlTOPp->mac__DOT__x___05Fh144292) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144293));
    vlTOPp->mac__DOT__y___05Fh47094 = ((IData)(vlTOPp->mac__DOT__y___05Fh46720) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46719));
    vlTOPp->mac__DOT__y___05Fh144573 = ((IData)(vlTOPp->mac__DOT__y___05Fh144195) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144194));
    vlTOPp->mac__DOT__y___05Fh46997 = ((IData)(vlTOPp->mac__DOT__x___05Fh47093) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47094));
    vlTOPp->mac__DOT__y___05Fh144475 = ((IData)(vlTOPp->mac__DOT__x___05Fh144572) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144573));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh46996) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh46997)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh46719) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh46720)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650)));
    vlTOPp->mac__DOT__y___05Fh47371 = ((IData)(vlTOPp->mac__DOT__y___05Fh46997) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46996));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1959 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh144474) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh144475)) 
            << 0xaU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh144194) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh144195)) 
                         << 9U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1958)));
    vlTOPp->mac__DOT__y___05Fh144853 = ((IData)(vlTOPp->mac__DOT__y___05Fh144475) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144474));
    vlTOPp->mac__DOT__y___05Fh47274 = ((IData)(vlTOPp->mac__DOT__x___05Fh47370) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47371));
    vlTOPp->mac__DOT__y___05Fh144755 = ((IData)(vlTOPp->mac__DOT__x___05Fh144852) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh144853));
    vlTOPp->mac__DOT__y___05Fh47648 = ((IData)(vlTOPp->mac__DOT__y___05Fh47274) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh47273));
    vlTOPp->mac__DOT__y___05Fh145133 = ((IData)(vlTOPp->mac__DOT__y___05Fh144755) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh144754));
    vlTOPp->mac__DOT__y___05Fh47551 = ((IData)(vlTOPp->mac__DOT__x___05Fh47647) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47648));
    vlTOPp->mac__DOT__y___05Fh145035 = ((IData)(vlTOPp->mac__DOT__x___05Fh145132) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145133));
    vlTOPp->mac__DOT__mult_result___05Fh5097 = ((((IData)(vlTOPp->mac__DOT__x___05Fh47550) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh47551)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh47273) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh47274)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651)));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1960 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh145034) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh145035)) 
            << 0xcU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh144754) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh144755)) 
                         << 0xbU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1959)));
    vlTOPp->mac__DOT__y___05Fh145413 = ((IData)(vlTOPp->mac__DOT__y___05Fh145035) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145034));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653 
        = ((0x100U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5097)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599));
    vlTOPp->mac__DOT__y___05Fh145315 = ((IData)(vlTOPp->mac__DOT__x___05Fh145412) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145413));
    vlTOPp->mac__DOT__x___05Fh51751 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh51848 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh51474 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh51571 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh51197 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh51294 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh50920 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh51017 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh50642 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh50739 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                   >> 9U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x400U : 0U);
    vlTOPp->mac__DOT__x___05Fh50368 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh145693 = ((IData)(vlTOPp->mac__DOT__y___05Fh145315) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145314));
    vlTOPp->mac__DOT__y___05Fh50740 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26) 
                                        >> 0xaU) & (IData)(vlTOPp->mac__DOT__x___05Fh50368));
    vlTOPp->mac__DOT__y___05Fh145595 = ((IData)(vlTOPp->mac__DOT__x___05Fh145692) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145693));
    vlTOPp->mac__DOT__y___05Fh50643 = ((IData)(vlTOPp->mac__DOT__x___05Fh50739) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50740));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1961 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh145594) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh145595)) 
            << 0xeU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh145314) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh145315)) 
                         << 0xdU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1960)));
    vlTOPp->mac__DOT__y___05Fh145973 = ((IData)(vlTOPp->mac__DOT__y___05Fh145595) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145594));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh50642) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh50643)) 
            << 0xbU) | ((0x400U & (((IData)(vlTOPp->mac__DOT__x___05Fh50368) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26)))) 
                        | ((0x200U & ((0xfffffe00U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 9U))) | 
                           ((0x1feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                            | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27))))));
    vlTOPp->mac__DOT__y___05Fh51018 = ((IData)(vlTOPp->mac__DOT__y___05Fh50643) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50642));
    vlTOPp->mac__DOT__y___05Fh145875 = ((IData)(vlTOPp->mac__DOT__x___05Fh145972) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh145973));
    vlTOPp->mac__DOT__y___05Fh50921 = ((IData)(vlTOPp->mac__DOT__x___05Fh51017) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51018));
    vlTOPp->mac__DOT__y___05Fh146253 = ((IData)(vlTOPp->mac__DOT__y___05Fh145875) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh145874));
    vlTOPp->mac__DOT__y___05Fh51295 = ((IData)(vlTOPp->mac__DOT__y___05Fh50921) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50920));
    vlTOPp->mac__DOT__y___05Fh146155 = ((IData)(vlTOPp->mac__DOT__x___05Fh146252) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146253));
    vlTOPp->mac__DOT__y___05Fh51198 = ((IData)(vlTOPp->mac__DOT__x___05Fh51294) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51295));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1962 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh146154) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh146155)) 
            << 0x10U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh145874) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh145875)) 
                          << 0xfU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1961)));
    vlTOPp->mac__DOT__y___05Fh146533 = ((IData)(vlTOPp->mac__DOT__y___05Fh146155) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146154));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh51197) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh51198)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh50920) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh50921)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697)));
    vlTOPp->mac__DOT__y___05Fh51572 = ((IData)(vlTOPp->mac__DOT__y___05Fh51198) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh51197));
    vlTOPp->mac__DOT__y___05Fh146435 = ((IData)(vlTOPp->mac__DOT__x___05Fh146532) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146533));
    vlTOPp->mac__DOT__y___05Fh51475 = ((IData)(vlTOPp->mac__DOT__x___05Fh51571) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51572));
    vlTOPp->mac__DOT__y___05Fh146813 = ((IData)(vlTOPp->mac__DOT__y___05Fh146435) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146434));
    vlTOPp->mac__DOT__y___05Fh51849 = ((IData)(vlTOPp->mac__DOT__y___05Fh51475) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh51474));
    vlTOPp->mac__DOT__y___05Fh146715 = ((IData)(vlTOPp->mac__DOT__x___05Fh146812) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh146813));
    vlTOPp->mac__DOT__y___05Fh51752 = ((IData)(vlTOPp->mac__DOT__x___05Fh51848) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51849));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1963 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh146714) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh146715)) 
            << 0x12U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh146434) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh146435)) 
                          << 0x11U) | vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1962));
    vlTOPp->mac__DOT__y___05Fh147093 = ((IData)(vlTOPp->mac__DOT__y___05Fh146715) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146714));
    vlTOPp->mac__DOT__mult_result___05Fh4564 = ((((IData)(vlTOPp->mac__DOT__x___05Fh51751) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh51752)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh51474) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh51475)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698)));
    vlTOPp->mac__DOT__y___05Fh146995 = ((IData)(vlTOPp->mac__DOT__x___05Fh147092) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147093));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700 
        = ((0x200U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4564)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653));
    vlTOPp->mac__DOT__y___05Fh147373 = ((IData)(vlTOPp->mac__DOT__y___05Fh146995) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh146994));
    vlTOPp->mac__DOT__x___05Fh55947 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh56044 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh55670 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh55767 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh55393 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh55490 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh55115 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh55212 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                   >> 0xaU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x800U : 0U);
    vlTOPp->mac__DOT__x___05Fh54841 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh147275 = ((IData)(vlTOPp->mac__DOT__x___05Fh147372) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147373));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738 
        = ((0x800U & (((IData)(vlTOPp->mac__DOT__x___05Fh54841) 
                       << 0xbU) ^ (0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28)))) 
           | ((0x400U & ((0xfffffc00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 0xaU))) | ((0x3feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                                          | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29)))));
    vlTOPp->mac__DOT__y___05Fh55213 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28) 
                                        >> 0xbU) & (IData)(vlTOPp->mac__DOT__x___05Fh54841));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1964 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh147274) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh147275)) 
            << 0x14U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh146994) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh146995)) 
                          << 0x13U) | vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1963));
    vlTOPp->mac__DOT__y___05Fh147653 = ((IData)(vlTOPp->mac__DOT__y___05Fh147275) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147274));
    vlTOPp->mac__DOT__y___05Fh55116 = ((IData)(vlTOPp->mac__DOT__x___05Fh55212) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55213));
    vlTOPp->mac__DOT__y___05Fh147555 = ((IData)(vlTOPp->mac__DOT__x___05Fh147652) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147653));
    vlTOPp->mac__DOT__y___05Fh55491 = ((IData)(vlTOPp->mac__DOT__y___05Fh55116) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55115));
    vlTOPp->mac__DOT__y___05Fh147933 = ((IData)(vlTOPp->mac__DOT__y___05Fh147555) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147554));
    vlTOPp->mac__DOT__y___05Fh55394 = ((IData)(vlTOPp->mac__DOT__x___05Fh55490) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55491));
    vlTOPp->mac__DOT__y___05Fh147835 = ((IData)(vlTOPp->mac__DOT__x___05Fh147932) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh147933));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh55393) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh55394)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh55115) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh55116)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738)));
    vlTOPp->mac__DOT__y___05Fh55768 = ((IData)(vlTOPp->mac__DOT__y___05Fh55394) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55393));
    vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1965 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh147834) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh147835)) 
            << 0x16U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh147554) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh147555)) 
                          << 0x15U) | vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1964));
    vlTOPp->mac__DOT__y___05Fh148213 = ((IData)(vlTOPp->mac__DOT__y___05Fh147835) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh147834));
    vlTOPp->mac__DOT__y___05Fh55671 = ((IData)(vlTOPp->mac__DOT__x___05Fh55767) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55768));
    vlTOPp->mac__DOT__y___05Fh148115 = ((IData)(vlTOPp->mac__DOT__x___05Fh148212) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh148213));
    vlTOPp->mac__DOT__y___05Fh56045 = ((IData)(vlTOPp->mac__DOT__y___05Fh55671) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55670));
    vlTOPp->mac__DOT__y___05Fh148493 = ((IData)(vlTOPp->mac__DOT__y___05Fh148115) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh148114));
    vlTOPp->mac__DOT__y___05Fh55948 = ((IData)(vlTOPp->mac__DOT__x___05Fh56044) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56045));
    vlTOPp->mac__DOT__y___05Fh148395 = ((IData)(vlTOPp->mac__DOT__x___05Fh148492) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh148493));
    vlTOPp->mac__DOT__mult_result___05Fh4031 = ((((IData)(vlTOPp->mac__DOT__x___05Fh55947) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh55948)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh55670) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh55671)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739)));
    vlTOPp->mac__DOT__add_mant_Result___05Fh141148 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh148394) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh148395)) 
            << 0x18U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh148114) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh148115)) 
                          << 0x17U) | vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1965));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741 
        = ((0x400U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4031)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700));
    vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970 
        = (((1U & (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq61 
                   >> 0x1fU)) == (1U & (vlTOPp->mac__DOT__rg_C 
                                        >> 0x1fU)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh141148
            : vlTOPp->mac__DOT__add_mant_Result___05Fh148660);
    vlTOPp->mac__DOT__x___05Fh60138 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh60235 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh59861 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh59958 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh59583 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh59680 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                   >> 0xbU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x1000U : 0U);
    vlTOPp->mac__DOT__x___05Fh59309 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__spliced_bits___05Fh85925 = ((0x1000000U 
                                                   & vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970)
                                                   ? (IData)(vlTOPp->mac__DOT__add_exp_result___05F_1___05Fh148689)
                                                   : (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972));
    vlTOPp->mac__DOT__add_mant_Result___05Fh148688 
        = (0x1fffffeU & (vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970 
                         << 1U));
    vlTOPp->mac__DOT__add_mant_Result___05Fh151014 
        = (0x1fffffcU & (vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970 
                         << 2U));
    vlTOPp->mac__DOT__y___05Fh59681 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30) 
                                        >> 0xcU) & (IData)(vlTOPp->mac__DOT__x___05Fh59309));
    vlTOPp->mac__DOT__IF_IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_ETC___05Fq66 
        = ((0x1000000U & vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970)
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh148688
            : vlTOPp->mac__DOT__add_mant_Result___05Fh151014);
    vlTOPp->mac__DOT__y___05Fh59584 = ((IData)(vlTOPp->mac__DOT__x___05Fh59680) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59681));
    vlTOPp->mac__DOT__rg_out_fp_D_IN = ((0x80000000U 
                                         & vlTOPp->mac__DOT__IF_IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B___05FETC___05F_d1779) 
                                        | (((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh85925) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (vlTOPp->mac__DOT__IF_IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_ETC___05Fq66 
                                                 >> 2U))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh59583) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh59584)) 
            << 0xdU) | ((0x1000U & (((IData)(vlTOPp->mac__DOT__x___05Fh59309) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30)))) 
                        | ((0x800U & ((0xfffff800U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 0xbU))) 
                           | ((0x7feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                              | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31))))));
    vlTOPp->mac__DOT__y___05Fh59959 = ((IData)(vlTOPp->mac__DOT__y___05Fh59584) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh59583));
    vlTOPp->mac__DOT__y___05Fh59862 = ((IData)(vlTOPp->mac__DOT__x___05Fh59958) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59959));
    vlTOPp->mac__DOT__y___05Fh60236 = ((IData)(vlTOPp->mac__DOT__y___05Fh59862) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh59861));
    vlTOPp->mac__DOT__y___05Fh60139 = ((IData)(vlTOPp->mac__DOT__x___05Fh60235) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh60236));
    vlTOPp->mac__DOT__mult_result___05Fh3498 = ((((IData)(vlTOPp->mac__DOT__x___05Fh60138) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh60139)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh59861) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh59862)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775 
        = ((0x800U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh3498)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741));
    vlTOPp->mac__DOT__x___05Fh64324 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh64421 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh64046 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh64143 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                   >> 0xcU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x2000U : 0U);
    vlTOPp->mac__DOT__x___05Fh63772 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801 
        = ((0x2000U & (((IData)(vlTOPp->mac__DOT__x___05Fh63772) 
                        << 0xdU) ^ (0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32)))) 
           | ((0x1000U & ((0xfffff000U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                          ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                             << 0xcU))) | ((0xffeU 
                                            & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                                           | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33)))));
    vlTOPp->mac__DOT__y___05Fh64144 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32) 
                                        >> 0xdU) & (IData)(vlTOPp->mac__DOT__x___05Fh63772));
    vlTOPp->mac__DOT__y___05Fh64047 = ((IData)(vlTOPp->mac__DOT__x___05Fh64143) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh64144));
    vlTOPp->mac__DOT__y___05Fh64422 = ((IData)(vlTOPp->mac__DOT__y___05Fh64047) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh64046));
    vlTOPp->mac__DOT__y___05Fh64325 = ((IData)(vlTOPp->mac__DOT__x___05Fh64421) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh64422));
    vlTOPp->mac__DOT__mult_result___05Fh2965 = ((((IData)(vlTOPp->mac__DOT__x___05Fh64324) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh64325)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh64046) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh64047)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803 
        = ((0x1000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2965)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh68504 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh68601 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                   >> 0xdU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x4000U : 0U);
    vlTOPp->mac__DOT__x___05Fh68230 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh68602 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34) 
                                        >> 0xeU) & (IData)(vlTOPp->mac__DOT__x___05Fh68230));
    vlTOPp->mac__DOT__y___05Fh68505 = ((IData)(vlTOPp->mac__DOT__x___05Fh68601) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh68602));
    vlTOPp->mac__DOT__mult_result___05Fh2432 = ((((IData)(vlTOPp->mac__DOT__x___05Fh68504) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh68505)) 
                                                 << 0xfU) 
                                                | ((0x4000U 
                                                    & (((IData)(vlTOPp->mac__DOT__x___05Fh68230) 
                                                        << 0xeU) 
                                                       ^ 
                                                       (0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34)))) 
                                                   | ((0x2000U 
                                                       & ((0xffffe000U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                           << 0xdU))) 
                                                      | ((0x1ffeU 
                                                          & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                         | (1U 
                                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35))))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824 
        = ((0x2000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2432)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq36 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                   >> 0xeU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x8000U : 0U);
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh72683 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__mult_result___05Fh1899 = ((0x8000U 
                                                 & (((IData)(vlTOPp->mac__DOT__x___05Fh72683) 
                                                     << 0xfU) 
                                                    ^ 
                                                    (0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq36)))) 
                                                | ((0x4000U 
                                                    & ((0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                        << 0xeU))) 
                                                   | ((0x3ffeU 
                                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37)))));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839 
        = ((0x4000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1899)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq38 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839))
            ? 1U : 0U);
    vlTOPp->mac__DOT__mult_result___05Fh1366 = ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                     << 0xfU))) 
                                                | ((0x7ffeU 
                                                    & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq38))));
    vlTOPp->mac__DOT__x___05Fh1216 = ((0x8000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
                                       ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1366)
                                       : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__x___05Fh1216) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->mac__DOT__x___05Fh1216));
    vlTOPp->mac__DOT__x___05Fh85598 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1fU));
    vlTOPp->mac__DOT__x___05Fh85696 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1eU));
    vlTOPp->mac__DOT__x___05Fh85318 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1eU));
    vlTOPp->mac__DOT__x___05Fh85416 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1dU));
    vlTOPp->mac__DOT__x___05Fh85038 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1dU));
    vlTOPp->mac__DOT__x___05Fh85136 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1cU));
    vlTOPp->mac__DOT__x___05Fh84758 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1cU));
    vlTOPp->mac__DOT__x___05Fh84856 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1bU));
    vlTOPp->mac__DOT__x___05Fh84478 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1bU));
    vlTOPp->mac__DOT__x___05Fh84576 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1aU));
    vlTOPp->mac__DOT__x___05Fh84198 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x1aU));
    vlTOPp->mac__DOT__x___05Fh84296 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x19U));
    vlTOPp->mac__DOT__x___05Fh83918 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x19U));
    vlTOPp->mac__DOT__x___05Fh84016 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x18U));
    vlTOPp->mac__DOT__x___05Fh83638 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x18U));
    vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq65 
        = ((1U & (vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                  ^ vlTOPp->mac__DOT__rg_C)) ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh83736 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh83358 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x17U));
    vlTOPp->mac__DOT__x___05Fh83456 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh83078 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x16U));
    vlTOPp->mac__DOT__x___05Fh83176 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh82798 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x15U));
    vlTOPp->mac__DOT__x___05Fh82896 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh82518 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x14U));
    vlTOPp->mac__DOT__x___05Fh82616 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh82238 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x13U));
    vlTOPp->mac__DOT__x___05Fh82336 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh81958 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x12U));
    vlTOPp->mac__DOT__x___05Fh82056 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh81678 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x11U));
    vlTOPp->mac__DOT__x___05Fh81776 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh81398 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0x10U));
    vlTOPp->mac__DOT__x___05Fh81496 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh81118 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xfU));
    vlTOPp->mac__DOT__x___05Fh81216 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh80838 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh80936 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh80558 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh80656 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh80278 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh80376 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh79998 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh80096 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh79718 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh79816 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 9U));
    vlTOPp->mac__DOT__x___05Fh79438 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 9U));
    vlTOPp->mac__DOT__x___05Fh79536 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 8U));
    vlTOPp->mac__DOT__x___05Fh79158 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 8U));
    vlTOPp->mac__DOT__x___05Fh79256 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 7U));
    vlTOPp->mac__DOT__x___05Fh78878 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 7U));
    vlTOPp->mac__DOT__x___05Fh78976 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 6U));
    vlTOPp->mac__DOT__x___05Fh78598 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 6U));
    vlTOPp->mac__DOT__x___05Fh78696 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 5U));
    vlTOPp->mac__DOT__x___05Fh78318 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 5U));
    vlTOPp->mac__DOT__x___05Fh78416 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 4U));
    vlTOPp->mac__DOT__x___05Fh78038 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 4U));
    vlTOPp->mac__DOT__x___05Fh78136 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 3U));
    vlTOPp->mac__DOT__x___05Fh77758 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 3U));
    vlTOPp->mac__DOT__x___05Fh77856 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 2U));
    vlTOPp->mac__DOT__x___05Fh77477 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 2U));
    vlTOPp->mac__DOT__x___05Fh77575 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              & vlTOPp->mac__DOT__rg_C) 
                                             >> 1U));
    vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq39 
        = ((1U & (vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                  & vlTOPp->mac__DOT__rg_C)) ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh77200 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 1U));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1072 
        = ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh77200) 
                   << 1U) ^ (0xfffffffeU & vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq39))) 
           | (1U & vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq65));
    vlTOPp->mac__DOT__y___05Fh77576 = ((vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq39 
                                        >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh77200));
    vlTOPp->mac__DOT__y___05Fh77478 = ((IData)(vlTOPp->mac__DOT__x___05Fh77575) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77576));
    vlTOPp->mac__DOT__y___05Fh77857 = ((IData)(vlTOPp->mac__DOT__y___05Fh77478) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77477));
    vlTOPp->mac__DOT__y___05Fh77759 = ((IData)(vlTOPp->mac__DOT__x___05Fh77856) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77857));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1073 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh77758) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh77759)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh77477) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh77478)) 
                       << 2U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1072)));
    vlTOPp->mac__DOT__y___05Fh78137 = ((IData)(vlTOPp->mac__DOT__y___05Fh77759) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77758));
    vlTOPp->mac__DOT__y___05Fh78039 = ((IData)(vlTOPp->mac__DOT__x___05Fh78136) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78137));
    vlTOPp->mac__DOT__y___05Fh78417 = ((IData)(vlTOPp->mac__DOT__y___05Fh78039) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78038));
    vlTOPp->mac__DOT__y___05Fh78319 = ((IData)(vlTOPp->mac__DOT__x___05Fh78416) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78417));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1074 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh78318) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh78319)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh78038) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh78039)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1073)));
    vlTOPp->mac__DOT__y___05Fh78697 = ((IData)(vlTOPp->mac__DOT__y___05Fh78319) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78318));
    vlTOPp->mac__DOT__y___05Fh78599 = ((IData)(vlTOPp->mac__DOT__x___05Fh78696) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78697));
    vlTOPp->mac__DOT__y___05Fh78977 = ((IData)(vlTOPp->mac__DOT__y___05Fh78599) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78598));
    vlTOPp->mac__DOT__y___05Fh78879 = ((IData)(vlTOPp->mac__DOT__x___05Fh78976) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78977));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1075 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh78878) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh78879)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh78598) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh78599)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1074)));
    vlTOPp->mac__DOT__y___05Fh79257 = ((IData)(vlTOPp->mac__DOT__y___05Fh78879) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78878));
    vlTOPp->mac__DOT__y___05Fh79159 = ((IData)(vlTOPp->mac__DOT__x___05Fh79256) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh79257));
    vlTOPp->mac__DOT__y___05Fh79537 = ((IData)(vlTOPp->mac__DOT__y___05Fh79159) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh79158));
    vlTOPp->mac__DOT__y___05Fh79439 = ((IData)(vlTOPp->mac__DOT__x___05Fh79536) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh79537));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1076 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh79438) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh79439)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh79158) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh79159)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1075)));
    vlTOPp->mac__DOT__y___05Fh79817 = ((IData)(vlTOPp->mac__DOT__y___05Fh79439) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh79438));
    vlTOPp->mac__DOT__y___05Fh79719 = ((IData)(vlTOPp->mac__DOT__x___05Fh79816) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh79817));
    vlTOPp->mac__DOT__y___05Fh80097 = ((IData)(vlTOPp->mac__DOT__y___05Fh79719) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh79718));
    vlTOPp->mac__DOT__y___05Fh79999 = ((IData)(vlTOPp->mac__DOT__x___05Fh80096) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh80097));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1077 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh79998) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh79999)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh79718) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh79719)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1076)));
    vlTOPp->mac__DOT__y___05Fh80377 = ((IData)(vlTOPp->mac__DOT__y___05Fh79999) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh79998));
    vlTOPp->mac__DOT__y___05Fh80279 = ((IData)(vlTOPp->mac__DOT__x___05Fh80376) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh80377));
    vlTOPp->mac__DOT__y___05Fh80657 = ((IData)(vlTOPp->mac__DOT__y___05Fh80279) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh80278));
    vlTOPp->mac__DOT__y___05Fh80559 = ((IData)(vlTOPp->mac__DOT__x___05Fh80656) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh80657));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1078 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh80558) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh80559)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh80278) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh80279)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1077)));
    vlTOPp->mac__DOT__y___05Fh80937 = ((IData)(vlTOPp->mac__DOT__y___05Fh80559) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh80558));
    vlTOPp->mac__DOT__y___05Fh80839 = ((IData)(vlTOPp->mac__DOT__x___05Fh80936) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh80937));
    vlTOPp->mac__DOT__y___05Fh81217 = ((IData)(vlTOPp->mac__DOT__y___05Fh80839) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh80838));
    vlTOPp->mac__DOT__y___05Fh81119 = ((IData)(vlTOPp->mac__DOT__x___05Fh81216) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh81217));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1079 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh81118) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh81119)) 
            << 0xfU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh80838) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh80839)) 
                         << 0xeU) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1078)));
    vlTOPp->mac__DOT__y___05Fh81497 = ((IData)(vlTOPp->mac__DOT__y___05Fh81119) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh81118));
    vlTOPp->mac__DOT__y___05Fh81399 = ((IData)(vlTOPp->mac__DOT__x___05Fh81496) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh81497));
    vlTOPp->mac__DOT__y___05Fh81777 = ((IData)(vlTOPp->mac__DOT__y___05Fh81399) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh81398));
    vlTOPp->mac__DOT__y___05Fh81679 = ((IData)(vlTOPp->mac__DOT__x___05Fh81776) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh81777));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1080 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh81678) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh81679)) 
            << 0x11U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh81398) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh81399)) 
                          << 0x10U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1079)));
    vlTOPp->mac__DOT__y___05Fh82057 = ((IData)(vlTOPp->mac__DOT__y___05Fh81679) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh81678));
    vlTOPp->mac__DOT__y___05Fh81959 = ((IData)(vlTOPp->mac__DOT__x___05Fh82056) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh82057));
    vlTOPp->mac__DOT__y___05Fh82337 = ((IData)(vlTOPp->mac__DOT__y___05Fh81959) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh81958));
    vlTOPp->mac__DOT__y___05Fh82239 = ((IData)(vlTOPp->mac__DOT__x___05Fh82336) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh82337));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1081 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh82238) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh82239)) 
            << 0x13U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh81958) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh81959)) 
                          << 0x12U) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1080));
    vlTOPp->mac__DOT__y___05Fh82617 = ((IData)(vlTOPp->mac__DOT__y___05Fh82239) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh82238));
    vlTOPp->mac__DOT__y___05Fh82519 = ((IData)(vlTOPp->mac__DOT__x___05Fh82616) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh82617));
    vlTOPp->mac__DOT__y___05Fh82897 = ((IData)(vlTOPp->mac__DOT__y___05Fh82519) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh82518));
    vlTOPp->mac__DOT__y___05Fh82799 = ((IData)(vlTOPp->mac__DOT__x___05Fh82896) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh82897));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1082 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh82798) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh82799)) 
            << 0x15U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh82518) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh82519)) 
                          << 0x14U) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1081));
    vlTOPp->mac__DOT__y___05Fh83177 = ((IData)(vlTOPp->mac__DOT__y___05Fh82799) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh82798));
    vlTOPp->mac__DOT__y___05Fh83079 = ((IData)(vlTOPp->mac__DOT__x___05Fh83176) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh83177));
    vlTOPp->mac__DOT__y___05Fh83457 = ((IData)(vlTOPp->mac__DOT__y___05Fh83079) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh83078));
    vlTOPp->mac__DOT__y___05Fh83359 = ((IData)(vlTOPp->mac__DOT__x___05Fh83456) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh83457));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1083 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh83358) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh83359)) 
            << 0x17U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh83078) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh83079)) 
                          << 0x16U) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1082));
    vlTOPp->mac__DOT__y___05Fh83737 = ((IData)(vlTOPp->mac__DOT__y___05Fh83359) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh83358));
    vlTOPp->mac__DOT__y___05Fh83639 = ((IData)(vlTOPp->mac__DOT__x___05Fh83736) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh83737));
    vlTOPp->mac__DOT__y___05Fh84017 = ((IData)(vlTOPp->mac__DOT__y___05Fh83639) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh83638));
    vlTOPp->mac__DOT__y___05Fh83919 = ((IData)(vlTOPp->mac__DOT__x___05Fh84016) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh84017));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1084 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh83918) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh83919)) 
            << 0x19U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh83638) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh83639)) 
                          << 0x18U) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1083));
    vlTOPp->mac__DOT__y___05Fh84297 = ((IData)(vlTOPp->mac__DOT__y___05Fh83919) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh83918));
    vlTOPp->mac__DOT__y___05Fh84199 = ((IData)(vlTOPp->mac__DOT__x___05Fh84296) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh84297));
    vlTOPp->mac__DOT__y___05Fh84577 = ((IData)(vlTOPp->mac__DOT__y___05Fh84199) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh84198));
    vlTOPp->mac__DOT__y___05Fh84479 = ((IData)(vlTOPp->mac__DOT__x___05Fh84576) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh84577));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1085 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh84478) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh84479)) 
            << 0x1bU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh84198) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh84199)) 
                          << 0x1aU) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1084));
    vlTOPp->mac__DOT__y___05Fh84857 = ((IData)(vlTOPp->mac__DOT__y___05Fh84479) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh84478));
    vlTOPp->mac__DOT__y___05Fh84759 = ((IData)(vlTOPp->mac__DOT__x___05Fh84856) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh84857));
    vlTOPp->mac__DOT__y___05Fh85137 = ((IData)(vlTOPp->mac__DOT__y___05Fh84759) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh84758));
    vlTOPp->mac__DOT__y___05Fh85039 = ((IData)(vlTOPp->mac__DOT__x___05Fh85136) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85137));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1086 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh85038) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh85039)) 
            << 0x1dU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh84758) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh84759)) 
                          << 0x1cU) | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1085));
    vlTOPp->mac__DOT__y___05Fh85417 = ((IData)(vlTOPp->mac__DOT__y___05Fh85039) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh85038));
    vlTOPp->mac__DOT__y___05Fh85319 = ((IData)(vlTOPp->mac__DOT__x___05Fh85416) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85417));
    vlTOPp->mac__DOT__y___05Fh85697 = ((IData)(vlTOPp->mac__DOT__y___05Fh85319) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh85318));
    vlTOPp->mac__DOT__y___05Fh85599 = ((IData)(vlTOPp->mac__DOT__x___05Fh85696) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh85697));
    vlTOPp->mac__DOT__rg_out_int_D_IN = ((((IData)(vlTOPp->mac__DOT__x___05Fh85598) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh85599)) 
                                          << 0x1fU) 
                                         | ((((IData)(vlTOPp->mac__DOT__x___05Fh85318) 
                                              ^ (IData)(vlTOPp->mac__DOT__y___05Fh85319)) 
                                             << 0x1eU) 
                                            | vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1086));
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
    mac__DOT__CAN_FIRE_RL_rl_mac = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_A = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_B = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_C = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_get_select = VL_RAND_RESET_I(1);
    mac__DOT__CAN_FIRE_result = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_RL_rl_mac = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_A = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_B = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_C = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_get_select = VL_RAND_RESET_I(1);
    mac__DOT__WILL_FIRE_result = VL_RAND_RESET_I(1);
    mac__DOT__IF_IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B___05FETC___05F_d1779 = VL_RAND_RESET_I(32);
    mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq39 = VL_RAND_RESET_I(32);
    mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq65 = VL_RAND_RESET_I(32);
    mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq61 = VL_RAND_RESET_I(32);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 = VL_RAND_RESET_I(32);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1086 = VL_RAND_RESET_I(30);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1085 = VL_RAND_RESET_I(28);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1084 = VL_RAND_RESET_I(26);
    mac__DOT__IF_IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_ETC___05Fq66 = VL_RAND_RESET_I(25);
    mac__DOT__IF_IF_rg_A_0_BIT_15_773_XOR_rg_B_BIT_15_774_77_ETC___05F_d1970 = VL_RAND_RESET_I(25);
    mac__DOT__IF_shiftedMantA5890_BIT_0_AND_shiftedMantB5891_ETC___05Fq60 = VL_RAND_RESET_I(25);
    mac__DOT__IF_shiftedMantA5890_BIT_0_XOR_shiftedMantB5891_ETC___05Fq62 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh141148 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh148660 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh148688 = VL_RAND_RESET_I(25);
    mac__DOT__add_mant_Result___05Fh151014 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantA___05Fh140853 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantA___05Fh140880 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantA___05Fh85890 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantB___05Fh140854 = VL_RAND_RESET_I(25);
    mac__DOT__shiftedMantB___05Fh85891 = VL_RAND_RESET_I(25);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1083 = VL_RAND_RESET_I(24);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1965 = VL_RAND_RESET_I(23);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1082 = VL_RAND_RESET_I(22);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1964 = VL_RAND_RESET_I(21);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1081 = VL_RAND_RESET_I(20);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1963 = VL_RAND_RESET_I(19);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1080 = VL_RAND_RESET_I(18);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1962 = VL_RAND_RESET_I(17);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq11 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq31 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq33 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq35 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq36 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq37 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq38 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq13 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq15 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq17 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq19 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq21 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq23 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq25 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq27 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq29 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq40 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq41 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq42 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq43 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq44 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq45 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq46 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq47 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq48 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq49 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq50 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq51 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq52 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq53 = VL_RAND_RESET_I(16);
    mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq9 = VL_RAND_RESET_I(16);
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
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1100 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1184 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1260 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1332 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1401 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1466 = VL_RAND_RESET_I(16);
    mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1528 = VL_RAND_RESET_I(16);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1079 = VL_RAND_RESET_I(16);
    mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22 = VL_RAND_RESET_I(16);
    mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3 = VL_RAND_RESET_I(16);
    mac__DOT___theResult___05F___05F_5_snd___05Fh123762 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh123763 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh130849 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh86706 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh87215 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh87724 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh88233 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh88742 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh89251 = VL_RAND_RESET_I(16);
    mac__DOT__mantissa_result___05Fh89760 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh1366 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh1899 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh2432 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh2965 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh3498 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh4031 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh4564 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh5097 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh5630 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh6163 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh6696 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh7229 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh7762 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh8295 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh8828 = VL_RAND_RESET_I(16);
    mac__DOT__mult_result___05Fh9361 = VL_RAND_RESET_I(16);
    mac__DOT__x___05Fh1216 = VL_RAND_RESET_I(16);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1961 = VL_RAND_RESET_I(15);
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
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1182 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1258 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1464 = VL_RAND_RESET_I(14);
    mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1584 = VL_RAND_RESET_I(14);
    mac__DOT__INV_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_T_ETC___05F_d1526 = VL_RAND_RESET_I(14);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1078 = VL_RAND_RESET_I(14);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1960 = VL_RAND_RESET_I(13);
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
    mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1329 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1463 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1525 = VL_RAND_RESET_I(12);
    mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1583 = VL_RAND_RESET_I(12);
    mac__DOT__INV_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_T_ETC___05F_d1398 = VL_RAND_RESET_I(12);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1077 = VL_RAND_RESET_I(12);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1959 = VL_RAND_RESET_I(11);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595 = VL_RAND_RESET_I(10);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1180 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1328 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1397 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1462 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1524 = VL_RAND_RESET_I(10);
    mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1582 = VL_RAND_RESET_I(10);
    mac__DOT__INV_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_T_ETC___05F_d1256 = VL_RAND_RESET_I(10);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1076 = VL_RAND_RESET_I(10);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1958 = VL_RAND_RESET_I(9);
    mac__DOT__IF_INV_theResult___05F___05F_5_snd23762_BIT_9_THEN_2_E_ETC___05Fq57 = VL_RAND_RESET_I(9);
    mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_9_THEN_4_ELSE_0___05Fq54 = VL_RAND_RESET_I(9);
    mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05Fq63 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1741 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1972 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1742 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1760 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05Fq56 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq6 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq4 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1710 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_ETC___05Fq64 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_ETC___05Fq58 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq55 = VL_RAND_RESET_I(8);
    mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq5 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467 = VL_RAND_RESET_I(8);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq2 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq3 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1179 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1255 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1327 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1396 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1461 = VL_RAND_RESET_I(8);
    mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1523 = VL_RAND_RESET_I(8);
    mac__DOT__IF_theResult___05F___05F_5_snd23762_BIT_8_THEN_IF_IF_I_ETC___05Fq59 = VL_RAND_RESET_I(8);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1075 = VL_RAND_RESET_I(8);
    mac__DOT__add_exp_result___05F_1___05Fh148689 = VL_RAND_RESET_I(8);
    mac__DOT__expA___05Fh85884 = VL_RAND_RESET_I(8);
    mac__DOT__expDiff___05Fh140852 = VL_RAND_RESET_I(8);
    mac__DOT__expDiff___05Fh140879 = VL_RAND_RESET_I(8);
    mac__DOT__rg_A_BITS_7_TO_0___05Fq8 = VL_RAND_RESET_I(8);
    mac__DOT__rg_B_BITS_7_TO_0___05Fq7 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh123766 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh123793 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh133507 = VL_RAND_RESET_I(8);
    mac__DOT__spliced_bits___05Fh85925 = VL_RAND_RESET_I(8);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1957 = VL_RAND_RESET_I(7);
    mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1756 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313 = VL_RAND_RESET_I(6);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1178 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1254 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1326 = VL_RAND_RESET_I(6);
    mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1395 = VL_RAND_RESET_I(6);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1074 = VL_RAND_RESET_I(6);
    mac__DOT__rg_A_0_BIT_12_617_XOR_rg_B_BIT_12_618_649_XOR___05FETC___05F_d1704 = VL_RAND_RESET_I(6);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1956 = VL_RAND_RESET_I(5);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d2000 = VL_RAND_RESET_I(4);
    mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1738 = VL_RAND_RESET_I(4);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133 = VL_RAND_RESET_I(4);
    mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226 = VL_RAND_RESET_I(4);
    mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1177 = VL_RAND_RESET_I(4);
    mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1253 = VL_RAND_RESET_I(4);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1073 = VL_RAND_RESET_I(4);
    mac__DOT__rg_A_0_BIT_10_623_XOR_rg_B_BIT_10_624_643_XOR___05FETC___05F_d1703 = VL_RAND_RESET_I(4);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1955 = VL_RAND_RESET_I(3);
    mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1072 = VL_RAND_RESET_I(2);
    mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05F_d1772 = VL_RAND_RESET_I(1);
    mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1745 = VL_RAND_RESET_I(1);
    mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1568 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100016 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100113 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100293 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100390 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100570 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100667 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100847 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh100944 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103671 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh103945 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104042 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104223 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104320 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104500 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104597 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104777 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh104874 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh105054 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh105151 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh105331 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh105428 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108150 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108424 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108521 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108702 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108799 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh108979 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109076 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109256 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109353 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109533 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109630 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109810 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh109907 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112624 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112898 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh112995 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113176 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113273 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113453 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113550 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113730 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh113827 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114007 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114104 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114284 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh114381 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117093 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117367 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117464 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117645 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117742 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh117922 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118019 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118199 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118296 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118476 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118573 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118753 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh118850 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh121557 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh121831 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh121928 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122109 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122206 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122386 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122483 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122663 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122760 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh122940 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh123037 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh123217 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh123314 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh124331 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh124602 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh124698 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh124877 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh124973 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125151 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125247 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125425 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125521 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125699 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125795 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh125973 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh126069 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh126624 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh126896 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh127171 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh127445 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh127719 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh127993 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh128267 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh128919 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh129191 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh129466 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh129740 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh130014 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh130288 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh130562 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh141956 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142233 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142331 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142514 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142612 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142794 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh142892 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143074 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143172 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143354 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143452 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143634 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143732 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh143914 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144012 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14404 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144194 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144292 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144474 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144572 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144754 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh144852 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145132 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145314 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145412 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145594 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145692 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145874 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh145972 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146154 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146252 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146434 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146532 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146714 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14678 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146812 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh146994 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147092 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147274 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147372 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147554 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147652 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14775 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147834 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh147932 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148114 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148212 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148394 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh148492 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh14956 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15053 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15233 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15330 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15510 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15607 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15787 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh15884 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16064 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16161 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16341 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16438 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16618 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16715 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16895 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh16992 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17172 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17269 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17449 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17546 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17726 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh17823 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18003 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18100 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh18917 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19191 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19288 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19469 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19566 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19746 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh19843 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20023 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20120 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20300 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20397 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20577 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20674 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20854 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh20951 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21131 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21228 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21408 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21505 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21685 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21782 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh21962 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22059 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22239 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh22336 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23425 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23699 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23796 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh23977 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24074 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24254 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24351 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24531 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24628 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24808 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh24905 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25085 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25182 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25362 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25459 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25639 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25736 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh25916 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh26013 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh26193 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh26290 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh26470 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh26567 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh27928 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28202 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28299 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28480 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28577 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28757 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh28854 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29034 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29131 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29311 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29408 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29588 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29685 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29865 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh29962 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30142 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30239 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30419 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30516 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30696 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh30793 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32426 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32700 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32797 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh32978 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33075 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33255 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33352 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33532 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33629 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33809 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh33906 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34086 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34183 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34363 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34460 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34640 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34737 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh34917 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh35014 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh36919 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37193 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37290 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37471 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37568 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37748 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh37845 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38025 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38122 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38302 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38399 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38579 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38676 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh38953 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh39133 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh39230 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41407 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41681 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41778 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh41959 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42056 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42236 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42333 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42513 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42610 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42790 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh42887 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh43067 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh43164 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh43344 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh43441 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh45890 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46164 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46261 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46442 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46539 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46719 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46816 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh46996 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh47093 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh47273 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh47370 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh47550 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh47647 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50368 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50642 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50739 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh50920 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51017 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51197 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51294 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51474 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51571 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51751 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh51848 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh54841 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55115 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55212 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55393 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55490 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55670 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55767 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh55947 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh56044 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59309 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59583 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59680 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59861 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh59958 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh60138 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh60235 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh63772 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh64046 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh64143 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh64324 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh64421 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh68230 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh68504 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh68601 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh72683 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh77200 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh77477 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh77575 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh77758 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh77856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78038 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78136 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78318 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78416 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78598 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78696 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78878 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh78976 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79158 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79256 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79438 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79536 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79718 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79816 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh79998 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80096 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80278 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80376 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80558 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80656 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80838 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh80936 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81118 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81216 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81398 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81496 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81678 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81776 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh81958 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82056 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82238 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82336 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82518 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82616 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82798 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh82896 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83078 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83176 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83358 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83456 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83638 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83736 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh83918 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84016 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84198 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84296 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84478 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84576 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84758 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh84856 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85038 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85136 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85318 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85416 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85598 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh85696 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94698 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh94972 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95069 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95250 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95347 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95527 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95624 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95804 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh95901 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh96081 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh96178 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh96358 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh96455 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99187 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99461 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99558 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99739 = VL_RAND_RESET_I(1);
    mac__DOT__x___05Fh99836 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100017 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100114 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100294 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100391 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100571 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100668 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100848 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh100945 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101125 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101222 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101402 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101679 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh101956 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh102233 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh102510 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh103946 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104043 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104224 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104321 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104501 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104598 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104778 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh104875 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105055 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105152 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105332 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105429 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105609 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105706 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh105886 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh106163 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh106440 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh106717 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108425 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108522 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108703 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108800 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh108980 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109077 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109257 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109354 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109534 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109631 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109811 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh109908 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh110088 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh110185 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh110365 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh110642 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh110919 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112899 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh112996 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113177 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113274 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113454 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113551 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113731 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh113828 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114008 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114105 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114285 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114382 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114562 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114659 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh114839 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh115116 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117368 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117465 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117646 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117743 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh117923 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118020 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118200 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118297 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118477 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118574 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118754 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh118851 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh119031 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh119128 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh119308 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh121832 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh121929 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122110 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122207 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122387 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122484 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122664 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122761 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh122941 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123038 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123218 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123315 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123495 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh123592 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124603 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124699 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124878 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh124974 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125152 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125248 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125426 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125522 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125700 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125796 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh125974 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh126070 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh126897 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh127172 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh127446 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh127720 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh127994 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh128268 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh129192 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh129467 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh129741 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh130015 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh130289 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh130563 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh131875 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132150 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132424 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132698 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh132972 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134192 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134467 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh134741 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135015 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135289 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh135563 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142234 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142332 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142515 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142613 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142795 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh142893 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143075 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143173 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143355 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143453 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143635 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143733 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh143915 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144013 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144195 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144293 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144475 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144573 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144755 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh144853 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145133 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145315 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145413 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145595 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145693 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145875 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh145973 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146155 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146253 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146435 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146533 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146715 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14679 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146813 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh146995 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147093 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147275 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147373 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147555 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147653 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14776 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147835 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh147933 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148115 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148213 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148395 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh148493 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh149317 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh14957 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh149595 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh149872 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150149 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150426 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15054 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh150703 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15234 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15331 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15511 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15608 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15788 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh15885 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16065 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16162 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16342 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16439 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16619 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16716 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16896 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh16993 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17173 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17270 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17450 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17547 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17727 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh17824 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18004 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh18101 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19192 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19289 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19470 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19567 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19747 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh19844 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20024 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20121 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20301 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20398 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20578 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20675 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20855 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh20952 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21132 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21229 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21409 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21506 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21686 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21783 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh21963 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh22060 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh22240 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh22337 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23700 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23797 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh23978 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24075 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24255 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24352 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24532 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24629 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24809 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh24906 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25086 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25183 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25363 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25460 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25640 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25737 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh25917 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh26014 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh26194 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh26291 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh26471 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh26568 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28203 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28300 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28481 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28578 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28758 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh28855 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29035 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29132 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29312 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29409 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29589 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29686 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29866 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh29963 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30143 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30240 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30420 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30517 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30697 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh30794 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32701 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32798 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh32979 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33076 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33256 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33353 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33533 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33630 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33810 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh33907 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34087 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34184 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34364 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34461 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34641 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34738 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh34918 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh35015 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37194 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37291 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37472 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37569 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37749 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh37846 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38026 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38123 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38303 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38400 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38580 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38677 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh38954 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh39134 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh39231 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41682 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41779 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh41960 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42057 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42237 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42334 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42514 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42611 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42791 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh42888 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh43068 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh43165 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh43345 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh43442 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46165 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46262 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46443 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46540 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46720 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46817 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh46997 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh47094 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh47274 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh47371 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh47551 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh47648 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50643 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50740 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh50921 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51018 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51198 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51295 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51475 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51572 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51752 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh51849 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55116 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55213 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55394 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55491 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55671 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55768 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh55948 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh56045 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59584 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59681 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59862 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh59959 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh60139 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh60236 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh64047 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh64144 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh64325 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh64422 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh68505 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh68602 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh77478 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh77576 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh77759 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh77857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78039 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78137 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78319 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78417 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78599 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78697 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78879 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh78977 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79159 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79257 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79439 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79537 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79719 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79817 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh79999 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80097 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80279 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80377 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80559 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80657 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80839 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh80937 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81119 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81217 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81399 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81497 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81679 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81777 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh81959 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82057 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82239 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82337 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82519 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82617 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82799 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh82897 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83079 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83177 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83359 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83457 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83639 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83737 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh83919 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84017 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84199 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84297 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84479 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84577 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84759 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh84857 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85039 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85137 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85319 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85417 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85599 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh85697 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh94973 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95070 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95251 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95348 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95528 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95625 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95805 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh95902 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96082 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96179 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96359 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96456 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96636 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96733 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh96913 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh97190 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh97467 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh97744 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh98021 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh98298 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99462 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99559 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99740 = VL_RAND_RESET_I(1);
    mac__DOT__y___05Fh99837 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
