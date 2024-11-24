// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Downloads/mult_accum1/verilog/mac.v", 44, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/shakti/Downloads/mult_accum1/verilog/mac.v", 44, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_out_fp_EN) {
            vlTOPp->mac__DOT__rg_out_fp = vlTOPp->mac__DOT__rg_out_fp_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_out_fp = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_select_EN) {
            vlTOPp->mac__DOT__rg_select = vlTOPp->mac__DOT__rg_select_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_select = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_out_int_EN) {
            vlTOPp->mac__DOT__rg_out_int = vlTOPp->mac__DOT__rg_out_int_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_out_int = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_C_EN) {
            vlTOPp->mac__DOT__rg_C = vlTOPp->mac__DOT__rg_C_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_C = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_B_EN) {
            vlTOPp->mac__DOT__rg_B = vlTOPp->mac__DOT__rg_B_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_B = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mac__DOT__rg_A_EN) {
            vlTOPp->mac__DOT__rg_A = vlTOPp->mac__DOT__rg_A_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_A = 0U;
    }
    vlTOPp->mac__DOT__result = ((IData)(vlTOPp->mac__DOT__rg_select)
                                 ? vlTOPp->mac__DOT__rg_out_fp
                                 : vlTOPp->mac__DOT__rg_out_int);
    vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq6 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_B));
    vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq48 
        = ((0x8000U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                       ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__x___05Fh433510 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh433606 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh433236 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh433332 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh432962 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh433058 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh432688 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh432784 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq2 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh432414 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh432510 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh432139 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh432235 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq1 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     & (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh431868 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__mantissa_result___05Fh95803 = 
        (0x8000000000ULL | ((QData)((IData)((0x7fU 
                                             & (IData)(vlTOPp->mac__DOT__rg_A)))) 
                            << 0x20U));
    vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq7 = (0xffU 
                                                  & (IData)(vlTOPp->mac__DOT__rg_A));
    vlTOPp->result = vlTOPp->mac__DOT__result;
    vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq6) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_B_BITS_7_TO_0___05Fq6));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq2))) {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq4 = 0U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq3 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq4 = 1U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq3 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh434161 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh431868) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq1) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh432236 = (((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq1) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh431868));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh95803
            : 0ULL);
    vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22 
        = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq7) 
                                         >> 7U)))) 
                       << 8U)) | (IData)(vlTOPp->mac__DOT__rg_A_BITS_7_TO_0___05Fq7));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq4))) {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq45 = 0U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq5 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq45 = 1U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq5 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh436456 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh434161) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq3) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh434434 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq3) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh434161));
    vlTOPp->mac__DOT__y___05Fh432140 = ((IData)(vlTOPp->mac__DOT__x___05Fh432235) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh432236));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq39 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh349254 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x21U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh351193 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh351290 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh350916 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh351013 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh350639 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh350736 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh350362 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh350459 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh350085 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh350182 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x23U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh349808 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x23U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh349905 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x22U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh349531 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x22U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh349532 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x21U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq8 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22))
            ? 1U : 0U);
    vlTOPp->mac__DOT__y___05Fh436729 = (((IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq5) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh436456));
    vlTOPp->mac__DOT__x___05Fh434433 = ((IData)(vlTOPp->mac__DOT__x___05Fh432139) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh432140));
    vlTOPp->mac__DOT__y___05Fh432511 = ((IData)(vlTOPp->mac__DOT__y___05Fh432140) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh432139));
    vlTOPp->mac__DOT__y___05Fh349906 = ((IData)(vlTOPp->mac__DOT__y___05Fh349532) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh349531));
    vlTOPp->mac__DOT__mult_result___05Fh9361 = ((0xfffeU 
                                                 & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)) 
                                                | (1U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_A_0_BITS_7_TO_0_1_2_BIT_0_THEN_1_EL_ETC___05Fq8)));
    vlTOPp->mac__DOT__x___05Fh436728 = ((IData)(vlTOPp->mac__DOT__x___05Fh434433) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh434434));
    vlTOPp->mac__DOT__y___05Fh434709 = ((IData)(vlTOPp->mac__DOT__y___05Fh434434) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh434433));
    vlTOPp->mac__DOT__y___05Fh432415 = ((IData)(vlTOPp->mac__DOT__x___05Fh432510) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh432511));
    vlTOPp->mac__DOT__y___05Fh349809 = ((IData)(vlTOPp->mac__DOT__x___05Fh349905) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh349906));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28 
        = ((1U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh9361)
            : 0U);
    vlTOPp->mac__DOT__y___05Fh437004 = ((IData)(vlTOPp->mac__DOT__y___05Fh436729) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh436728));
    vlTOPp->mac__DOT__x___05Fh434708 = ((IData)(vlTOPp->mac__DOT__x___05Fh432414) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh432415));
    vlTOPp->mac__DOT__y___05Fh432785 = ((IData)(vlTOPp->mac__DOT__y___05Fh432415) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh432414));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1174 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh349808) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh349809)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh349531) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh349532)))) 
                          << 0x22U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh349254)) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                          >> 1U))) 
                                         << 1U) | (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_ETC___05Fq39))))))));
    vlTOPp->mac__DOT__y___05Fh350183 = ((IData)(vlTOPp->mac__DOT__y___05Fh349809) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh349808));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq9 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh14404 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__x___05Fh437003 = ((IData)(vlTOPp->mac__DOT__x___05Fh434708) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh434709));
    vlTOPp->mac__DOT__y___05Fh434983 = ((IData)(vlTOPp->mac__DOT__y___05Fh434709) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh434708));
    vlTOPp->mac__DOT__y___05Fh432689 = ((IData)(vlTOPp->mac__DOT__x___05Fh432784) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh432785));
    vlTOPp->mac__DOT__y___05Fh350086 = ((IData)(vlTOPp->mac__DOT__x___05Fh350182) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh350183));
    vlTOPp->mac__DOT__y___05Fh14776 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq9) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh14404));
    vlTOPp->mac__DOT__rg_A_0_BIT_10_566_XOR_rg_B_BIT_10_567_586_XOR___05FETC___05F_d1646 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh437003) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh437004)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh436728) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh436729)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh436456) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq5)))) 
                                 | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq45)))));
    vlTOPp->mac__DOT__y___05Fh437278 = ((IData)(vlTOPp->mac__DOT__y___05Fh437004) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437003));
    vlTOPp->mac__DOT__x___05Fh434982 = ((IData)(vlTOPp->mac__DOT__x___05Fh432688) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh432689));
    vlTOPp->mac__DOT__y___05Fh433059 = ((IData)(vlTOPp->mac__DOT__y___05Fh432689) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh432688));
    vlTOPp->mac__DOT__y___05Fh350460 = ((IData)(vlTOPp->mac__DOT__y___05Fh350086) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh350085));
    vlTOPp->mac__DOT__y___05Fh14679 = ((IData)(vlTOPp->mac__DOT__x___05Fh14775) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh14776));
    vlTOPp->mac__DOT__x___05Fh437277 = ((IData)(vlTOPp->mac__DOT__x___05Fh434982) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh434983));
    vlTOPp->mac__DOT__y___05Fh435257 = ((IData)(vlTOPp->mac__DOT__y___05Fh434983) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh434982));
    vlTOPp->mac__DOT__y___05Fh432963 = ((IData)(vlTOPp->mac__DOT__x___05Fh433058) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh433059));
    vlTOPp->mac__DOT__y___05Fh350363 = ((IData)(vlTOPp->mac__DOT__x___05Fh350459) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh350460));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh14678) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh14679)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh14404) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq9)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT___05FETC___05Fq10)))));
    vlTOPp->mac__DOT__y___05Fh15054 = ((IData)(vlTOPp->mac__DOT__y___05Fh14679) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14678));
    vlTOPp->mac__DOT__y___05Fh437552 = ((IData)(vlTOPp->mac__DOT__y___05Fh437278) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437277));
    vlTOPp->mac__DOT__x___05Fh435256 = ((IData)(vlTOPp->mac__DOT__x___05Fh432962) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh432963));
    vlTOPp->mac__DOT__y___05Fh433333 = ((IData)(vlTOPp->mac__DOT__y___05Fh432963) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh432962));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1175 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh350362) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh350363)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh350085) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh350086)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1174));
    vlTOPp->mac__DOT__y___05Fh350737 = ((IData)(vlTOPp->mac__DOT__y___05Fh350363) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh350362));
    vlTOPp->mac__DOT__y___05Fh14957 = ((IData)(vlTOPp->mac__DOT__x___05Fh15053) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15054));
    vlTOPp->mac__DOT__x___05Fh437551 = ((IData)(vlTOPp->mac__DOT__x___05Fh435256) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh435257));
    vlTOPp->mac__DOT__y___05Fh435531 = ((IData)(vlTOPp->mac__DOT__y___05Fh435257) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh435256));
    vlTOPp->mac__DOT__y___05Fh433237 = ((IData)(vlTOPp->mac__DOT__x___05Fh433332) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh433333));
    vlTOPp->mac__DOT__y___05Fh350640 = ((IData)(vlTOPp->mac__DOT__x___05Fh350736) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh350737));
    vlTOPp->mac__DOT__y___05Fh15331 = ((IData)(vlTOPp->mac__DOT__y___05Fh14957) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh14956));
    vlTOPp->mac__DOT__rg_A_0_BIT_12_560_XOR_rg_B_BIT_12_561_592_XOR___05FETC___05F_d1647 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh437551) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh437552)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh437277) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh437278)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_10_566_XOR_rg_B_BIT_10_567_586_XOR___05FETC___05F_d1646)));
    vlTOPp->mac__DOT__y___05Fh437826 = ((IData)(vlTOPp->mac__DOT__y___05Fh437552) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437551));
    vlTOPp->mac__DOT__x___05Fh435530 = ((IData)(vlTOPp->mac__DOT__x___05Fh433236) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh433237));
    vlTOPp->mac__DOT__y___05Fh433607 = ((IData)(vlTOPp->mac__DOT__y___05Fh433237) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh433236));
    vlTOPp->mac__DOT__y___05Fh351014 = ((IData)(vlTOPp->mac__DOT__y___05Fh350640) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh350639));
    vlTOPp->mac__DOT__y___05Fh15234 = ((IData)(vlTOPp->mac__DOT__x___05Fh15330) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15331));
    vlTOPp->mac__DOT__x___05Fh437825 = ((IData)(vlTOPp->mac__DOT__x___05Fh435530) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh435531));
    vlTOPp->mac__DOT__y___05Fh435805 = ((IData)(vlTOPp->mac__DOT__y___05Fh435531) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh435530));
    vlTOPp->mac__DOT__y___05Fh433511 = ((IData)(vlTOPp->mac__DOT__x___05Fh433606) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh433607));
    vlTOPp->mac__DOT__y___05Fh350917 = ((IData)(vlTOPp->mac__DOT__x___05Fh351013) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh351014));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh15233) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh15234)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh14956) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh14957)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d133)));
    vlTOPp->mac__DOT__y___05Fh15608 = ((IData)(vlTOPp->mac__DOT__y___05Fh15234) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15233));
    vlTOPp->mac__DOT__y___05Fh438100 = ((IData)(vlTOPp->mac__DOT__y___05Fh437826) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437825));
    vlTOPp->mac__DOT__x___05Fh435804 = (1U & (~ ((IData)(vlTOPp->mac__DOT__x___05Fh433510) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh433511))));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1176 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh350916) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh350917)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh350639) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh350640)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1175));
    vlTOPp->mac__DOT__y___05Fh351291 = ((IData)(vlTOPp->mac__DOT__y___05Fh350917) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh350916));
    vlTOPp->mac__DOT__y___05Fh15511 = ((IData)(vlTOPp->mac__DOT__x___05Fh15607) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15608));
    vlTOPp->mac__DOT__x___05Fh438099 = ((IData)(vlTOPp->mac__DOT__x___05Fh435804) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh435805));
    vlTOPp->mac__DOT__y___05Fh351194 = ((IData)(vlTOPp->mac__DOT__x___05Fh351290) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh351291));
    vlTOPp->mac__DOT__y___05Fh15885 = ((IData)(vlTOPp->mac__DOT__y___05Fh15511) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15510));
    vlTOPp->mac__DOT__spliced_bits___05Fh431305 = (
                                                   (((IData)(vlTOPp->mac__DOT__x___05Fh438099) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh438100)) 
                                                    << 7U) 
                                                   | ((((IData)(vlTOPp->mac__DOT__x___05Fh437825) 
                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh437826)) 
                                                       << 6U) 
                                                      | (IData)(vlTOPp->mac__DOT__rg_A_0_BIT_12_560_XOR_rg_B_BIT_12_561_592_XOR___05FETC___05F_d1647)));
    vlTOPp->mac__DOT__spliced_bits___05Fh431332 = (
                                                   ((IData)(vlTOPp->mac__DOT__x___05Fh438099) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->mac__DOT__x___05Fh437825) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->mac__DOT__x___05Fh437551) 
                                                          << 5U) 
                                                         | (((IData)(vlTOPp->mac__DOT__x___05Fh437277) 
                                                             << 4U) 
                                                            | (((IData)(vlTOPp->mac__DOT__x___05Fh437003) 
                                                                << 3U) 
                                                               | (((IData)(vlTOPp->mac__DOT__x___05Fh436728) 
                                                                   << 2U) 
                                                                  | (((IData)(vlTOPp->mac__DOT__x___05Fh436456) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq4)))))))));
    vlTOPp->mac__DOT__y___05Fh351568 = ((IData)(vlTOPp->mac__DOT__y___05Fh351194) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh351193));
    vlTOPp->mac__DOT__y___05Fh15788 = ((IData)(vlTOPp->mac__DOT__x___05Fh15884) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh15885));
    vlTOPp->mac__DOT__y___05Fh351471 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                       >> 0x28U)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh351568)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh15787) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh15788)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh15510) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh15511)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d134)));
    vlTOPp->mac__DOT__y___05Fh16162 = ((IData)(vlTOPp->mac__DOT__y___05Fh15788) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh15787));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1177 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh351471))))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh351193) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh351194)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1176));
    vlTOPp->mac__DOT__y___05Fh351748 = ((IData)(vlTOPp->mac__DOT__y___05Fh351471) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x29U)));
    vlTOPp->mac__DOT__y___05Fh16065 = ((IData)(vlTOPp->mac__DOT__x___05Fh16161) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16162));
    vlTOPp->mac__DOT__y___05Fh352025 = ((IData)(vlTOPp->mac__DOT__y___05Fh351748) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x2aU)));
    vlTOPp->mac__DOT__y___05Fh16439 = ((IData)(vlTOPp->mac__DOT__y___05Fh16065) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16064));
    vlTOPp->mac__DOT__y___05Fh352302 = ((IData)(vlTOPp->mac__DOT__y___05Fh352025) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__y___05Fh16342 = ((IData)(vlTOPp->mac__DOT__x___05Fh16438) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16439));
    vlTOPp->mac__DOT__y___05Fh352579 = ((IData)(vlTOPp->mac__DOT__y___05Fh352302) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16341) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16342)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh16064) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh16065)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d135)));
    vlTOPp->mac__DOT__y___05Fh16716 = ((IData)(vlTOPp->mac__DOT__y___05Fh16342) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16341));
    vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1179 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh352579))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh352302))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh352025))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh351748))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1177))));
    vlTOPp->mac__DOT__y___05Fh352856 = ((IData)(vlTOPp->mac__DOT__y___05Fh352579) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__y___05Fh16619 = ((IData)(vlTOPp->mac__DOT__x___05Fh16715) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16716));
    vlTOPp->mac__DOT__y___05Fh353133 = ((IData)(vlTOPp->mac__DOT__y___05Fh352856) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh16993 = ((IData)(vlTOPp->mac__DOT__y___05Fh16619) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16618));
    vlTOPp->mac__DOT__mantissa_result___05Fh94430 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh353133))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh352856))))) 
                        << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1179));
    vlTOPp->mac__DOT__y___05Fh16896 = ((IData)(vlTOPp->mac__DOT__x___05Fh16992) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh16993));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
        = ((2U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh94430
            : vlTOPp->mac__DOT__IF_rg_B_BIT_0_094_THEN_1_CONCAT_rg_A_0_BITS_6___05FETC___05F_d1097);
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh16895) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh16896)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh16618) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh16619)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d136)));
    vlTOPp->mac__DOT__y___05Fh17270 = ((IData)(vlTOPp->mac__DOT__y___05Fh16896) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh16895));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq40 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh362527 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x22U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh364466 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh364563 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh364189 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh364286 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh363912 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh364009 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh363635 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh363732 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh363358 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh363455 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh363081 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh363178 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x23U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh362804 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x23U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh362805 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x22U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh17173 = ((IData)(vlTOPp->mac__DOT__x___05Fh17269) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17270));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1248 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh362804) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh362805)))) 
            << 0x23U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh362527)) 
                          << 0x22U) | ((0x3fffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_TH_ETC___05Fq40)))))));
    vlTOPp->mac__DOT__y___05Fh363179 = ((IData)(vlTOPp->mac__DOT__y___05Fh362805) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh362804));
    vlTOPp->mac__DOT__y___05Fh17547 = ((IData)(vlTOPp->mac__DOT__y___05Fh17173) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17172));
    vlTOPp->mac__DOT__y___05Fh363082 = ((IData)(vlTOPp->mac__DOT__x___05Fh363178) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh363179));
    vlTOPp->mac__DOT__y___05Fh17450 = ((IData)(vlTOPp->mac__DOT__x___05Fh17546) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17547));
    vlTOPp->mac__DOT__y___05Fh363456 = ((IData)(vlTOPp->mac__DOT__y___05Fh363082) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh363081));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh17449) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh17450)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh17172) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh17173)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d137)));
    vlTOPp->mac__DOT__y___05Fh17824 = ((IData)(vlTOPp->mac__DOT__y___05Fh17450) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17449));
    vlTOPp->mac__DOT__y___05Fh363359 = ((IData)(vlTOPp->mac__DOT__x___05Fh363455) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh363456));
    vlTOPp->mac__DOT__y___05Fh17727 = ((IData)(vlTOPp->mac__DOT__x___05Fh17823) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh17824));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1249 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh363358) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh363359)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh363081) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh363082)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1248));
    vlTOPp->mac__DOT__y___05Fh363733 = ((IData)(vlTOPp->mac__DOT__y___05Fh363359) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh363358));
    vlTOPp->mac__DOT__y___05Fh18101 = ((IData)(vlTOPp->mac__DOT__y___05Fh17727) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh17726));
    vlTOPp->mac__DOT__y___05Fh363636 = ((IData)(vlTOPp->mac__DOT__x___05Fh363732) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh363733));
    vlTOPp->mac__DOT__y___05Fh18004 = ((IData)(vlTOPp->mac__DOT__x___05Fh18100) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh18101));
    vlTOPp->mac__DOT__y___05Fh364010 = ((IData)(vlTOPp->mac__DOT__y___05Fh363636) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh363635));
    vlTOPp->mac__DOT__mult_result___05Fh8828 = ((((IData)(vlTOPp->mac__DOT__x___05Fh18003) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh18004)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh17726) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh17727)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d138)));
    vlTOPp->mac__DOT__y___05Fh363913 = ((IData)(vlTOPp->mac__DOT__x___05Fh364009) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh364010));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140 
        = ((2U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8828)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_0_9_THEN_SEXT_rg___05FETC___05F_d28));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1250 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh363912) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh363913)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh363635) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh363636)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1249));
    vlTOPp->mac__DOT__y___05Fh364287 = ((IData)(vlTOPp->mac__DOT__y___05Fh363913) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh363912));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq11 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh18917 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh364190 = ((IData)(vlTOPp->mac__DOT__x___05Fh364286) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh364287));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh18917) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq11)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                     ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq12)))));
    vlTOPp->mac__DOT__y___05Fh19289 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SE_ETC___05Fq11) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh18917));
    vlTOPp->mac__DOT__y___05Fh364564 = ((IData)(vlTOPp->mac__DOT__y___05Fh364190) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh364189));
    vlTOPp->mac__DOT__y___05Fh19192 = ((IData)(vlTOPp->mac__DOT__x___05Fh19288) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19289));
    vlTOPp->mac__DOT__y___05Fh364467 = ((IData)(vlTOPp->mac__DOT__x___05Fh364563) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh364564));
    vlTOPp->mac__DOT__y___05Fh19567 = ((IData)(vlTOPp->mac__DOT__y___05Fh19192) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19191));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_T_ETC___05F_d1251 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh364466) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh364467)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh364189) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh364190)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1250));
    vlTOPp->mac__DOT__y___05Fh364841 = ((IData)(vlTOPp->mac__DOT__y___05Fh364467) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh364466));
    vlTOPp->mac__DOT__y___05Fh19470 = ((IData)(vlTOPp->mac__DOT__x___05Fh19566) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19567));
    vlTOPp->mac__DOT__y___05Fh364744 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                       >> 0x29U)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh364841)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh19469) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh19470)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh19191) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh19192)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d226)));
    vlTOPp->mac__DOT__y___05Fh19844 = ((IData)(vlTOPp->mac__DOT__y___05Fh19470) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19469));
    vlTOPp->mac__DOT__y___05Fh365021 = ((IData)(vlTOPp->mac__DOT__y___05Fh364744) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                   >> 0x2aU)));
    vlTOPp->mac__DOT__y___05Fh19747 = ((IData)(vlTOPp->mac__DOT__x___05Fh19843) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh19844));
    vlTOPp->mac__DOT__y___05Fh365298 = ((IData)(vlTOPp->mac__DOT__y___05Fh365021) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__y___05Fh20121 = ((IData)(vlTOPp->mac__DOT__y___05Fh19747) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh19746));
    vlTOPp->mac__DOT__y___05Fh365575 = ((IData)(vlTOPp->mac__DOT__y___05Fh365298) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh20024 = ((IData)(vlTOPp->mac__DOT__x___05Fh20120) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20121));
    vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1253 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh365575))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh365298))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh365021))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh364744))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mac__DOT__INV_IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_T_ETC___05F_d1251))));
    vlTOPp->mac__DOT__y___05Fh365852 = ((IData)(vlTOPp->mac__DOT__y___05Fh365575) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20023) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20024)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh19746) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh19747)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d227)));
    vlTOPp->mac__DOT__y___05Fh20398 = ((IData)(vlTOPp->mac__DOT__y___05Fh20024) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20023));
    vlTOPp->mac__DOT__y___05Fh366129 = ((IData)(vlTOPp->mac__DOT__y___05Fh365852) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh20301 = ((IData)(vlTOPp->mac__DOT__x___05Fh20397) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20398));
    vlTOPp->mac__DOT__mantissa_result___05Fh93057 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh366129))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh365852))))) 
                        << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1253));
    vlTOPp->mac__DOT__y___05Fh20675 = ((IData)(vlTOPp->mac__DOT__y___05Fh20301) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20300));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
        = ((4U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh93057
            : vlTOPp->mac__DOT__IF_rg_B_BIT_1_093_THEN_IF_rg_B_BIT_0_094_THEN___05FETC___05F_d1181);
    vlTOPp->mac__DOT__y___05Fh20578 = ((IData)(vlTOPp->mac__DOT__x___05Fh20674) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20675));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq41 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh375795 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x23U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh377734 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh377831 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh377457 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh377554 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh377180 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh377277 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh376903 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh377000 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh376626 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh376723 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh376349 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh376446 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh376072 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh376073 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x23U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh20577) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh20578)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20300) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh20301)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d228)));
    vlTOPp->mac__DOT__y___05Fh20952 = ((IData)(vlTOPp->mac__DOT__y___05Fh20578) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20577));
    vlTOPp->mac__DOT__y___05Fh376447 = ((IData)(vlTOPp->mac__DOT__y___05Fh376073) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh376072));
    vlTOPp->mac__DOT__y___05Fh20855 = ((IData)(vlTOPp->mac__DOT__x___05Fh20951) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh20952));
    vlTOPp->mac__DOT__y___05Fh376350 = ((IData)(vlTOPp->mac__DOT__x___05Fh376446) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh376447));
    vlTOPp->mac__DOT__y___05Fh21229 = ((IData)(vlTOPp->mac__DOT__y___05Fh20855) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh20854));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1319 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh376349) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh376350)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh376072) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh376073)))) 
                          << 0x24U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh375795)) 
                                        << 0x23U) | 
                                       ((0x7fffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_TH_ETC___05Fq41))))))));
    vlTOPp->mac__DOT__y___05Fh376724 = ((IData)(vlTOPp->mac__DOT__y___05Fh376350) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh376349));
    vlTOPp->mac__DOT__y___05Fh21132 = ((IData)(vlTOPp->mac__DOT__x___05Fh21228) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21229));
    vlTOPp->mac__DOT__y___05Fh376627 = ((IData)(vlTOPp->mac__DOT__x___05Fh376723) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh376724));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh21131) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh21132)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh20854) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh20855)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d229)));
    vlTOPp->mac__DOT__y___05Fh21506 = ((IData)(vlTOPp->mac__DOT__y___05Fh21132) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21131));
    vlTOPp->mac__DOT__y___05Fh377001 = ((IData)(vlTOPp->mac__DOT__y___05Fh376627) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh376626));
    vlTOPp->mac__DOT__y___05Fh21409 = ((IData)(vlTOPp->mac__DOT__x___05Fh21505) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21506));
    vlTOPp->mac__DOT__y___05Fh376904 = ((IData)(vlTOPp->mac__DOT__x___05Fh377000) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh377001));
    vlTOPp->mac__DOT__y___05Fh21783 = ((IData)(vlTOPp->mac__DOT__y___05Fh21409) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21408));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1320 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh376903) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh376904)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh376626) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh376627)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1319));
    vlTOPp->mac__DOT__y___05Fh377278 = ((IData)(vlTOPp->mac__DOT__y___05Fh376904) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh376903));
    vlTOPp->mac__DOT__y___05Fh21686 = ((IData)(vlTOPp->mac__DOT__x___05Fh21782) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh21783));
    vlTOPp->mac__DOT__y___05Fh377181 = ((IData)(vlTOPp->mac__DOT__x___05Fh377277) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh377278));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh21685) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh21686)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh21408) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh21409)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d230)));
    vlTOPp->mac__DOT__y___05Fh22060 = ((IData)(vlTOPp->mac__DOT__y___05Fh21686) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21685));
    vlTOPp->mac__DOT__y___05Fh377555 = ((IData)(vlTOPp->mac__DOT__y___05Fh377181) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh377180));
    vlTOPp->mac__DOT__y___05Fh21963 = ((IData)(vlTOPp->mac__DOT__x___05Fh22059) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh22060));
    vlTOPp->mac__DOT__y___05Fh377458 = ((IData)(vlTOPp->mac__DOT__x___05Fh377554) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh377555));
    vlTOPp->mac__DOT__y___05Fh22337 = ((IData)(vlTOPp->mac__DOT__y___05Fh21963) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh21962));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1321 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh377457) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh377458)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh377180) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh377181)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1320));
    vlTOPp->mac__DOT__y___05Fh377832 = ((IData)(vlTOPp->mac__DOT__y___05Fh377458) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh377457));
    vlTOPp->mac__DOT__y___05Fh22240 = ((IData)(vlTOPp->mac__DOT__x___05Fh22336) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh22337));
    vlTOPp->mac__DOT__y___05Fh377735 = ((IData)(vlTOPp->mac__DOT__x___05Fh377831) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh377832));
    vlTOPp->mac__DOT__mult_result___05Fh8295 = ((((IData)(vlTOPp->mac__DOT__x___05Fh22239) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh22240)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh21962) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh21963)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d231)));
    vlTOPp->mac__DOT__y___05Fh378109 = ((IData)(vlTOPp->mac__DOT__y___05Fh377735) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh377734));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233 
        = ((4U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh8295)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_1_8_THEN_IF_SEXT___05FETC___05F_d140));
    vlTOPp->mac__DOT__y___05Fh378012 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                       >> 0x2aU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh378109)));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq13 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh23425 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1322 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh378012))))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh377734) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh377735)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1321));
    vlTOPp->mac__DOT__y___05Fh378289 = ((IData)(vlTOPp->mac__DOT__y___05Fh378012) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__y___05Fh23797 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq13) 
                                        >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh23425));
    vlTOPp->mac__DOT__y___05Fh378566 = ((IData)(vlTOPp->mac__DOT__y___05Fh378289) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh23700 = ((IData)(vlTOPp->mac__DOT__x___05Fh23796) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh23797));
    vlTOPp->mac__DOT__y___05Fh378843 = ((IData)(vlTOPp->mac__DOT__y___05Fh378566) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh23699) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh23700)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh23425) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq13)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SE_ETC___05Fq14))))));
    vlTOPp->mac__DOT__y___05Fh24075 = ((IData)(vlTOPp->mac__DOT__y___05Fh23700) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23699));
    vlTOPp->mac__DOT__y___05Fh379120 = ((IData)(vlTOPp->mac__DOT__y___05Fh378843) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh23978 = ((IData)(vlTOPp->mac__DOT__x___05Fh24074) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24075));
    vlTOPp->mac__DOT__mantissa_result___05Fh91684 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh379120))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh378843))))) 
                        << 0x2eU) | (((QData)((IData)(
                                                      (1U 
                                                       & ((IData)(
                                                                  (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                                   >> 0x2dU)) 
                                                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh378566))))) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255 
                                                                                >> 0x2cU)) 
                                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh378289))))) 
                                                    << 0x2cU) 
                                                   | vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1322))));
    vlTOPp->mac__DOT__y___05Fh24352 = ((IData)(vlTOPp->mac__DOT__y___05Fh23978) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh23977));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
        = ((8U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh91684
            : vlTOPp->mac__DOT__IF_rg_B_BIT_2_092_THEN_IF_rg_B_BIT_1_093_THEN___05FETC___05F_d1255);
    vlTOPp->mac__DOT__y___05Fh24255 = ((IData)(vlTOPp->mac__DOT__x___05Fh24351) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24352));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq42 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh389058 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x24U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh390997 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh391094 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh390720 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh390817 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh390443 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh390540 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh390166 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh390263 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh389889 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh389986 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh389612 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh389709 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh389335 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh389336 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x24U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh24254) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh24255)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh23977) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh23978)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d313)));
    vlTOPp->mac__DOT__y___05Fh24629 = ((IData)(vlTOPp->mac__DOT__y___05Fh24255) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24254));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1386 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh389335) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh389336)))) 
            << 0x25U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh389058)) 
                          << 0x24U) | ((0xffffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_TH_ETC___05Fq42)))))));
    vlTOPp->mac__DOT__y___05Fh389710 = ((IData)(vlTOPp->mac__DOT__y___05Fh389336) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh389335));
    vlTOPp->mac__DOT__y___05Fh24532 = ((IData)(vlTOPp->mac__DOT__x___05Fh24628) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24629));
    vlTOPp->mac__DOT__y___05Fh389613 = ((IData)(vlTOPp->mac__DOT__x___05Fh389709) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh389710));
    vlTOPp->mac__DOT__y___05Fh24906 = ((IData)(vlTOPp->mac__DOT__y___05Fh24532) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24531));
    vlTOPp->mac__DOT__y___05Fh389987 = ((IData)(vlTOPp->mac__DOT__y___05Fh389613) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh389612));
    vlTOPp->mac__DOT__y___05Fh24809 = ((IData)(vlTOPp->mac__DOT__x___05Fh24905) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh24906));
    vlTOPp->mac__DOT__y___05Fh389890 = ((IData)(vlTOPp->mac__DOT__x___05Fh389986) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh389987));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh24808) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh24809)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh24531) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh24532)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d314)));
    vlTOPp->mac__DOT__y___05Fh25183 = ((IData)(vlTOPp->mac__DOT__y___05Fh24809) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh24808));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1387 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh389889) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh389890)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh389612) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh389613)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1386));
    vlTOPp->mac__DOT__y___05Fh390264 = ((IData)(vlTOPp->mac__DOT__y___05Fh389890) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh389889));
    vlTOPp->mac__DOT__y___05Fh25086 = ((IData)(vlTOPp->mac__DOT__x___05Fh25182) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25183));
    vlTOPp->mac__DOT__y___05Fh390167 = ((IData)(vlTOPp->mac__DOT__x___05Fh390263) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh390264));
    vlTOPp->mac__DOT__y___05Fh25460 = ((IData)(vlTOPp->mac__DOT__y___05Fh25086) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25085));
    vlTOPp->mac__DOT__y___05Fh390541 = ((IData)(vlTOPp->mac__DOT__y___05Fh390167) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh390166));
    vlTOPp->mac__DOT__y___05Fh25363 = ((IData)(vlTOPp->mac__DOT__x___05Fh25459) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25460));
    vlTOPp->mac__DOT__y___05Fh390444 = ((IData)(vlTOPp->mac__DOT__x___05Fh390540) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh390541));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh25362) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh25363)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh25085) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh25086)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d315)));
    vlTOPp->mac__DOT__y___05Fh25737 = ((IData)(vlTOPp->mac__DOT__y___05Fh25363) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25362));
    vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1388 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh390443) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh390444)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh390166) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh390167)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1387));
    vlTOPp->mac__DOT__y___05Fh390818 = ((IData)(vlTOPp->mac__DOT__y___05Fh390444) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh390443));
    vlTOPp->mac__DOT__y___05Fh25640 = ((IData)(vlTOPp->mac__DOT__x___05Fh25736) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh25737));
    vlTOPp->mac__DOT__y___05Fh390721 = ((IData)(vlTOPp->mac__DOT__x___05Fh390817) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh390818));
    vlTOPp->mac__DOT__y___05Fh26014 = ((IData)(vlTOPp->mac__DOT__y___05Fh25640) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25639));
    vlTOPp->mac__DOT__y___05Fh391095 = ((IData)(vlTOPp->mac__DOT__y___05Fh390721) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh390720));
    vlTOPp->mac__DOT__y___05Fh25917 = ((IData)(vlTOPp->mac__DOT__x___05Fh26013) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26014));
    vlTOPp->mac__DOT__y___05Fh390998 = ((IData)(vlTOPp->mac__DOT__x___05Fh391094) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh391095));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh25916) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh25917)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh25639) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh25640)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d316)));
    vlTOPp->mac__DOT__y___05Fh26291 = ((IData)(vlTOPp->mac__DOT__y___05Fh25917) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh25916));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_T_ETC___05F_d1389 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh390997) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh390998)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh390720) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh390721)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1388));
    vlTOPp->mac__DOT__y___05Fh391372 = ((IData)(vlTOPp->mac__DOT__y___05Fh390998) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh390997));
    vlTOPp->mac__DOT__y___05Fh26194 = ((IData)(vlTOPp->mac__DOT__x___05Fh26290) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26291));
    vlTOPp->mac__DOT__y___05Fh391275 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                       >> 0x2bU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh391372)));
    vlTOPp->mac__DOT__y___05Fh26568 = ((IData)(vlTOPp->mac__DOT__y___05Fh26194) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh26193));
    vlTOPp->mac__DOT__y___05Fh391552 = ((IData)(vlTOPp->mac__DOT__y___05Fh391275) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh26471 = ((IData)(vlTOPp->mac__DOT__x___05Fh26567) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh26568));
    vlTOPp->mac__DOT__y___05Fh391829 = ((IData)(vlTOPp->mac__DOT__y___05Fh391552) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__mult_result___05Fh7762 = ((((IData)(vlTOPp->mac__DOT__x___05Fh26470) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh26471)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh26193) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh26194)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d317)));
    vlTOPp->mac__DOT__y___05Fh392106 = ((IData)(vlTOPp->mac__DOT__y___05Fh391829) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319 
        = ((8U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh7762)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_2_7_THEN_IF_SEXT___05FETC___05F_d233));
    vlTOPp->mac__DOT__mantissa_result___05Fh90311 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh392106))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh391829))))) 
                        << 0x2eU) | (((QData)((IData)(
                                                      (1U 
                                                       & ((IData)(
                                                                  (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                                   >> 0x2dU)) 
                                                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh391552))))) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325 
                                                                                >> 0x2cU)) 
                                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh391275))))) 
                                                    << 0x2cU) 
                                                   | vlTOPp->mac__DOT__INV_IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_T_ETC___05F_d1389))));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq15 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh27928 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh90311
            : vlTOPp->mac__DOT__IF_rg_B_BIT_3_091_THEN_IF_rg_B_BIT_2_092_THEN___05FETC___05F_d1325);
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh27928) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq15)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq16)))));
    vlTOPp->mac__DOT__y___05Fh28300 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SE_ETC___05Fq15) 
                                        >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh27928));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq43 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh402316 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x25U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh404255 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh404352 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh403978 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh404075 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh403701 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh403798 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh403424 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh403521 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh403147 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh403244 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh402870 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh402967 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh402593 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh402594 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x25U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh28203 = ((IData)(vlTOPp->mac__DOT__x___05Fh28299) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28300));
    vlTOPp->mac__DOT__y___05Fh402968 = ((IData)(vlTOPp->mac__DOT__y___05Fh402594) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh402593));
    vlTOPp->mac__DOT__y___05Fh28578 = ((IData)(vlTOPp->mac__DOT__y___05Fh28203) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28202));
    vlTOPp->mac__DOT__y___05Fh402871 = ((IData)(vlTOPp->mac__DOT__x___05Fh402967) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh402968));
    vlTOPp->mac__DOT__y___05Fh28481 = ((IData)(vlTOPp->mac__DOT__x___05Fh28577) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28578));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1450 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh402870) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh402871)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh402593) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh402594)))) 
                          << 0x26U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh402316)) 
                                        << 0x25U) | 
                                       ((0x1ffffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_TH_ETC___05Fq43))))))));
    vlTOPp->mac__DOT__y___05Fh403245 = ((IData)(vlTOPp->mac__DOT__y___05Fh402871) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh402870));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh28480) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh28481)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh28202) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh28203)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d393)));
    vlTOPp->mac__DOT__y___05Fh28855 = ((IData)(vlTOPp->mac__DOT__y___05Fh28481) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28480));
    vlTOPp->mac__DOT__y___05Fh403148 = ((IData)(vlTOPp->mac__DOT__x___05Fh403244) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh403245));
    vlTOPp->mac__DOT__y___05Fh28758 = ((IData)(vlTOPp->mac__DOT__x___05Fh28854) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh28855));
    vlTOPp->mac__DOT__y___05Fh403522 = ((IData)(vlTOPp->mac__DOT__y___05Fh403148) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh403147));
    vlTOPp->mac__DOT__y___05Fh29132 = ((IData)(vlTOPp->mac__DOT__y___05Fh28758) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh28757));
    vlTOPp->mac__DOT__y___05Fh403425 = ((IData)(vlTOPp->mac__DOT__x___05Fh403521) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh403522));
    vlTOPp->mac__DOT__y___05Fh29035 = ((IData)(vlTOPp->mac__DOT__x___05Fh29131) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29132));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1451 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh403424) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh403425)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh403147) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh403148)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1450));
    vlTOPp->mac__DOT__y___05Fh403799 = ((IData)(vlTOPp->mac__DOT__y___05Fh403425) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh403424));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh29034) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh29035)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh28757) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh28758)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d394)));
    vlTOPp->mac__DOT__y___05Fh29409 = ((IData)(vlTOPp->mac__DOT__y___05Fh29035) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29034));
    vlTOPp->mac__DOT__y___05Fh403702 = ((IData)(vlTOPp->mac__DOT__x___05Fh403798) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh403799));
    vlTOPp->mac__DOT__y___05Fh29312 = ((IData)(vlTOPp->mac__DOT__x___05Fh29408) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29409));
    vlTOPp->mac__DOT__y___05Fh404076 = ((IData)(vlTOPp->mac__DOT__y___05Fh403702) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh403701));
    vlTOPp->mac__DOT__y___05Fh29686 = ((IData)(vlTOPp->mac__DOT__y___05Fh29312) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29311));
    vlTOPp->mac__DOT__y___05Fh403979 = ((IData)(vlTOPp->mac__DOT__x___05Fh404075) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh404076));
    vlTOPp->mac__DOT__y___05Fh29589 = ((IData)(vlTOPp->mac__DOT__x___05Fh29685) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29686));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1452 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh403978) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh403979)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh403701) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh403702)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1451));
    vlTOPp->mac__DOT__y___05Fh404353 = ((IData)(vlTOPp->mac__DOT__y___05Fh403979) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh403978));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh29588) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh29589)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh29311) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh29312)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d395)));
    vlTOPp->mac__DOT__y___05Fh29963 = ((IData)(vlTOPp->mac__DOT__y___05Fh29589) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29588));
    vlTOPp->mac__DOT__y___05Fh404256 = ((IData)(vlTOPp->mac__DOT__x___05Fh404352) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh404353));
    vlTOPp->mac__DOT__y___05Fh29866 = ((IData)(vlTOPp->mac__DOT__x___05Fh29962) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh29963));
    vlTOPp->mac__DOT__y___05Fh404630 = ((IData)(vlTOPp->mac__DOT__y___05Fh404256) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh404255));
    vlTOPp->mac__DOT__y___05Fh30240 = ((IData)(vlTOPp->mac__DOT__y___05Fh29866) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh29865));
    vlTOPp->mac__DOT__y___05Fh404533 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                       >> 0x2cU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh404630)));
    vlTOPp->mac__DOT__y___05Fh30143 = ((IData)(vlTOPp->mac__DOT__x___05Fh30239) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30240));
    vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1453 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh404533))))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh404255) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh404256)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1452));
    vlTOPp->mac__DOT__y___05Fh404810 = ((IData)(vlTOPp->mac__DOT__y___05Fh404533) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh30142) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh30143)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh29865) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh29866)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d396)));
    vlTOPp->mac__DOT__y___05Fh30517 = ((IData)(vlTOPp->mac__DOT__y___05Fh30143) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh30142));
    vlTOPp->mac__DOT__y___05Fh405087 = ((IData)(vlTOPp->mac__DOT__y___05Fh404810) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh30420 = ((IData)(vlTOPp->mac__DOT__x___05Fh30516) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30517));
    vlTOPp->mac__DOT__mantissa_result___05Fh88938 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh405087))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh404810))))) 
                        << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1453));
    vlTOPp->mac__DOT__y___05Fh30794 = ((IData)(vlTOPp->mac__DOT__y___05Fh30420) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh30419));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh88938
            : vlTOPp->mac__DOT__IF_rg_B_BIT_4_090_THEN_IF_rg_B_BIT_3_091_THEN___05FETC___05F_d1392);
    vlTOPp->mac__DOT__y___05Fh30697 = ((IData)(vlTOPp->mac__DOT__x___05Fh30793) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh30794));
    vlTOPp->mac__DOT__x___05Fh417508 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq44 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh415569 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x26U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh417605 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2cU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh417231 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2cU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh417328 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh416954 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh417051 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh416677 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh416774 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh416400 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh416497 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh416123 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh416220 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh415846 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh415847 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x26U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__mult_result___05Fh7229 = ((((IData)(vlTOPp->mac__DOT__x___05Fh30696) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh30697)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh30419) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh30420)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d397)));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1510 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh415846) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh415847)))) 
            << 0x27U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh415569)) 
                          << 0x26U) | ((0x3ffffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_TH_ETC___05Fq44)))))));
    vlTOPp->mac__DOT__y___05Fh416221 = ((IData)(vlTOPp->mac__DOT__y___05Fh415847) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh415846));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh7229)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_3_6_THEN_IF_SEXT___05FETC___05F_d319));
    vlTOPp->mac__DOT__y___05Fh416124 = ((IData)(vlTOPp->mac__DOT__x___05Fh416220) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh416221));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq17 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh32426 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh416498 = ((IData)(vlTOPp->mac__DOT__y___05Fh416124) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh416123));
    vlTOPp->mac__DOT__y___05Fh32798 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq17) 
                                        >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh32426));
    vlTOPp->mac__DOT__y___05Fh416401 = ((IData)(vlTOPp->mac__DOT__x___05Fh416497) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh416498));
    vlTOPp->mac__DOT__y___05Fh32701 = ((IData)(vlTOPp->mac__DOT__x___05Fh32797) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh32798));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1511 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh416400) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh416401)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh416123) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh416124)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1510));
    vlTOPp->mac__DOT__y___05Fh416775 = ((IData)(vlTOPp->mac__DOT__y___05Fh416401) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh416400));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh32700) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh32701)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh32426) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq17)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SE_ETC___05Fq18))))));
    vlTOPp->mac__DOT__y___05Fh33076 = ((IData)(vlTOPp->mac__DOT__y___05Fh32701) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32700));
    vlTOPp->mac__DOT__y___05Fh416678 = ((IData)(vlTOPp->mac__DOT__x___05Fh416774) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh416775));
    vlTOPp->mac__DOT__y___05Fh32979 = ((IData)(vlTOPp->mac__DOT__x___05Fh33075) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33076));
    vlTOPp->mac__DOT__y___05Fh417052 = ((IData)(vlTOPp->mac__DOT__y___05Fh416678) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh416677));
    vlTOPp->mac__DOT__y___05Fh33353 = ((IData)(vlTOPp->mac__DOT__y___05Fh32979) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh32978));
    vlTOPp->mac__DOT__y___05Fh416955 = ((IData)(vlTOPp->mac__DOT__x___05Fh417051) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh417052));
    vlTOPp->mac__DOT__y___05Fh33256 = ((IData)(vlTOPp->mac__DOT__x___05Fh33352) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33353));
    vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1512 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh416954) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh416955)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh416677) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh416678)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1511));
    vlTOPp->mac__DOT__y___05Fh417329 = ((IData)(vlTOPp->mac__DOT__y___05Fh416955) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh416954));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh33255) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh33256)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh32978) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh32979)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d467)));
    vlTOPp->mac__DOT__y___05Fh33630 = ((IData)(vlTOPp->mac__DOT__y___05Fh33256) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33255));
    vlTOPp->mac__DOT__y___05Fh417232 = ((IData)(vlTOPp->mac__DOT__x___05Fh417328) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh417329));
    vlTOPp->mac__DOT__y___05Fh33533 = ((IData)(vlTOPp->mac__DOT__x___05Fh33629) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33630));
    vlTOPp->mac__DOT__y___05Fh417606 = ((IData)(vlTOPp->mac__DOT__y___05Fh417232) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh417231));
    vlTOPp->mac__DOT__y___05Fh33907 = ((IData)(vlTOPp->mac__DOT__y___05Fh33533) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33532));
    vlTOPp->mac__DOT__y___05Fh417509 = ((IData)(vlTOPp->mac__DOT__x___05Fh417605) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh417606));
    vlTOPp->mac__DOT__y___05Fh33810 = ((IData)(vlTOPp->mac__DOT__x___05Fh33906) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh33907));
    vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_T_ETC___05F_d1513 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh417508) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh417509)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh417231) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh417232)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1512));
    vlTOPp->mac__DOT__y___05Fh417883 = ((IData)(vlTOPp->mac__DOT__y___05Fh417509) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh417508));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh33809) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh33810)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh33532) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh33533)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d468)));
    vlTOPp->mac__DOT__y___05Fh34184 = ((IData)(vlTOPp->mac__DOT__y___05Fh33810) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh33809));
    vlTOPp->mac__DOT__y___05Fh417786 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                       >> 0x2dU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh417883)));
    vlTOPp->mac__DOT__y___05Fh34087 = ((IData)(vlTOPp->mac__DOT__x___05Fh34183) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34184));
    vlTOPp->mac__DOT__y___05Fh418063 = ((IData)(vlTOPp->mac__DOT__y___05Fh417786) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh34461 = ((IData)(vlTOPp->mac__DOT__y___05Fh34087) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34086));
    vlTOPp->mac__DOT__mantissa_result___05Fh87565 = 
        (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                          >> 0x2fU)) 
                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh418063))))) 
          << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                       (vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455 
                                                        >> 0x2eU)) 
                                               ^ (IData)(vlTOPp->mac__DOT__y___05Fh417786))))) 
                        << 0x2eU) | vlTOPp->mac__DOT__INV_IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_T_ETC___05F_d1513));
    vlTOPp->mac__DOT__y___05Fh34364 = ((IData)(vlTOPp->mac__DOT__x___05Fh34460) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34461));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh87565
            : vlTOPp->mac__DOT__IF_rg_B_BIT_5_089_THEN_IF_rg_B_BIT_4_090_THEN___05FETC___05F_d1455);
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh34363) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh34364)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh34086) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh34087)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d469)));
    vlTOPp->mac__DOT__y___05Fh34738 = ((IData)(vlTOPp->mac__DOT__y___05Fh34364) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34363));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq46 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh428817 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x27U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh430756 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh430853 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2dU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh430479 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2dU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh430576 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2cU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh430202 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2cU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh430299 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh429925 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh430022 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh429648 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh429745 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh429371 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh429468 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh429094 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh429095 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x27U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh34641 = ((IData)(vlTOPp->mac__DOT__x___05Fh34737) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34738));
    vlTOPp->mac__DOT__y___05Fh429469 = ((IData)(vlTOPp->mac__DOT__y___05Fh429095) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh429094));
    vlTOPp->mac__DOT__y___05Fh35015 = ((IData)(vlTOPp->mac__DOT__y___05Fh34641) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34640));
    vlTOPp->mac__DOT__y___05Fh429372 = ((IData)(vlTOPp->mac__DOT__x___05Fh429468) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh429469));
    vlTOPp->mac__DOT__y___05Fh34918 = ((IData)(vlTOPp->mac__DOT__x___05Fh35014) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35015));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1669 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh429371) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh429372)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh429094) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh429095)))) 
                          << 0x28U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh428817)) 
                                        << 0x27U) | 
                                       ((0x7ffffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05Fq46))))))));
    vlTOPp->mac__DOT__y___05Fh429746 = ((IData)(vlTOPp->mac__DOT__y___05Fh429372) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh429371));
    vlTOPp->mac__DOT__mult_result___05Fh6696 = ((((IData)(vlTOPp->mac__DOT__x___05Fh34917) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh34918)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh34640) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh34641)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d470)));
    vlTOPp->mac__DOT__y___05Fh429649 = ((IData)(vlTOPp->mac__DOT__x___05Fh429745) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh429746));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6696)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_4_5_THEN_IF_SEXT___05FETC___05F_d399));
    vlTOPp->mac__DOT__y___05Fh430023 = ((IData)(vlTOPp->mac__DOT__y___05Fh429649) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh429648));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq19 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh36919 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh429926 = ((IData)(vlTOPp->mac__DOT__x___05Fh430022) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh430023));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh36919) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq19)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                        ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq20)))));
    vlTOPp->mac__DOT__y___05Fh37291 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SE_ETC___05Fq19) 
                                        >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh36919));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1670 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh429925) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh429926)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh429648) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh429649)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1669));
    vlTOPp->mac__DOT__y___05Fh430300 = ((IData)(vlTOPp->mac__DOT__y___05Fh429926) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh429925));
    vlTOPp->mac__DOT__y___05Fh37194 = ((IData)(vlTOPp->mac__DOT__x___05Fh37290) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37291));
    vlTOPp->mac__DOT__y___05Fh430203 = ((IData)(vlTOPp->mac__DOT__x___05Fh430299) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh430300));
    vlTOPp->mac__DOT__y___05Fh37569 = ((IData)(vlTOPp->mac__DOT__y___05Fh37194) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37193));
    vlTOPp->mac__DOT__y___05Fh430577 = ((IData)(vlTOPp->mac__DOT__y___05Fh430203) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh430202));
    vlTOPp->mac__DOT__y___05Fh37472 = ((IData)(vlTOPp->mac__DOT__x___05Fh37568) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37569));
    vlTOPp->mac__DOT__y___05Fh430480 = ((IData)(vlTOPp->mac__DOT__x___05Fh430576) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh430577));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh37471) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh37472)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh37193) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh37194)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d534)));
    vlTOPp->mac__DOT__y___05Fh37846 = ((IData)(vlTOPp->mac__DOT__y___05Fh37472) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37471));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1671 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh430479) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh430480)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh430202) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh430203)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1670));
    vlTOPp->mac__DOT__y___05Fh430854 = ((IData)(vlTOPp->mac__DOT__y___05Fh430480) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh430479));
    vlTOPp->mac__DOT__y___05Fh37749 = ((IData)(vlTOPp->mac__DOT__x___05Fh37845) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh37846));
    vlTOPp->mac__DOT__mantissa_result___05Fh438401 
        = (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1671 
           << 2U);
    vlTOPp->mac__DOT__y___05Fh430757 = ((IData)(vlTOPp->mac__DOT__x___05Fh430853) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh430854));
    vlTOPp->mac__DOT__y___05Fh38123 = ((IData)(vlTOPp->mac__DOT__y___05Fh37749) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh37748));
    vlTOPp->mac__DOT__mantissa_result___05Fh431302 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh430756) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh430757)))) 
            << 0x2fU) | (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1671 
                         << 1U));
    vlTOPp->mac__DOT__y___05Fh431131 = ((IData)(vlTOPp->mac__DOT__y___05Fh430757) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh430756));
    vlTOPp->mac__DOT__y___05Fh38026 = ((IData)(vlTOPp->mac__DOT__x___05Fh38122) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38123));
    vlTOPp->mac__DOT__y___05Fh431034 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                                                       >> 0x2eU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh431131)));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh38025) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh38026)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh37748) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh37749)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d535)));
    vlTOPp->mac__DOT__y___05Fh38400 = ((IData)(vlTOPp->mac__DOT__y___05Fh38026) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38025));
    vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1553 
        = (1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1515 
                          >> 0x2fU)) ^ (IData)(vlTOPp->mac__DOT__y___05Fh431034)));
    vlTOPp->mac__DOT__y___05Fh38303 = ((IData)(vlTOPp->mac__DOT__x___05Fh38399) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38400));
    if (vlTOPp->mac__DOT__IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_THEN___05FETC___05F_d1553) {
        vlTOPp->mac__DOT__mantissa_result___05Fh85882 
            = vlTOPp->mac__DOT__mantissa_result___05Fh431302;
        vlTOPp->mac__DOT__expA___05Fh85884 = vlTOPp->mac__DOT__spliced_bits___05Fh431305;
    } else {
        vlTOPp->mac__DOT__mantissa_result___05Fh85882 
            = vlTOPp->mac__DOT__mantissa_result___05Fh438401;
        vlTOPp->mac__DOT__expA___05Fh85884 = vlTOPp->mac__DOT__spliced_bits___05Fh431332;
    }
    vlTOPp->mac__DOT__y___05Fh38677 = ((IData)(vlTOPp->mac__DOT__y___05Fh38303) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38302));
    vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1655 
        = ((IData)(vlTOPp->mac__DOT__expA___05Fh85884) 
           <= (0xffU & (vlTOPp->mac__DOT__rg_C >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh438396 = (0xffU 
                                              & ((IData)(vlTOPp->mac__DOT__expA___05Fh85884) 
                                                 - 
                                                 (vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh438405 = (0xffU 
                                              & ((vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U) 
                                                 - (IData)(vlTOPp->mac__DOT__expA___05Fh85884)));
    vlTOPp->mac__DOT__y___05Fh38580 = ((IData)(vlTOPp->mac__DOT__x___05Fh38676) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38677));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056 
        = (0xffU & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1655)
                     ? (vlTOPp->mac__DOT__rg_C >> 0x17U)
                     : (IData)(vlTOPp->mac__DOT__expA___05Fh85884)));
    vlTOPp->mac__DOT__shiftedMantB___05Fh438397 = (
                                                   (0x2fU 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh438396))
                                                    ? 
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlTOPp->mac__DOT__rg_C))) 
                                                        << 0x18U) 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh438396)))
                                                    : 0ULL);
    vlTOPp->mac__DOT__shiftedMantA___05Fh438406 = (
                                                   (0x2fU 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh438405))
                                                    ? 
                                                   (0xffffffffffffULL 
                                                    & (vlTOPp->mac__DOT__mantissa_result___05Fh85882 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh438405)))
                                                    : 0ULL);
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh38579) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh38580)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh38302) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh38303)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d536)));
    vlTOPp->mac__DOT__y___05Fh38954 = ((IData)(vlTOPp->mac__DOT__y___05Fh38580) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38579));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056))) {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BI_ETC___05Fq52 = 0U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05Fq51 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BI_ETC___05Fq52 = 1U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05Fq51 = 0U;
    }
    if (vlTOPp->mac__DOT__IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_TH_ETC___05F_d1655) {
        vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
            = ((QData)((IData)((0x7fffffU & vlTOPp->mac__DOT__rg_C))) 
               << 0x18U);
        vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
            = vlTOPp->mac__DOT__shiftedMantA___05Fh438406;
    } else {
        vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
            = vlTOPp->mac__DOT__shiftedMantB___05Fh438397;
        vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
            = vlTOPp->mac__DOT__mantissa_result___05Fh85882;
    }
    vlTOPp->mac__DOT__y___05Fh38857 = ((IData)(vlTOPp->mac__DOT__x___05Fh38953) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh38954));
    vlTOPp->mac__DOT__y___05Fh453854 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05Fq51) 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                              >> 1U));
    vlTOPp->mac__DOT__x___05Fh452885 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2fU))));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1683 
        = (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
           <= vlTOPp->mac__DOT__shiftedMantB___05Fh85890);
    vlTOPp->mac__DOT__x___05Fh452983 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2eU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh452605 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh452703 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2dU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__x___05Fh452325 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__x___05Fh452423 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2cU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh452045 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh452143 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2bU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh451765 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh451863 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2aU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh451485 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh451583 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x29U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh451205 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh451303 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x28U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh450925 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh451023 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x27U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x27U))));
    vlTOPp->mac__DOT__x___05Fh450645 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x27U))));
    vlTOPp->mac__DOT__x___05Fh450743 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x26U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x26U))));
    vlTOPp->mac__DOT__x___05Fh450365 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x26U))));
    vlTOPp->mac__DOT__x___05Fh450463 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x25U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x25U))));
    vlTOPp->mac__DOT__x___05Fh450085 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x25U))));
    vlTOPp->mac__DOT__x___05Fh450183 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x24U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x24U))));
    vlTOPp->mac__DOT__x___05Fh449805 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x24U))));
    vlTOPp->mac__DOT__IF_shiftedMantA5889_BIT_0_XOR_shiftedMantB5890_ETC___05Fq49 
        = ((1U & ((IData)(vlTOPp->mac__DOT__shiftedMantA___05Fh85889) 
                  ^ (IData)(vlTOPp->mac__DOT__shiftedMantB___05Fh85890)))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh449903 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x23U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x23U))));
    vlTOPp->mac__DOT__x___05Fh449525 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x23U))));
    vlTOPp->mac__DOT__x___05Fh449623 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x22U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x22U))));
    vlTOPp->mac__DOT__x___05Fh449245 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x22U))));
    vlTOPp->mac__DOT__x___05Fh449343 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x21U))));
    vlTOPp->mac__DOT__x___05Fh448965 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x21U))));
    vlTOPp->mac__DOT__x___05Fh449063 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x20U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x20U))));
    vlTOPp->mac__DOT__x___05Fh448685 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x20U))));
    vlTOPp->mac__DOT__x___05Fh448783 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1fU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1fU))));
    vlTOPp->mac__DOT__x___05Fh448405 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1fU))));
    vlTOPp->mac__DOT__x___05Fh448503 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1eU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1eU))));
    vlTOPp->mac__DOT__x___05Fh448125 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1eU))));
    vlTOPp->mac__DOT__x___05Fh448223 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1dU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1dU))));
    vlTOPp->mac__DOT__x___05Fh447845 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1dU))));
    vlTOPp->mac__DOT__x___05Fh447943 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1cU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1cU))));
    vlTOPp->mac__DOT__x___05Fh447565 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1cU))));
    vlTOPp->mac__DOT__x___05Fh447663 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1bU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1bU))));
    vlTOPp->mac__DOT__x___05Fh447285 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1bU))));
    vlTOPp->mac__DOT__x___05Fh447383 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1aU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1aU))));
    vlTOPp->mac__DOT__x___05Fh447005 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x1aU))));
    vlTOPp->mac__DOT__x___05Fh447103 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x19U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x19U))));
    vlTOPp->mac__DOT__x___05Fh446725 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x19U))));
    vlTOPp->mac__DOT__x___05Fh446823 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x18U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x18U))));
    vlTOPp->mac__DOT__x___05Fh446445 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x18U))));
    vlTOPp->mac__DOT__x___05Fh446543 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x17U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x17U))));
    vlTOPp->mac__DOT__x___05Fh446165 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x17U))));
    vlTOPp->mac__DOT__x___05Fh446263 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x16U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x16U))));
    vlTOPp->mac__DOT__x___05Fh445885 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x16U))));
    vlTOPp->mac__DOT__x___05Fh445983 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x15U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x15U))));
    vlTOPp->mac__DOT__x___05Fh445605 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x15U))));
    vlTOPp->mac__DOT__x___05Fh445703 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x14U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x14U))));
    vlTOPp->mac__DOT__x___05Fh445325 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x14U))));
    vlTOPp->mac__DOT__x___05Fh445423 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x13U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x13U))));
    vlTOPp->mac__DOT__x___05Fh445045 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x13U))));
    vlTOPp->mac__DOT__x___05Fh445143 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x12U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x12U))));
    vlTOPp->mac__DOT__x___05Fh444765 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x12U))));
    vlTOPp->mac__DOT__x___05Fh444863 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x11U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x11U))));
    vlTOPp->mac__DOT__x___05Fh444485 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x11U))));
    vlTOPp->mac__DOT__x___05Fh444583 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x10U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x10U))));
    vlTOPp->mac__DOT__x___05Fh444205 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0x10U))));
    vlTOPp->mac__DOT__x___05Fh444303 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xfU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xfU))));
    vlTOPp->mac__DOT__x___05Fh443925 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xfU))));
    vlTOPp->mac__DOT__x___05Fh444023 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xeU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xeU))));
    vlTOPp->mac__DOT__x___05Fh443645 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xeU))));
    vlTOPp->mac__DOT__x___05Fh443743 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xdU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xdU))));
    vlTOPp->mac__DOT__x___05Fh443365 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xdU))));
    vlTOPp->mac__DOT__x___05Fh443463 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xcU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xcU))));
    vlTOPp->mac__DOT__x___05Fh443085 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xcU))));
    vlTOPp->mac__DOT__x___05Fh443183 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xbU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xbU))));
    vlTOPp->mac__DOT__x___05Fh442805 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xbU))));
    vlTOPp->mac__DOT__x___05Fh442903 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xaU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xaU))));
    vlTOPp->mac__DOT__x___05Fh442525 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 0xaU))));
    vlTOPp->mac__DOT__x___05Fh442623 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 9U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 9U))));
    vlTOPp->mac__DOT__x___05Fh442245 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 9U))));
    vlTOPp->mac__DOT__x___05Fh442343 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 8U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 8U))));
    vlTOPp->mac__DOT__x___05Fh441965 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 8U))));
    vlTOPp->mac__DOT__x___05Fh442063 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 7U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 7U))));
    vlTOPp->mac__DOT__x___05Fh441685 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 7U))));
    vlTOPp->mac__DOT__x___05Fh441783 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 6U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 6U))));
    vlTOPp->mac__DOT__x___05Fh441405 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 6U))));
    vlTOPp->mac__DOT__x___05Fh441503 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 5U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 5U))));
    vlTOPp->mac__DOT__x___05Fh441125 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 5U))));
    vlTOPp->mac__DOT__x___05Fh441223 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 4U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 4U))));
    vlTOPp->mac__DOT__x___05Fh440845 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 4U))));
    vlTOPp->mac__DOT__x___05Fh440943 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 3U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 3U))));
    vlTOPp->mac__DOT__x___05Fh440565 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 3U))));
    vlTOPp->mac__DOT__x___05Fh440663 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 2U))));
    vlTOPp->mac__DOT__x___05Fh440284 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 2U))));
    vlTOPp->mac__DOT__x___05Fh440382 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 1U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 1U))));
    vlTOPp->mac__DOT__IF_shiftedMantA5889_BIT_0_AND_shiftedMantB5890_ETC___05Fq47 
        = ((1U & ((IData)(vlTOPp->mac__DOT__shiftedMantA___05Fh85889) 
                  & (IData)(vlTOPp->mac__DOT__shiftedMantB___05Fh85890)))
            ? 2ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh440007 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                                         >> 1U))));
    vlTOPp->mac__DOT__y___05Fh39231 = ((IData)(vlTOPp->mac__DOT__y___05Fh38857) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh38856));
    vlTOPp->mac__DOT__y___05Fh454132 = ((IData)(vlTOPp->mac__DOT__y___05Fh453854) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           >> 2U));
    vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05F_d1690 
        = ((1U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1683)
                   ? (vlTOPp->mac__DOT__rg_C >> 0x1fU)
                   : (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq48 
                      >> 0x1fU))) ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__add_mant_Result___05Fh453151 
        = (0xffffffffffffULL & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d1683)
                                 ? (vlTOPp->mac__DOT__shiftedMantB___05Fh85890 
                                    - vlTOPp->mac__DOT__shiftedMantA___05Fh85889)
                                 : (vlTOPp->mac__DOT__shiftedMantA___05Fh85889 
                                    - vlTOPp->mac__DOT__shiftedMantB___05Fh85890)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2027 
        = ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh440007) 
                   ^ (IData)((vlTOPp->mac__DOT__IF_shiftedMantA5889_BIT_0_AND_shiftedMantB5890_ETC___05Fq47 
                              >> 1U))) << 1U)) | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_shiftedMantA5889_BIT_0_XOR_shiftedMantB5890_ETC___05Fq49)));
    vlTOPp->mac__DOT__y___05Fh440383 = ((IData)((vlTOPp->mac__DOT__IF_shiftedMantA5889_BIT_0_AND_shiftedMantB5890_ETC___05Fq47 
                                                 >> 1U)) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh440007));
    vlTOPp->mac__DOT__y___05Fh39134 = ((IData)(vlTOPp->mac__DOT__x___05Fh39230) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh39231));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2084 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh454132) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh453854) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5___05FETC___05Fq51))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BI_ETC___05Fq52)))));
    vlTOPp->mac__DOT__y___05Fh454409 = ((IData)(vlTOPp->mac__DOT__y___05Fh454132) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           >> 3U));
    vlTOPp->mac__DOT__y___05Fh440285 = ((IData)(vlTOPp->mac__DOT__x___05Fh440382) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh440383));
    vlTOPp->mac__DOT__mult_result___05Fh6163 = ((((IData)(vlTOPp->mac__DOT__x___05Fh39133) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh39134)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh38856) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh38857)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d537)));
    vlTOPp->mac__DOT__y___05Fh454686 = ((IData)(vlTOPp->mac__DOT__y___05Fh454409) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           >> 4U));
    vlTOPp->mac__DOT__y___05Fh440664 = ((IData)(vlTOPp->mac__DOT__y___05Fh440285) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh440284));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6163)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_5_4_THEN_IF_SEXT___05FETC___05F_d472));
    vlTOPp->mac__DOT__y___05Fh454963 = ((IData)(vlTOPp->mac__DOT__y___05Fh454686) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           >> 5U));
    vlTOPp->mac__DOT__y___05Fh440566 = ((IData)(vlTOPp->mac__DOT__x___05Fh440663) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh440664));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq21 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh41407 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh455240 = ((IData)(vlTOPp->mac__DOT__y___05Fh454963) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056) 
                                           >> 6U));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2028 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh440565) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh440566)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh440284) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh440285)) 
                       << 2U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2027)));
    vlTOPp->mac__DOT__y___05Fh440944 = ((IData)(vlTOPp->mac__DOT__y___05Fh440566) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh440565));
    vlTOPp->mac__DOT__y___05Fh41779 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq21) 
                                        >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh41407));
    vlTOPp->mac__DOT__spliced_bits___05Fh453182 = (
                                                   (0x80U 
                                                    & ((0xffffff80U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh455240) 
                                                        << 7U))) 
                                                   | ((0x40U 
                                                       & ((0xffffffc0U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__y___05Fh454963) 
                                                           << 6U))) 
                                                      | ((0x20U 
                                                          & ((0xffffffe0U 
                                                              & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mac__DOT__y___05Fh454686) 
                                                              << 5U))) 
                                                         | ((0x10U 
                                                             & ((0xfffffff0U 
                                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2056)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mac__DOT__y___05Fh454409) 
                                                                 << 4U))) 
                                                            | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2084)))));
    vlTOPp->mac__DOT__y___05Fh440846 = ((IData)(vlTOPp->mac__DOT__x___05Fh440943) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh440944));
    vlTOPp->mac__DOT__y___05Fh41682 = ((IData)(vlTOPp->mac__DOT__x___05Fh41778) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41779));
    vlTOPp->mac__DOT__y___05Fh441224 = ((IData)(vlTOPp->mac__DOT__y___05Fh440846) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh440845));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh41681) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh41682)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh41407) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq21)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SE_ETC___05Fq22))))));
    vlTOPp->mac__DOT__y___05Fh42057 = ((IData)(vlTOPp->mac__DOT__y___05Fh41682) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41681));
    vlTOPp->mac__DOT__y___05Fh441126 = ((IData)(vlTOPp->mac__DOT__x___05Fh441223) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh441224));
    vlTOPp->mac__DOT__y___05Fh41960 = ((IData)(vlTOPp->mac__DOT__x___05Fh42056) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42057));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2029 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh441125) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh441126)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh440845) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh440846)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2028)));
    vlTOPp->mac__DOT__y___05Fh441504 = ((IData)(vlTOPp->mac__DOT__y___05Fh441126) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh441125));
    vlTOPp->mac__DOT__y___05Fh42334 = ((IData)(vlTOPp->mac__DOT__y___05Fh41960) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41959));
    vlTOPp->mac__DOT__y___05Fh441406 = ((IData)(vlTOPp->mac__DOT__x___05Fh441503) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh441504));
    vlTOPp->mac__DOT__y___05Fh42237 = ((IData)(vlTOPp->mac__DOT__x___05Fh42333) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42334));
    vlTOPp->mac__DOT__y___05Fh441784 = ((IData)(vlTOPp->mac__DOT__y___05Fh441406) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh441405));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42236) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42237)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh41959) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh41960)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d595)));
    vlTOPp->mac__DOT__y___05Fh42611 = ((IData)(vlTOPp->mac__DOT__y___05Fh42237) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42236));
    vlTOPp->mac__DOT__y___05Fh441686 = ((IData)(vlTOPp->mac__DOT__x___05Fh441783) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh441784));
    vlTOPp->mac__DOT__y___05Fh42514 = ((IData)(vlTOPp->mac__DOT__x___05Fh42610) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42611));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2030 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh441685) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh441686)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh441405) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh441406)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2029)));
    vlTOPp->mac__DOT__y___05Fh442064 = ((IData)(vlTOPp->mac__DOT__y___05Fh441686) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh441685));
    vlTOPp->mac__DOT__y___05Fh42888 = ((IData)(vlTOPp->mac__DOT__y___05Fh42514) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42513));
    vlTOPp->mac__DOT__y___05Fh441966 = ((IData)(vlTOPp->mac__DOT__x___05Fh442063) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh442064));
    vlTOPp->mac__DOT__y___05Fh42791 = ((IData)(vlTOPp->mac__DOT__x___05Fh42887) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42888));
    vlTOPp->mac__DOT__y___05Fh442344 = ((IData)(vlTOPp->mac__DOT__y___05Fh441966) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh441965));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42790) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42791)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh42513) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh42514)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d596)));
    vlTOPp->mac__DOT__y___05Fh43165 = ((IData)(vlTOPp->mac__DOT__y___05Fh42791) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42790));
    vlTOPp->mac__DOT__y___05Fh442246 = ((IData)(vlTOPp->mac__DOT__x___05Fh442343) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh442344));
    vlTOPp->mac__DOT__y___05Fh43068 = ((IData)(vlTOPp->mac__DOT__x___05Fh43164) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43165));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2031 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh442245) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh442246)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh441965) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh441966)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2030)));
    vlTOPp->mac__DOT__y___05Fh442624 = ((IData)(vlTOPp->mac__DOT__y___05Fh442246) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh442245));
    vlTOPp->mac__DOT__y___05Fh43442 = ((IData)(vlTOPp->mac__DOT__y___05Fh43068) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh43067));
    vlTOPp->mac__DOT__y___05Fh442526 = ((IData)(vlTOPp->mac__DOT__x___05Fh442623) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh442624));
    vlTOPp->mac__DOT__y___05Fh43345 = ((IData)(vlTOPp->mac__DOT__x___05Fh43441) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43442));
    vlTOPp->mac__DOT__y___05Fh442904 = ((IData)(vlTOPp->mac__DOT__y___05Fh442526) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh442525));
    vlTOPp->mac__DOT__mult_result___05Fh5630 = ((((IData)(vlTOPp->mac__DOT__x___05Fh43344) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh43345)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh43067) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh43068)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d597)));
    vlTOPp->mac__DOT__y___05Fh442806 = ((IData)(vlTOPp->mac__DOT__x___05Fh442903) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh442904));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599 
        = ((0x80U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5630)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_6_3_THEN_IF_SEXT___05FETC___05F_d539));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2032 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh442805) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh442806)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh442525) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh442526)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2031)));
    vlTOPp->mac__DOT__y___05Fh443184 = ((IData)(vlTOPp->mac__DOT__y___05Fh442806) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh442805));
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq23 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                   >> 8U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x200U : 0U);
    vlTOPp->mac__DOT__x___05Fh45890 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh443086 = ((IData)(vlTOPp->mac__DOT__x___05Fh443183) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh443184));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649 
        = ((0x200U & (((IData)(vlTOPp->mac__DOT__x___05Fh45890) 
                       << 9U) ^ (0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq23)))) 
           | ((0x100U & ((0xffffff00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 8U))) | ((0xfeU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599)) 
                                        | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq24)))));
    vlTOPp->mac__DOT__y___05Fh46262 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SE_ETC___05Fq23) 
                                        >> 9U) & (IData)(vlTOPp->mac__DOT__x___05Fh45890));
    vlTOPp->mac__DOT__y___05Fh443464 = ((IData)(vlTOPp->mac__DOT__y___05Fh443086) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh443085));
    vlTOPp->mac__DOT__y___05Fh46165 = ((IData)(vlTOPp->mac__DOT__x___05Fh46261) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46262));
    vlTOPp->mac__DOT__y___05Fh443366 = ((IData)(vlTOPp->mac__DOT__x___05Fh443463) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh443464));
    vlTOPp->mac__DOT__y___05Fh46540 = ((IData)(vlTOPp->mac__DOT__y___05Fh46165) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46164));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2033 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh443365) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh443366)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh443085) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh443086)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2032)));
    vlTOPp->mac__DOT__y___05Fh443744 = ((IData)(vlTOPp->mac__DOT__y___05Fh443366) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh443365));
    vlTOPp->mac__DOT__y___05Fh46443 = ((IData)(vlTOPp->mac__DOT__x___05Fh46539) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46540));
    vlTOPp->mac__DOT__y___05Fh443646 = ((IData)(vlTOPp->mac__DOT__x___05Fh443743) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh443744));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh46442) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh46443)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh46164) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh46165)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d649)));
    vlTOPp->mac__DOT__y___05Fh46817 = ((IData)(vlTOPp->mac__DOT__y___05Fh46443) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46442));
    vlTOPp->mac__DOT__y___05Fh444024 = ((IData)(vlTOPp->mac__DOT__y___05Fh443646) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh443645));
    vlTOPp->mac__DOT__y___05Fh46720 = ((IData)(vlTOPp->mac__DOT__x___05Fh46816) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh46817));
    vlTOPp->mac__DOT__y___05Fh443926 = ((IData)(vlTOPp->mac__DOT__x___05Fh444023) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh444024));
    vlTOPp->mac__DOT__y___05Fh47094 = ((IData)(vlTOPp->mac__DOT__y___05Fh46720) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46719));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2034 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh443925) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh443926)) 
            << 0xfU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh443645) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh443646)) 
                         << 0xeU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2033)));
    vlTOPp->mac__DOT__y___05Fh444304 = ((IData)(vlTOPp->mac__DOT__y___05Fh443926) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh443925));
    vlTOPp->mac__DOT__y___05Fh46997 = ((IData)(vlTOPp->mac__DOT__x___05Fh47093) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47094));
    vlTOPp->mac__DOT__y___05Fh444206 = ((IData)(vlTOPp->mac__DOT__x___05Fh444303) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh444304));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh46996) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh46997)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh46719) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh46720)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d650)));
    vlTOPp->mac__DOT__y___05Fh47371 = ((IData)(vlTOPp->mac__DOT__y___05Fh46997) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh46996));
    vlTOPp->mac__DOT__y___05Fh444584 = ((IData)(vlTOPp->mac__DOT__y___05Fh444206) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh444205));
    vlTOPp->mac__DOT__y___05Fh47274 = ((IData)(vlTOPp->mac__DOT__x___05Fh47370) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47371));
    vlTOPp->mac__DOT__y___05Fh444486 = ((IData)(vlTOPp->mac__DOT__x___05Fh444583) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh444584));
    vlTOPp->mac__DOT__y___05Fh47648 = ((IData)(vlTOPp->mac__DOT__y___05Fh47274) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh47273));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2035 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh444485) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh444486)) 
            << 0x11U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh444205) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh444206)) 
                          << 0x10U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2034)));
    vlTOPp->mac__DOT__y___05Fh444864 = ((IData)(vlTOPp->mac__DOT__y___05Fh444486) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh444485));
    vlTOPp->mac__DOT__y___05Fh47551 = ((IData)(vlTOPp->mac__DOT__x___05Fh47647) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh47648));
    vlTOPp->mac__DOT__y___05Fh444766 = ((IData)(vlTOPp->mac__DOT__x___05Fh444863) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh444864));
    vlTOPp->mac__DOT__mult_result___05Fh5097 = ((((IData)(vlTOPp->mac__DOT__x___05Fh47550) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh47551)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh47273) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh47274)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d651)));
    vlTOPp->mac__DOT__y___05Fh445144 = ((IData)(vlTOPp->mac__DOT__y___05Fh444766) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh444765));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653 
        = ((0x100U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh5097)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_7_2_THEN_IF_SEXT___05FETC___05F_d599));
    vlTOPp->mac__DOT__y___05Fh445046 = ((IData)(vlTOPp->mac__DOT__x___05Fh445143) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh445144));
    vlTOPp->mac__DOT__x___05Fh51751 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh51848 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq25 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                   >> 9U) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x400U : 0U);
    vlTOPp->mac__DOT__x___05Fh50368 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2036 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh445045) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh445046)) 
            << 0x13U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh444765) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh444766)) 
                          << 0x12U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2035));
    vlTOPp->mac__DOT__y___05Fh445424 = ((IData)(vlTOPp->mac__DOT__y___05Fh445046) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh445045));
    vlTOPp->mac__DOT__y___05Fh50740 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq25) 
                                        >> 0xaU) & (IData)(vlTOPp->mac__DOT__x___05Fh50368));
    vlTOPp->mac__DOT__y___05Fh445326 = ((IData)(vlTOPp->mac__DOT__x___05Fh445423) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh445424));
    vlTOPp->mac__DOT__y___05Fh50643 = ((IData)(vlTOPp->mac__DOT__x___05Fh50739) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50740));
    vlTOPp->mac__DOT__y___05Fh445704 = ((IData)(vlTOPp->mac__DOT__y___05Fh445326) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh445325));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh50642) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh50643)) 
            << 0xbU) | ((0x400U & (((IData)(vlTOPp->mac__DOT__x___05Fh50368) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq25)))) 
                        | ((0x200U & ((0xfffffe00U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 9U))) | 
                           ((0x1feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653)) 
                            | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SE_ETC___05Fq26))))));
    vlTOPp->mac__DOT__y___05Fh51018 = ((IData)(vlTOPp->mac__DOT__y___05Fh50643) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50642));
    vlTOPp->mac__DOT__y___05Fh445606 = ((IData)(vlTOPp->mac__DOT__x___05Fh445703) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh445704));
    vlTOPp->mac__DOT__y___05Fh50921 = ((IData)(vlTOPp->mac__DOT__x___05Fh51017) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51018));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2037 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh445605) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh445606)) 
            << 0x15U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh445325) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh445326)) 
                          << 0x14U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2036));
    vlTOPp->mac__DOT__y___05Fh445984 = ((IData)(vlTOPp->mac__DOT__y___05Fh445606) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh445605));
    vlTOPp->mac__DOT__y___05Fh51295 = ((IData)(vlTOPp->mac__DOT__y___05Fh50921) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh50920));
    vlTOPp->mac__DOT__y___05Fh445886 = ((IData)(vlTOPp->mac__DOT__x___05Fh445983) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh445984));
    vlTOPp->mac__DOT__y___05Fh51198 = ((IData)(vlTOPp->mac__DOT__x___05Fh51294) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51295));
    vlTOPp->mac__DOT__y___05Fh446264 = ((IData)(vlTOPp->mac__DOT__y___05Fh445886) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh445885));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh51197) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh51198)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh50920) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh50921)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d697)));
    vlTOPp->mac__DOT__y___05Fh51572 = ((IData)(vlTOPp->mac__DOT__y___05Fh51198) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh51197));
    vlTOPp->mac__DOT__y___05Fh446166 = ((IData)(vlTOPp->mac__DOT__x___05Fh446263) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh446264));
    vlTOPp->mac__DOT__y___05Fh51475 = ((IData)(vlTOPp->mac__DOT__x___05Fh51571) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51572));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2038 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh446165) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh446166)) 
            << 0x17U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh445885) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh445886)) 
                          << 0x16U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2037));
    vlTOPp->mac__DOT__y___05Fh446544 = ((IData)(vlTOPp->mac__DOT__y___05Fh446166) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh446165));
    vlTOPp->mac__DOT__y___05Fh51849 = ((IData)(vlTOPp->mac__DOT__y___05Fh51475) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh51474));
    vlTOPp->mac__DOT__y___05Fh446446 = ((IData)(vlTOPp->mac__DOT__x___05Fh446543) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh446544));
    vlTOPp->mac__DOT__y___05Fh51752 = ((IData)(vlTOPp->mac__DOT__x___05Fh51848) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh51849));
    vlTOPp->mac__DOT__y___05Fh446824 = ((IData)(vlTOPp->mac__DOT__y___05Fh446446) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh446445));
    vlTOPp->mac__DOT__mult_result___05Fh4564 = ((((IData)(vlTOPp->mac__DOT__x___05Fh51751) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh51752)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh51474) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh51475)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d698)));
    vlTOPp->mac__DOT__y___05Fh446726 = ((IData)(vlTOPp->mac__DOT__x___05Fh446823) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh446824));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700 
        = ((0x200U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4564)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_8_1_THEN_IF_SEXT___05FETC___05F_d653));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2039 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh446725) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh446726)) 
            << 0x19U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh446445) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh446446)) 
                          << 0x18U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2038));
    vlTOPp->mac__DOT__y___05Fh447104 = ((IData)(vlTOPp->mac__DOT__y___05Fh446726) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh446725));
    vlTOPp->mac__DOT__x___05Fh55947 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh56044 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq27 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                   >> 0xaU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x800U : 0U);
    vlTOPp->mac__DOT__x___05Fh54841 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh447006 = ((IData)(vlTOPp->mac__DOT__x___05Fh447103) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh447104));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738 
        = ((0x800U & (((IData)(vlTOPp->mac__DOT__x___05Fh54841) 
                       << 0xbU) ^ (0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq27)))) 
           | ((0x400U & ((0xfffffc00U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                         ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                            << 0xaU))) | ((0x3feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700)) 
                                          | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq28)))));
    vlTOPp->mac__DOT__y___05Fh55213 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SE_ETC___05Fq27) 
                                        >> 0xbU) & (IData)(vlTOPp->mac__DOT__x___05Fh54841));
    vlTOPp->mac__DOT__y___05Fh447384 = ((IData)(vlTOPp->mac__DOT__y___05Fh447006) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh447005));
    vlTOPp->mac__DOT__y___05Fh55116 = ((IData)(vlTOPp->mac__DOT__x___05Fh55212) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55213));
    vlTOPp->mac__DOT__y___05Fh447286 = ((IData)(vlTOPp->mac__DOT__x___05Fh447383) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh447384));
    vlTOPp->mac__DOT__y___05Fh55491 = ((IData)(vlTOPp->mac__DOT__y___05Fh55116) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55115));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2040 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh447285) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh447286)) 
            << 0x1bU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh447005) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh447006)) 
                          << 0x1aU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2039));
    vlTOPp->mac__DOT__y___05Fh447664 = ((IData)(vlTOPp->mac__DOT__y___05Fh447286) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh447285));
    vlTOPp->mac__DOT__y___05Fh55394 = ((IData)(vlTOPp->mac__DOT__x___05Fh55490) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55491));
    vlTOPp->mac__DOT__y___05Fh447566 = ((IData)(vlTOPp->mac__DOT__x___05Fh447663) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh447664));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh55393) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh55394)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh55115) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh55116)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d738)));
    vlTOPp->mac__DOT__y___05Fh55768 = ((IData)(vlTOPp->mac__DOT__y___05Fh55394) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55393));
    vlTOPp->mac__DOT__y___05Fh447944 = ((IData)(vlTOPp->mac__DOT__y___05Fh447566) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh447565));
    vlTOPp->mac__DOT__y___05Fh55671 = ((IData)(vlTOPp->mac__DOT__x___05Fh55767) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55768));
    vlTOPp->mac__DOT__y___05Fh447846 = ((IData)(vlTOPp->mac__DOT__x___05Fh447943) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh447944));
    vlTOPp->mac__DOT__y___05Fh56045 = ((IData)(vlTOPp->mac__DOT__y___05Fh55671) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55670));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2041 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh447845) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh447846)) 
            << 0x1dU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh447565) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh447566)) 
                          << 0x1cU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2040));
    vlTOPp->mac__DOT__y___05Fh448224 = ((IData)(vlTOPp->mac__DOT__y___05Fh447846) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh447845));
    vlTOPp->mac__DOT__y___05Fh55948 = ((IData)(vlTOPp->mac__DOT__x___05Fh56044) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56045));
    vlTOPp->mac__DOT__y___05Fh448126 = ((IData)(vlTOPp->mac__DOT__x___05Fh448223) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh448224));
    vlTOPp->mac__DOT__mult_result___05Fh4031 = ((((IData)(vlTOPp->mac__DOT__x___05Fh55947) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh55948)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh55670) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh55671)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d739)));
    vlTOPp->mac__DOT__y___05Fh448504 = ((IData)(vlTOPp->mac__DOT__y___05Fh448126) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh448125));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741 
        = ((0x400U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh4031)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_9_0_THEN_IF_SEXT___05FETC___05F_d700));
    vlTOPp->mac__DOT__y___05Fh448406 = ((IData)(vlTOPp->mac__DOT__x___05Fh448503) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh448504));
    vlTOPp->mac__DOT__x___05Fh60138 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 4U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq29 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                   >> 0xbU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x1000U : 0U);
    vlTOPp->mac__DOT__x___05Fh59309 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2042 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh448405) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh448406)) 
            << 0x1fU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh448125) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh448126)) 
                          << 0x1eU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2041));
    vlTOPp->mac__DOT__y___05Fh448784 = ((IData)(vlTOPp->mac__DOT__y___05Fh448406) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh448405));
    vlTOPp->mac__DOT__y___05Fh59681 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq29) 
                                        >> 0xcU) & (IData)(vlTOPp->mac__DOT__x___05Fh59309));
    vlTOPp->mac__DOT__y___05Fh448686 = ((IData)(vlTOPp->mac__DOT__x___05Fh448783) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh448784));
    vlTOPp->mac__DOT__y___05Fh59584 = ((IData)(vlTOPp->mac__DOT__x___05Fh59680) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59681));
    vlTOPp->mac__DOT__y___05Fh449064 = ((IData)(vlTOPp->mac__DOT__y___05Fh448686) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh448685));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh59583) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh59584)) 
            << 0xdU) | ((0x1000U & (((IData)(vlTOPp->mac__DOT__x___05Fh59309) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq29)))) 
                        | ((0x800U & ((0xfffff800U 
                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                                      ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                         << 0xbU))) 
                           | ((0x7feU & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741)) 
                              | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEX_ETC___05Fq30))))));
    vlTOPp->mac__DOT__y___05Fh59959 = ((IData)(vlTOPp->mac__DOT__y___05Fh59584) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh59583));
    vlTOPp->mac__DOT__y___05Fh448966 = ((IData)(vlTOPp->mac__DOT__x___05Fh449063) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh449064));
    vlTOPp->mac__DOT__y___05Fh59862 = ((IData)(vlTOPp->mac__DOT__x___05Fh59958) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh59959));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2043 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh448965) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh448966)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh448685) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh448686)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2042))));
    vlTOPp->mac__DOT__y___05Fh449344 = ((IData)(vlTOPp->mac__DOT__y___05Fh448966) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh448965));
    vlTOPp->mac__DOT__y___05Fh60236 = ((IData)(vlTOPp->mac__DOT__y___05Fh59862) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh59861));
    vlTOPp->mac__DOT__y___05Fh449246 = ((IData)(vlTOPp->mac__DOT__x___05Fh449343) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh449344));
    vlTOPp->mac__DOT__y___05Fh60139 = ((IData)(vlTOPp->mac__DOT__x___05Fh60235) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh60236));
    vlTOPp->mac__DOT__y___05Fh449624 = ((IData)(vlTOPp->mac__DOT__y___05Fh449246) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh449245));
    vlTOPp->mac__DOT__mult_result___05Fh3498 = ((((IData)(vlTOPp->mac__DOT__x___05Fh60138) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh60139)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh59861) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh59862)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d773)));
    vlTOPp->mac__DOT__y___05Fh449526 = ((IData)(vlTOPp->mac__DOT__x___05Fh449623) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh449624));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775 
        = ((0x800U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh3498)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_10_THEN_IF_SEXT_r_ETC___05F_d741));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2044 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh449525) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh449526)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh449245) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh449246)))) 
                          << 0x22U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2043));
    vlTOPp->mac__DOT__y___05Fh449904 = ((IData)(vlTOPp->mac__DOT__y___05Fh449526) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh449525));
    vlTOPp->mac__DOT__x___05Fh64324 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 3U)));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq31 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                   >> 0xcU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x2000U : 0U);
    vlTOPp->mac__DOT__x___05Fh63772 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh449806 = ((IData)(vlTOPp->mac__DOT__x___05Fh449903) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh449904));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801 
        = ((0x2000U & (((IData)(vlTOPp->mac__DOT__x___05Fh63772) 
                        << 0xdU) ^ (0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq31)))) 
           | ((0x1000U & ((0xfffff000U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                          ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                             << 0xcU))) | ((0xffeU 
                                            & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775)) 
                                           | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq32)))));
    vlTOPp->mac__DOT__y___05Fh64144 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEX_ETC___05Fq31) 
                                        >> 0xdU) & (IData)(vlTOPp->mac__DOT__x___05Fh63772));
    vlTOPp->mac__DOT__y___05Fh450184 = ((IData)(vlTOPp->mac__DOT__y___05Fh449806) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh449805));
    vlTOPp->mac__DOT__y___05Fh64047 = ((IData)(vlTOPp->mac__DOT__x___05Fh64143) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh64144));
    vlTOPp->mac__DOT__y___05Fh450086 = ((IData)(vlTOPp->mac__DOT__x___05Fh450183) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450184));
    vlTOPp->mac__DOT__y___05Fh64422 = ((IData)(vlTOPp->mac__DOT__y___05Fh64047) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh64046));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2045 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450085) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh450086)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh449805) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh449806)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2044));
    vlTOPp->mac__DOT__y___05Fh450464 = ((IData)(vlTOPp->mac__DOT__y___05Fh450086) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450085));
    vlTOPp->mac__DOT__y___05Fh64325 = ((IData)(vlTOPp->mac__DOT__x___05Fh64421) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh64422));
    vlTOPp->mac__DOT__y___05Fh450366 = ((IData)(vlTOPp->mac__DOT__x___05Fh450463) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450464));
    vlTOPp->mac__DOT__mult_result___05Fh2965 = ((((IData)(vlTOPp->mac__DOT__x___05Fh64324) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh64325)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh64046) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh64047)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d801)));
    vlTOPp->mac__DOT__y___05Fh450744 = ((IData)(vlTOPp->mac__DOT__y___05Fh450366) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450365));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803 
        = ((0x1000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2965)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_11_THEN_IF_SEXT_r_ETC___05F_d775));
    vlTOPp->mac__DOT__y___05Fh450646 = ((IData)(vlTOPp->mac__DOT__x___05Fh450743) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450744));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34 
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
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq33 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                   >> 0xdU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x4000U : 0U);
    vlTOPp->mac__DOT__x___05Fh68230 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2046 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450645) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh450646)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450365) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh450366)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2045));
    vlTOPp->mac__DOT__y___05Fh451024 = ((IData)(vlTOPp->mac__DOT__y___05Fh450646) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450645));
    vlTOPp->mac__DOT__y___05Fh68602 = (((IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq33) 
                                        >> 0xeU) & (IData)(vlTOPp->mac__DOT__x___05Fh68230));
    vlTOPp->mac__DOT__y___05Fh450926 = ((IData)(vlTOPp->mac__DOT__x___05Fh451023) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451024));
    vlTOPp->mac__DOT__y___05Fh68505 = ((IData)(vlTOPp->mac__DOT__x___05Fh68601) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh68602));
    vlTOPp->mac__DOT__y___05Fh451304 = ((IData)(vlTOPp->mac__DOT__y___05Fh450926) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450925));
    vlTOPp->mac__DOT__mult_result___05Fh2432 = ((((IData)(vlTOPp->mac__DOT__x___05Fh68504) 
                                                  ^ (IData)(vlTOPp->mac__DOT__y___05Fh68505)) 
                                                 << 0xfU) 
                                                | ((0x4000U 
                                                    & (((IData)(vlTOPp->mac__DOT__x___05Fh68230) 
                                                        << 0xeU) 
                                                       ^ 
                                                       (0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq33)))) 
                                                   | ((0x2000U 
                                                       & ((0xffffe000U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                           << 0xdU))) 
                                                      | ((0x1ffeU 
                                                          & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803)) 
                                                         | (1U 
                                                            & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEX_ETC___05Fq34))))));
    vlTOPp->mac__DOT__y___05Fh451206 = ((IData)(vlTOPp->mac__DOT__x___05Fh451303) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451304));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824 
        = ((0x2000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh2432)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_12_THEN_IF_SEXT_r_ETC___05F_d803));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2047 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh451205) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh451206)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450925) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh450926)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2046));
    vlTOPp->mac__DOT__y___05Fh451584 = ((IData)(vlTOPp->mac__DOT__y___05Fh451206) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh451205));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq35 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                   >> 0xeU) & (IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22)))
            ? 0x8000U : 0U);
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq36 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh72683 = (1U & (((IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824) 
                                              >> 0xfU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh451486 = ((IData)(vlTOPp->mac__DOT__x___05Fh451583) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451584));
    vlTOPp->mac__DOT__mult_result___05Fh1899 = ((0x8000U 
                                                 & (((IData)(vlTOPp->mac__DOT__x___05Fh72683) 
                                                     << 0xfU) 
                                                    ^ 
                                                    (0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq35)))) 
                                                | ((0x4000U 
                                                    & ((0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                        << 0xeU))) 
                                                   | ((0x3ffeU 
                                                       & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824)) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEX_ETC___05Fq36)))));
    vlTOPp->mac__DOT__y___05Fh451864 = ((IData)(vlTOPp->mac__DOT__y___05Fh451486) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh451485));
    vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839 
        = ((0x4000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1899)
            : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_13_THEN_IF_SEXT_r_ETC___05F_d824));
    vlTOPp->mac__DOT__y___05Fh451766 = ((IData)(vlTOPp->mac__DOT__x___05Fh451863) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451864));
    vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq37 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839))
            ? 1U : 0U);
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2048 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh451765) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh451766)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh451485) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh451486)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2047));
    vlTOPp->mac__DOT__y___05Fh452144 = ((IData)(vlTOPp->mac__DOT__y___05Fh451766) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh451765));
    vlTOPp->mac__DOT__mult_result___05Fh1366 = ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__SEXT_rg_A_0_BITS_7_TO_0_1___05F_d22) 
                                                     << 0xfU))) 
                                                | ((0x7ffeU 
                                                    & (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839)) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEX_ETC___05Fq37))));
    vlTOPp->mac__DOT__y___05Fh452046 = ((IData)(vlTOPp->mac__DOT__x___05Fh452143) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh452144));
    vlTOPp->mac__DOT__x___05Fh1216 = ((0x8000U & (IData)(vlTOPp->mac__DOT__SEXT_rg_B_BITS_7_TO_0___05F___05Fd3))
                                       ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh1366)
                                       : (IData)(vlTOPp->mac__DOT__IF_SEXT_rg_B_BITS_7_TO_0_BIT_14_THEN_IF_SEXT_r_ETC___05F_d839));
    vlTOPp->mac__DOT__y___05Fh452424 = ((IData)(vlTOPp->mac__DOT__y___05Fh452046) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh452045));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
        = ((0xffff0000U & ((- (IData)((1U & ((IData)(vlTOPp->mac__DOT__x___05Fh1216) 
                                             >> 0xfU)))) 
                           << 0x10U)) | (IData)(vlTOPp->mac__DOT__x___05Fh1216));
    vlTOPp->mac__DOT__y___05Fh452326 = ((IData)(vlTOPp->mac__DOT__x___05Fh452423) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh452424));
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
    vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq53 
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
    vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq38 
        = ((1U & (vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                  & vlTOPp->mac__DOT__rg_C)) ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh77200 = (1U & ((vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d848 
                                              ^ vlTOPp->mac__DOT__rg_C) 
                                             >> 1U));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2049 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh452325) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh452326)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh452045) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh452046)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2048));
    vlTOPp->mac__DOT__y___05Fh452704 = ((IData)(vlTOPp->mac__DOT__y___05Fh452326) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh452325));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1072 
        = ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh77200) 
                   << 1U) ^ (0xfffffffeU & vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq38))) 
           | (1U & vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq53));
    vlTOPp->mac__DOT__y___05Fh77576 = ((vlTOPp->mac__DOT__IF_SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_I_ETC___05Fq38 
                                        >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh77200));
    vlTOPp->mac__DOT__y___05Fh452606 = ((IData)(vlTOPp->mac__DOT__x___05Fh452703) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh452704));
    vlTOPp->mac__DOT__y___05Fh77478 = ((IData)(vlTOPp->mac__DOT__x___05Fh77575) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77576));
    vlTOPp->mac__DOT__y___05Fh452984 = ((IData)(vlTOPp->mac__DOT__y___05Fh452606) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh452605));
    vlTOPp->mac__DOT__y___05Fh77857 = ((IData)(vlTOPp->mac__DOT__y___05Fh77478) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77477));
    vlTOPp->mac__DOT__y___05Fh452886 = ((IData)(vlTOPp->mac__DOT__x___05Fh452983) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh452984));
    vlTOPp->mac__DOT__y___05Fh77759 = ((IData)(vlTOPp->mac__DOT__x___05Fh77856) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77857));
    vlTOPp->mac__DOT__add_mant_Result___05Fh438578 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh452885) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh452886)))) 
            << 0x2fU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh452605) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh452606)))) 
                          << 0x2eU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_5_089_ETC___05F_d2049));
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1073 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh77758) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh77759)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh77477) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh77478)) 
                       << 2U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1072)));
    vlTOPp->mac__DOT__y___05Fh78137 = ((IData)(vlTOPp->mac__DOT__y___05Fh77759) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77758));
    vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_684_XOR_rg_B_BIT_15_685_68_ETC___05F_d2054 
        = (((1U & (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq48 
                   >> 0x1fU)) == (1U & (vlTOPp->mac__DOT__rg_C 
                                        >> 0x1fU)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh438578
            : vlTOPp->mac__DOT__add_mant_Result___05Fh453151);
    vlTOPp->mac__DOT__y___05Fh78039 = ((IData)(vlTOPp->mac__DOT__x___05Fh78136) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78137));
    vlTOPp->mac__DOT__spliced_bits___05Fh85926 = ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_684_XOR_rg_B_BIT_15_685_68_ETC___05F_d2054 
                                                              >> 0x2fU)))
                                                   ? (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh453182)
                                                   : (IData)(vlTOPp->mac__DOT__expA___05Fh85884));
    vlTOPp->mac__DOT__add_mant_Result___05Fh453179 
        = (0xfffffffffffeULL & (vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_684_XOR_rg_B_BIT_15_685_68_ETC___05F_d2054 
                                << 1U));
    vlTOPp->mac__DOT__add_mant_Result___05Fh455661 
        = (0xfffffffffffcULL & (vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_684_XOR_rg_B_BIT_15_685_68_ETC___05F_d2054 
                                << 2U));
    vlTOPp->mac__DOT__y___05Fh78417 = ((IData)(vlTOPp->mac__DOT__y___05Fh78039) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78038));
    vlTOPp->mac__DOT__add_mant_Result___05Fh85895 = 
        ((1U & (IData)((vlTOPp->mac__DOT__IF_IF_rg_A_0_BIT_15_684_XOR_rg_B_BIT_15_685_68_ETC___05F_d2054 
                        >> 0x2fU))) ? vlTOPp->mac__DOT__add_mant_Result___05Fh453179
          : vlTOPp->mac__DOT__add_mant_Result___05Fh455661);
    vlTOPp->mac__DOT__y___05Fh78319 = ((IData)(vlTOPp->mac__DOT__x___05Fh78416) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78417));
    vlTOPp->mac__DOT__IF_add_mant_Result5895_BIT_25_THEN_33554432_EL_ETC___05Fq50 
        = ((1U & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh85895 
                          >> 0x19U))) ? 0x2000000ULL
            : 0ULL);
    vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1074 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh78318) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh78319)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh78038) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh78039)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__SEXT_IF_SEXT_rg_B_BITS_7_TO_0_BIT_15_THEN_IF_S_ETC___05F_d1073)));
    vlTOPp->mac__DOT__y___05Fh78697 = ((IData)(vlTOPp->mac__DOT__y___05Fh78319) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78318));
    vlTOPp->mac__DOT__add_mant_Result___05F_1___05Fh455690 
        = (((QData)((IData)((0x3fffffU & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh85895 
                                                  >> 0x1aU))))) 
            << 0x1aU) | (QData)((IData)((0x3ffffffU 
                                         & (IData)(vlTOPp->mac__DOT__IF_add_mant_Result5895_BIT_25_THEN_33554432_EL_ETC___05Fq50)))));
    vlTOPp->mac__DOT__y___05Fh78599 = ((IData)(vlTOPp->mac__DOT__x___05Fh78696) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh78697));
    vlTOPp->mac__DOT__IF_add_mant_Result5895_BITS_24_TO_0_EQ_0_THEN___05FETC___05Fq54 
        = ((0U == (0x1ffffffU & (IData)(vlTOPp->mac__DOT__add_mant_Result___05Fh85895)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh85895
            : ((1U & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh85895 
                              >> 0x17U))) ? vlTOPp->mac__DOT__add_mant_Result___05F_1___05Fh455690
                : vlTOPp->mac__DOT__add_mant_Result___05Fh85895));
    vlTOPp->mac__DOT__y___05Fh78977 = ((IData)(vlTOPp->mac__DOT__y___05Fh78599) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh78598));
    vlTOPp->mac__DOT__rg_out_fp_D_IN = ((0x80000000U 
                                         & vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_BIT_6_088_THEN_IF_rg_B_BIT_ETC___05F_d1690) 
                                        | (((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh85926) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__IF_add_mant_Result5895_BITS_24_TO_0_EQ_0_THEN___05FETC___05Fq54 
                                                         >> 0x19U)))));
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

VL_INLINE_OPT void Vtop::_combo__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mac__DOT__rg_select_EN = vlTOPp->EN_get_select;
    vlTOPp->mac__DOT__rg_select_D_IN = vlTOPp->get_select_s;
    vlTOPp->mac__DOT__rg_C_EN = vlTOPp->EN_get_C;
    vlTOPp->mac__DOT__rg_C_D_IN = vlTOPp->get_C_c;
    vlTOPp->mac__DOT__rg_B_EN = vlTOPp->EN_get_B;
    vlTOPp->mac__DOT__rg_B_D_IN = vlTOPp->get_B_b;
    vlTOPp->mac__DOT__rg_A_EN = vlTOPp->EN_get_A;
    vlTOPp->mac__DOT__rg_A_D_IN = vlTOPp->get_A_a;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_get_A & 0xfeU))) {
        Verilated::overWidthError("EN_get_A");}
    if (VL_UNLIKELY((EN_get_B & 0xfeU))) {
        Verilated::overWidthError("EN_get_B");}
    if (VL_UNLIKELY((EN_get_C & 0xfeU))) {
        Verilated::overWidthError("EN_get_C");}
    if (VL_UNLIKELY((get_select_s & 0xfeU))) {
        Verilated::overWidthError("get_select_s");}
    if (VL_UNLIKELY((EN_get_select & 0xfeU))) {
        Verilated::overWidthError("EN_get_select");}
    if (VL_UNLIKELY((EN_result & 0xfeU))) {
        Verilated::overWidthError("EN_result");}
}
#endif  // VL_DEBUG
