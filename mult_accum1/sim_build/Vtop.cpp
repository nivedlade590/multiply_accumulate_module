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
        if (vlTOPp->mac__DOT__rg_out_int_EN) {
            vlTOPp->mac__DOT__rg_out_int = vlTOPp->mac__DOT__rg_out_int_D_IN;
        }
    } else {
        vlTOPp->mac__DOT__rg_out_int = 0U;
    }
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
    vlTOPp->mac__DOT__INV_rg_C___05Fq5 = (~ vlTOPp->mac__DOT__rg_C);
    vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1 
        = (0xffU & (~ (IData)(vlTOPp->mac__DOT__rg_B)));
    vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq42 
        = ((0x8000U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                       ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__x___05Fh454044 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xeU));
    vlTOPp->mac__DOT__x___05Fh454140 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh453770 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh453866 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh453496 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xcU));
    vlTOPp->mac__DOT__x___05Fh453592 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh453222 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh453318 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq8 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     ^ (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh452948 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 0xaU));
    vlTOPp->mac__DOT__x___05Fh453044 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh452673 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 9U));
    vlTOPp->mac__DOT__x___05Fh452769 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               & (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq7 
        = ((0x80U & ((IData)(vlTOPp->mac__DOT__rg_A) 
                     & (IData)(vlTOPp->mac__DOT__rg_B)))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh452402 = (1U & (((IData)(vlTOPp->mac__DOT__rg_A) 
                                               ^ (IData)(vlTOPp->mac__DOT__rg_B)) 
                                              >> 8U));
    vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3 
        = (0xffU & (~ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__mantissa_result___05Fh116337 
        = (0x8000000000ULL | ((QData)((IData)((0x7fU 
                                               & (IData)(vlTOPp->mac__DOT__rg_A)))) 
                              << 0x20U));
    vlTOPp->result = vlTOPp->mac__DOT__result;
    if ((1U & vlTOPp->mac__DOT__INV_rg_C___05Fq5)) {
        vlTOPp->mac__DOT__IF_INV_INV_rg_C_BIT_0_THEN_1_ELSE_0___05Fq12 = 0U;
        vlTOPp->mac__DOT__IF_INV_rg_C_BIT_0_THEN_2_ELSE_0___05Fq6 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_INV_rg_C_BIT_0_THEN_1_ELSE_0___05Fq12 = 1U;
        vlTOPp->mac__DOT__IF_INV_rg_C_BIT_0_THEN_2_ELSE_0___05Fq6 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1))) {
        vlTOPp->mac__DOT__IF_INV_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq13 = 0U;
        vlTOPp->mac__DOT__IF_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq2 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq13 = 1U;
        vlTOPp->mac__DOT__IF_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq2 = 0U;
    }
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05Fq8))) {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq10 = 0U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq9 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq10 = 1U;
        vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq9 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh454695 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh452402) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq7) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh452770 = (((IData)(vlTOPp->mac__DOT__IF_rg_A_BIT_7_AND_rg_B_BIT_7_THEN_2_ELSE_0___05Fq7) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh452402));
    if ((1U & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3))) {
        vlTOPp->mac__DOT__IF_INV_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq14 = 0U;
        vlTOPp->mac__DOT__IF_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq4 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq14 = 1U;
        vlTOPp->mac__DOT__IF_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq4 = 0U;
    }
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
        = ((1U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh116337
            : 0ULL);
    vlTOPp->mac__DOT__y___05Fh79584 = (1U & ((vlTOPp->mac__DOT__IF_INV_rg_C_BIT_0_THEN_2_ELSE_0___05Fq6 
                                              & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                             >> 1U));
    vlTOPp->mac__DOT__y___05Fh22833 = (1U & (((IData)(vlTOPp->mac__DOT__IF_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq2) 
                                              & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                             >> 1U));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq10))) {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq39 = 0U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq11 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq39 = 1U;
        vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq11 = 0U;
    }
    vlTOPp->mac__DOT__x___05Fh456990 = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh454695) 
                                              ^ ((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq9) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh454968 = (((IData)(vlTOPp->mac__DOT__IF_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELSE_0___05FETC___05Fq9) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh454695));
    vlTOPp->mac__DOT__y___05Fh452674 = ((IData)(vlTOPp->mac__DOT__x___05Fh452769) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh452770));
    vlTOPp->mac__DOT__y___05Fh72272 = (1U & (((IData)(vlTOPp->mac__DOT__IF_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq4) 
                                              & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                             >> 1U));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_B_ETC___05Fq33 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh369788 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x21U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh371727 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh371824 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh371450 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh371547 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh371173 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh371270 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh370896 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh370993 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh370619 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh370716 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x23U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh370342 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x23U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh370439 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x22U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh370065 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x22U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh370066 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x21U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh79866 = ((IData)(vlTOPp->mac__DOT__y___05Fh79584) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 2U));
    vlTOPp->mac__DOT__y___05Fh23115 = ((IData)(vlTOPp->mac__DOT__y___05Fh22833) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                          >> 2U));
    vlTOPp->mac__DOT__y___05Fh457263 = (((IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq11) 
                                         >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh456990));
    vlTOPp->mac__DOT__x___05Fh454967 = ((IData)(vlTOPp->mac__DOT__x___05Fh452673) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh452674));
    vlTOPp->mac__DOT__y___05Fh453045 = ((IData)(vlTOPp->mac__DOT__y___05Fh452674) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh452673));
    vlTOPp->mac__DOT__y___05Fh72554 = ((IData)(vlTOPp->mac__DOT__y___05Fh72272) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                          >> 2U));
    vlTOPp->mac__DOT__y___05Fh370440 = ((IData)(vlTOPp->mac__DOT__y___05Fh370066) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh370065));
    vlTOPp->mac__DOT__INV_rg_C_BIT_3_2_XOR_IF_INV_rg_C_BIT_0_THEN_2___05FETC___05F_d103 
        = ((8U & ((0xfffffff8U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh79866) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh79584) 
                                           << 2U))) 
                                 | ((2U & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                           ^ vlTOPp->mac__DOT__IF_INV_rg_C_BIT_0_THEN_2_ELSE_0___05Fq6)) 
                                    | (1U & vlTOPp->mac__DOT__IF_INV_INV_rg_C_BIT_0_THEN_1_ELSE_0___05Fq12))));
    vlTOPp->mac__DOT__y___05Fh80147 = ((IData)(vlTOPp->mac__DOT__y___05Fh79866) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 3U));
    vlTOPp->mac__DOT__INV_rg_B_20_BITS_7_TO_0_22_23_BIT_3_32_XOR_IF___05FETC___05F_d151 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh23115) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh22833) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq2))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_INV_rg_B_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq13)))));
    vlTOPp->mac__DOT__y___05Fh23396 = ((IData)(vlTOPp->mac__DOT__y___05Fh23115) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                          >> 3U));
    vlTOPp->mac__DOT__x___05Fh457262 = ((IData)(vlTOPp->mac__DOT__x___05Fh454967) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh454968));
    vlTOPp->mac__DOT__y___05Fh455243 = ((IData)(vlTOPp->mac__DOT__y___05Fh454968) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh454967));
    vlTOPp->mac__DOT__y___05Fh452949 = ((IData)(vlTOPp->mac__DOT__x___05Fh453044) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh453045));
    vlTOPp->mac__DOT__INV_rg_A_63_BITS_7_TO_0_65_66_BIT_3_75_XOR_IF___05FETC___05F_d194 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh72554) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh72272) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_2_ELSE_0___05Fq4))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_INV_rg_A_BITS_7_TO_0_BIT_0_THEN_1_ELSE_0___05Fq14)))));
    vlTOPp->mac__DOT__y___05Fh72835 = ((IData)(vlTOPp->mac__DOT__y___05Fh72554) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                          >> 3U));
    vlTOPp->mac__DOT__y___05Fh370343 = ((IData)(vlTOPp->mac__DOT__x___05Fh370439) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh370440));
    vlTOPp->mac__DOT__y___05Fh80428 = ((IData)(vlTOPp->mac__DOT__y___05Fh80147) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 4U));
    vlTOPp->mac__DOT__y___05Fh23677 = ((IData)(vlTOPp->mac__DOT__y___05Fh23396) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                          >> 4U));
    vlTOPp->mac__DOT__y___05Fh457538 = ((IData)(vlTOPp->mac__DOT__y___05Fh457263) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh457262));
    vlTOPp->mac__DOT__x___05Fh455242 = ((IData)(vlTOPp->mac__DOT__x___05Fh452948) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh452949));
    vlTOPp->mac__DOT__y___05Fh453319 = ((IData)(vlTOPp->mac__DOT__y___05Fh452949) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh452948));
    vlTOPp->mac__DOT__y___05Fh73116 = ((IData)(vlTOPp->mac__DOT__y___05Fh72835) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                          >> 4U));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1069 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh370342) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh370343)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh370065) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh370066)))) 
                          << 0x22U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh369788)) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                          >> 1U))) 
                                         << 1U) | (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_B_ETC___05Fq33))))))));
    vlTOPp->mac__DOT__y___05Fh370717 = ((IData)(vlTOPp->mac__DOT__y___05Fh370343) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh370342));
    vlTOPp->mac__DOT__y___05Fh80709 = ((IData)(vlTOPp->mac__DOT__y___05Fh80428) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 5U));
    vlTOPp->mac__DOT__y___05Fh23958 = ((IData)(vlTOPp->mac__DOT__y___05Fh23677) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                          >> 5U));
    vlTOPp->mac__DOT__x___05Fh457537 = ((IData)(vlTOPp->mac__DOT__x___05Fh455242) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh455243));
    vlTOPp->mac__DOT__y___05Fh455517 = ((IData)(vlTOPp->mac__DOT__y___05Fh455243) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh455242));
    vlTOPp->mac__DOT__y___05Fh453223 = ((IData)(vlTOPp->mac__DOT__x___05Fh453318) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh453319));
    vlTOPp->mac__DOT__y___05Fh73397 = ((IData)(vlTOPp->mac__DOT__y___05Fh73116) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                          >> 5U));
    vlTOPp->mac__DOT__y___05Fh370620 = ((IData)(vlTOPp->mac__DOT__x___05Fh370716) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh370717));
    vlTOPp->mac__DOT__y___05Fh80990 = ((IData)(vlTOPp->mac__DOT__y___05Fh80709) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 6U));
    vlTOPp->mac__DOT__y___05Fh24239 = ((IData)(vlTOPp->mac__DOT__y___05Fh23958) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1) 
                                          >> 6U));
    vlTOPp->mac__DOT__rg_A_63_BIT_10_461_XOR_rg_B_20_BIT_10_462_479___05FETC___05F_d1539 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh457537) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh457538)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh457262) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh457263)) 
                       << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh456990) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1___05FETC___05Fq11)))) 
                                 | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THE_ETC___05Fq39)))));
    vlTOPp->mac__DOT__y___05Fh457812 = ((IData)(vlTOPp->mac__DOT__y___05Fh457538) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh457537));
    vlTOPp->mac__DOT__x___05Fh455516 = ((IData)(vlTOPp->mac__DOT__x___05Fh453222) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh453223));
    vlTOPp->mac__DOT__y___05Fh453593 = ((IData)(vlTOPp->mac__DOT__y___05Fh453223) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh453222));
    vlTOPp->mac__DOT__y___05Fh73678 = ((IData)(vlTOPp->mac__DOT__y___05Fh73397) 
                                       & ((IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3) 
                                          >> 6U));
    vlTOPp->mac__DOT__y___05Fh370994 = ((IData)(vlTOPp->mac__DOT__y___05Fh370620) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh370619));
    vlTOPp->mac__DOT__INV_rg_C_BIT_7_0_XOR_IF_INV_rg_C_BIT_0_THEN_2___05FETC___05F_d105 
        = ((0x80U & ((0xffffff80U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                     ^ ((IData)(vlTOPp->mac__DOT__y___05Fh80990) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh80709) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh80428) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh80147) 
                                               << 4U))) 
                                          | (IData)(vlTOPp->mac__DOT__INV_rg_C_BIT_3_2_XOR_IF_INV_rg_C_BIT_0_THEN_2___05FETC___05F_d103)))));
    vlTOPp->mac__DOT__y___05Fh81271 = ((IData)(vlTOPp->mac__DOT__y___05Fh80990) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 7U));
    vlTOPp->mac__DOT__p___05Fh22157 = ((0x80U & ((0xffffff80U 
                                                  & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh24239) 
                                                  << 7U))) 
                                       | ((0x40U & 
                                           ((0xffffffc0U 
                                             & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh23958) 
                                               << 6U))) 
                                          | ((0x20U 
                                              & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh23677) 
                                                  << 5U))) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & (IData)(vlTOPp->mac__DOT__INV_rg_B_BITS_7_TO_0___05Fq1)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh23396) 
                                                     << 4U))) 
                                                | (IData)(vlTOPp->mac__DOT__INV_rg_B_20_BITS_7_TO_0_22_23_BIT_3_32_XOR_IF___05FETC___05F_d151)))));
    vlTOPp->mac__DOT__x___05Fh457811 = ((IData)(vlTOPp->mac__DOT__x___05Fh455516) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh455517));
    vlTOPp->mac__DOT__y___05Fh455791 = ((IData)(vlTOPp->mac__DOT__y___05Fh455517) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh455516));
    vlTOPp->mac__DOT__y___05Fh453497 = ((IData)(vlTOPp->mac__DOT__x___05Fh453592) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh453593));
    vlTOPp->mac__DOT__p___05Fh71596 = ((0x80U & ((0xffffff80U 
                                                  & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh73678) 
                                                  << 7U))) 
                                       | ((0x40U & 
                                           ((0xffffffc0U 
                                             & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh73397) 
                                               << 6U))) 
                                          | ((0x20U 
                                              & ((0xffffffe0U 
                                                  & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh73116) 
                                                  << 5U))) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & (IData)(vlTOPp->mac__DOT__INV_rg_A_BITS_7_TO_0___05Fq3)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh72835) 
                                                     << 4U))) 
                                                | (IData)(vlTOPp->mac__DOT__INV_rg_A_63_BITS_7_TO_0_65_66_BIT_3_75_XOR_IF___05FETC___05F_d194)))));
    vlTOPp->mac__DOT__y___05Fh370897 = ((IData)(vlTOPp->mac__DOT__x___05Fh370993) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh370994));
    vlTOPp->mac__DOT__y___05Fh81552 = ((IData)(vlTOPp->mac__DOT__y___05Fh81271) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 8U));
    vlTOPp->mac__DOT__spliced_bits___05Fh22063 = (0xffU 
                                                  & ((0x80U 
                                                      & (IData)(vlTOPp->mac__DOT__rg_B))
                                                      ? (IData)(vlTOPp->mac__DOT__p___05Fh22157)
                                                      : (IData)(vlTOPp->mac__DOT__rg_B)));
    vlTOPp->mac__DOT__y___05Fh458086 = ((IData)(vlTOPp->mac__DOT__y___05Fh457812) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh457811));
    vlTOPp->mac__DOT__x___05Fh455790 = ((IData)(vlTOPp->mac__DOT__x___05Fh453496) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh453497));
    vlTOPp->mac__DOT__y___05Fh453867 = ((IData)(vlTOPp->mac__DOT__y___05Fh453497) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh453496));
    vlTOPp->mac__DOT__spliced_bits___05Fh71502 = (0xffU 
                                                  & ((0x80U 
                                                      & (IData)(vlTOPp->mac__DOT__rg_A))
                                                      ? (IData)(vlTOPp->mac__DOT__p___05Fh71596)
                                                      : (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1070 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh370896) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh370897)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh370619) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh370620)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1069));
    vlTOPp->mac__DOT__y___05Fh371271 = ((IData)(vlTOPp->mac__DOT__y___05Fh370897) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh370896));
    vlTOPp->mac__DOT__y___05Fh81833 = ((IData)(vlTOPp->mac__DOT__y___05Fh81552) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 9U));
    vlTOPp->mac__DOT__x___05Fh458085 = ((IData)(vlTOPp->mac__DOT__x___05Fh455790) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh455791));
    vlTOPp->mac__DOT__y___05Fh456065 = ((IData)(vlTOPp->mac__DOT__y___05Fh455791) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh455790));
    vlTOPp->mac__DOT__y___05Fh453771 = ((IData)(vlTOPp->mac__DOT__x___05Fh453866) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh453867));
    vlTOPp->mac__DOT__IF_spliced_bits1502_BIT_0_THEN_1_ELSE_0___05Fq15 
        = ((1U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502))
            ? 1U : 0U);
    vlTOPp->mac__DOT__y___05Fh371174 = ((IData)(vlTOPp->mac__DOT__x___05Fh371270) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh371271));
    vlTOPp->mac__DOT__y___05Fh82114 = ((IData)(vlTOPp->mac__DOT__y___05Fh81833) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xaU));
    vlTOPp->mac__DOT__rg_A_63_BIT_12_455_XOR_rg_B_20_BIT_12_456_485___05FETC___05F_d1540 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh458085) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh458086)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh457811) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh457812)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__rg_A_63_BIT_10_461_XOR_rg_B_20_BIT_10_462_479___05FETC___05F_d1539)));
    vlTOPp->mac__DOT__y___05Fh458360 = ((IData)(vlTOPp->mac__DOT__y___05Fh458086) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh458085));
    vlTOPp->mac__DOT__x___05Fh456064 = ((IData)(vlTOPp->mac__DOT__x___05Fh453770) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh453771));
    vlTOPp->mac__DOT__y___05Fh454141 = ((IData)(vlTOPp->mac__DOT__y___05Fh453771) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh453770));
    vlTOPp->mac__DOT__mult_result___05Fh24510 = ((0xfeU 
                                                  & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)) 
                                                 | (1U 
                                                    & (IData)(vlTOPp->mac__DOT__IF_spliced_bits1502_BIT_0_THEN_1_ELSE_0___05Fq15)));
    vlTOPp->mac__DOT__y___05Fh371548 = ((IData)(vlTOPp->mac__DOT__y___05Fh371174) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh371173));
    vlTOPp->mac__DOT__INV_rg_C_BIT_11_8_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d107 
        = ((0x800U & ((0xfffff800U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh82114) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh81833) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                            ^ ((IData)(vlTOPp->mac__DOT__y___05Fh81552) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh81271) 
                                                  << 8U))) 
                                             | (IData)(vlTOPp->mac__DOT__INV_rg_C_BIT_7_0_XOR_IF_INV_rg_C_BIT_0_THEN_2___05FETC___05F_d105)))));
    vlTOPp->mac__DOT__y___05Fh82395 = ((IData)(vlTOPp->mac__DOT__y___05Fh82114) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xbU));
    vlTOPp->mac__DOT__x___05Fh458359 = ((IData)(vlTOPp->mac__DOT__x___05Fh456064) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh456065));
    vlTOPp->mac__DOT__y___05Fh456339 = ((IData)(vlTOPp->mac__DOT__y___05Fh456065) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh456064));
    vlTOPp->mac__DOT__y___05Fh454045 = ((IData)(vlTOPp->mac__DOT__x___05Fh454140) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh454141));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203 
        = ((1U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh24510)
            : 0U);
    vlTOPp->mac__DOT__y___05Fh371451 = ((IData)(vlTOPp->mac__DOT__x___05Fh371547) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh371548));
    vlTOPp->mac__DOT__y___05Fh82676 = ((IData)(vlTOPp->mac__DOT__y___05Fh82395) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh458634 = ((IData)(vlTOPp->mac__DOT__y___05Fh458360) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh458359));
    vlTOPp->mac__DOT__x___05Fh456338 = (1U & (~ ((IData)(vlTOPp->mac__DOT__x___05Fh454044) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh454045))));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq17 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh36407 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh36033 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh36130 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh35756 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh35853 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh35479 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh35576 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh35202 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh35299 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh34925 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh35022 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh34647 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh34744 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 2U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq16 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                   >> 1U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 4U : 0U);
    vlTOPp->mac__DOT__x___05Fh34373 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                              >> 2U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1071 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh371450) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh371451)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh371173) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh371174)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1070));
    vlTOPp->mac__DOT__y___05Fh371825 = ((IData)(vlTOPp->mac__DOT__y___05Fh371451) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh371450));
    vlTOPp->mac__DOT__y___05Fh82957 = ((IData)(vlTOPp->mac__DOT__y___05Fh82676) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xdU));
    vlTOPp->mac__DOT__x___05Fh458633 = ((IData)(vlTOPp->mac__DOT__x___05Fh456338) 
                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh456339));
    vlTOPp->mac__DOT__y___05Fh34745 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq16) 
                                        >> 2U) & (IData)(vlTOPp->mac__DOT__x___05Fh34373));
    vlTOPp->mac__DOT__y___05Fh371728 = ((IData)(vlTOPp->mac__DOT__x___05Fh371824) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh371825));
    vlTOPp->mac__DOT__y___05Fh83238 = ((IData)(vlTOPp->mac__DOT__y___05Fh82957) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xeU));
    vlTOPp->mac__DOT__spliced_bits___05Fh451839 = (
                                                   (((IData)(vlTOPp->mac__DOT__x___05Fh458633) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh458634)) 
                                                    << 7U) 
                                                   | ((((IData)(vlTOPp->mac__DOT__x___05Fh458359) 
                                                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh458360)) 
                                                       << 6U) 
                                                      | (IData)(vlTOPp->mac__DOT__rg_A_63_BIT_12_455_XOR_rg_B_20_BIT_12_456_485___05FETC___05F_d1540)));
    vlTOPp->mac__DOT__spliced_bits___05Fh451866 = (
                                                   ((IData)(vlTOPp->mac__DOT__x___05Fh458633) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->mac__DOT__x___05Fh458359) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->mac__DOT__x___05Fh458085) 
                                                          << 5U) 
                                                         | (((IData)(vlTOPp->mac__DOT__x___05Fh457811) 
                                                             << 4U) 
                                                            | (((IData)(vlTOPp->mac__DOT__x___05Fh457537) 
                                                                << 3U) 
                                                               | (((IData)(vlTOPp->mac__DOT__x___05Fh457262) 
                                                                   << 2U) 
                                                                  | (((IData)(vlTOPp->mac__DOT__x___05Fh456990) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(vlTOPp->mac__DOT__IF_INV_IF_rg_A_BIT_7_XOR_rg_B_BIT_7_THEN_1_ELS_ETC___05Fq10)))))))));
    vlTOPp->mac__DOT__y___05Fh34648 = ((IData)(vlTOPp->mac__DOT__x___05Fh34744) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh34745));
    vlTOPp->mac__DOT__y___05Fh372102 = ((IData)(vlTOPp->mac__DOT__y___05Fh371728) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh371727));
    vlTOPp->mac__DOT__INV_rg_C_BIT_15_6_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d109 
        = ((0x8000U & ((0xffff8000U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh83238) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh82957) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh82676) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh82395) 
                                                   << 0xcU))) 
                                              | (IData)(vlTOPp->mac__DOT__INV_rg_C_BIT_11_8_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d107)))));
    vlTOPp->mac__DOT__y___05Fh83519 = ((IData)(vlTOPp->mac__DOT__y___05Fh83238) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0xfU));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d282 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh34647) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh34648)) 
            << 3U) | ((4U & (((IData)(vlTOPp->mac__DOT__x___05Fh34373) 
                              << 2U) ^ (0xfffffffcU 
                                        & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq16)))) 
                      | ((2U & ((0xfffffffeU & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                   << 1U))) | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq17)))));
    vlTOPp->mac__DOT__y___05Fh35023 = ((IData)(vlTOPp->mac__DOT__y___05Fh34648) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34647));
    vlTOPp->mac__DOT__y___05Fh372005 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                       >> 0x28U)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh372102)));
    vlTOPp->mac__DOT__y___05Fh83800 = ((IData)(vlTOPp->mac__DOT__y___05Fh83519) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x10U));
    vlTOPp->mac__DOT__y___05Fh34926 = ((IData)(vlTOPp->mac__DOT__x___05Fh35022) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35023));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1072 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh372005))))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh371727) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh371728)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1071));
    vlTOPp->mac__DOT__y___05Fh372282 = ((IData)(vlTOPp->mac__DOT__y___05Fh372005) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x29U)));
    vlTOPp->mac__DOT__y___05Fh84081 = ((IData)(vlTOPp->mac__DOT__y___05Fh83800) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x11U));
    vlTOPp->mac__DOT__y___05Fh35300 = ((IData)(vlTOPp->mac__DOT__y___05Fh34926) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh34925));
    vlTOPp->mac__DOT__y___05Fh372559 = ((IData)(vlTOPp->mac__DOT__y___05Fh372282) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x2aU)));
    vlTOPp->mac__DOT__y___05Fh84362 = ((IData)(vlTOPp->mac__DOT__y___05Fh84081) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x12U));
    vlTOPp->mac__DOT__y___05Fh35203 = ((IData)(vlTOPp->mac__DOT__x___05Fh35299) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35300));
    vlTOPp->mac__DOT__y___05Fh372836 = ((IData)(vlTOPp->mac__DOT__y___05Fh372559) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__INV_rg_C_BIT_19_4_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d111 
        = ((0x80000U & ((0xfff80000U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh84362) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh84081) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh83800) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh83519) 
                                                     << 0x10U))) 
                                                | (IData)(vlTOPp->mac__DOT__INV_rg_C_BIT_15_6_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d109)))));
    vlTOPp->mac__DOT__y___05Fh84643 = ((IData)(vlTOPp->mac__DOT__y___05Fh84362) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x13U));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d283 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh35202) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh35203)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh34925) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh34926)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d282)));
    vlTOPp->mac__DOT__y___05Fh35577 = ((IData)(vlTOPp->mac__DOT__y___05Fh35203) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh35202));
    vlTOPp->mac__DOT__y___05Fh373113 = ((IData)(vlTOPp->mac__DOT__y___05Fh372836) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh84924 = ((IData)(vlTOPp->mac__DOT__y___05Fh84643) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x14U));
    vlTOPp->mac__DOT__y___05Fh35480 = ((IData)(vlTOPp->mac__DOT__x___05Fh35576) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35577));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1074 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh373113))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh372836))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh372559))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh372282))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1072))));
    vlTOPp->mac__DOT__y___05Fh373390 = ((IData)(vlTOPp->mac__DOT__y___05Fh373113) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__y___05Fh85205 = ((IData)(vlTOPp->mac__DOT__y___05Fh84924) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x15U));
    vlTOPp->mac__DOT__y___05Fh35854 = ((IData)(vlTOPp->mac__DOT__y___05Fh35480) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh35479));
    vlTOPp->mac__DOT__y___05Fh373667 = ((IData)(vlTOPp->mac__DOT__y___05Fh373390) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh85486 = ((IData)(vlTOPp->mac__DOT__y___05Fh85205) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x16U));
    vlTOPp->mac__DOT__y___05Fh35757 = ((IData)(vlTOPp->mac__DOT__x___05Fh35853) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh35854));
    vlTOPp->mac__DOT__mantissa_result___05Fh114964 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh373667))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh373390))))) 
                          << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d1074));
    vlTOPp->mac__DOT__INV_rg_C_BIT_23_2_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d113 
        = ((0x800000U & ((0xff800000U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                         ^ ((IData)(vlTOPp->mac__DOT__y___05Fh85486) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh85205) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh84924) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mac__DOT__y___05Fh84643) 
                                                      << 0x14U))) 
                                                 | vlTOPp->mac__DOT__INV_rg_C_BIT_19_4_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d111))));
    vlTOPp->mac__DOT__y___05Fh85767 = ((IData)(vlTOPp->mac__DOT__y___05Fh85486) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x17U));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d284 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh35756) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh35757)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh35479) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh35480)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d283)));
    vlTOPp->mac__DOT__y___05Fh36131 = ((IData)(vlTOPp->mac__DOT__y___05Fh35757) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh35756));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
        = ((2U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh114964
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_0_89_THEN_1_CONCAT_rg_A_63_BITS_ETC___05F_d992);
    vlTOPp->mac__DOT__y___05Fh86048 = ((IData)(vlTOPp->mac__DOT__y___05Fh85767) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x18U));
    vlTOPp->mac__DOT__y___05Fh36034 = ((IData)(vlTOPp->mac__DOT__x___05Fh36130) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh36131));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_8_ETC___05Fq34 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh383061 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x22U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh385000 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh385097 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh384723 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh384820 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh384446 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh384543 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh384169 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh384266 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh383892 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh383989 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh383615 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh383712 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x23U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh383338 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x23U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh383339 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x22U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh86329 = ((IData)(vlTOPp->mac__DOT__y___05Fh86048) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x19U));
    vlTOPp->mac__DOT__y___05Fh36408 = ((IData)(vlTOPp->mac__DOT__y___05Fh36034) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh36033));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1143 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh383338) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh383339)))) 
            << 0x23U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh383061)) 
                          << 0x22U) | ((0x3fffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_8_ETC___05Fq34)))))));
    vlTOPp->mac__DOT__y___05Fh383713 = ((IData)(vlTOPp->mac__DOT__y___05Fh383339) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh383338));
    vlTOPp->mac__DOT__y___05Fh86610 = ((IData)(vlTOPp->mac__DOT__y___05Fh86329) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x1aU));
    vlTOPp->mac__DOT__y___05Fh36311 = ((IData)(vlTOPp->mac__DOT__x___05Fh36407) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh36408));
    vlTOPp->mac__DOT__y___05Fh383616 = ((IData)(vlTOPp->mac__DOT__x___05Fh383712) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh383713));
    vlTOPp->mac__DOT__INV_rg_C_BIT_27_0_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d115 
        = ((0x8000000U & ((0xf8000000U & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh86610) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                ^ ((IData)(vlTOPp->mac__DOT__y___05Fh86329) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mac__DOT__y___05Fh86048) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mac__DOT__y___05Fh85767) 
                                                       << 0x18U))) 
                                                  | vlTOPp->mac__DOT__INV_rg_C_BIT_23_2_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d113))));
    vlTOPp->mac__DOT__y___05Fh86891 = ((IData)(vlTOPp->mac__DOT__y___05Fh86610) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x1bU));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d285 
        = ((0x200U & ((0xfffffe00U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh36311) 
                         << 9U))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh36033) 
                                       ^ (IData)(vlTOPp->mac__DOT__y___05Fh36034)) 
                                      << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d284)));
    vlTOPp->mac__DOT__y___05Fh36588 = ((IData)(vlTOPp->mac__DOT__y___05Fh36311) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 9U));
    vlTOPp->mac__DOT__y___05Fh383990 = ((IData)(vlTOPp->mac__DOT__y___05Fh383616) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh383615));
    vlTOPp->mac__DOT__y___05Fh87172 = ((IData)(vlTOPp->mac__DOT__y___05Fh86891) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x1cU));
    vlTOPp->mac__DOT__y___05Fh36865 = ((IData)(vlTOPp->mac__DOT__y___05Fh36588) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh383893 = ((IData)(vlTOPp->mac__DOT__x___05Fh383989) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh383990));
    vlTOPp->mac__DOT__y___05Fh87453 = ((IData)(vlTOPp->mac__DOT__y___05Fh87172) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x1dU));
    vlTOPp->mac__DOT__y___05Fh37142 = ((IData)(vlTOPp->mac__DOT__y___05Fh36865) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1144 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh383892) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh383893)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh383615) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh383616)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1143));
    vlTOPp->mac__DOT__y___05Fh384267 = ((IData)(vlTOPp->mac__DOT__y___05Fh383893) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh383892));
    vlTOPp->mac__DOT__y___05Fh87734 = ((IData)(vlTOPp->mac__DOT__y___05Fh87453) 
                                       & (vlTOPp->mac__DOT__INV_rg_C___05Fq5 
                                          >> 0x1eU));
    vlTOPp->mac__DOT__y___05Fh37419 = ((IData)(vlTOPp->mac__DOT__y___05Fh37142) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh384170 = ((IData)(vlTOPp->mac__DOT__x___05Fh384266) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh384267));
    vlTOPp->mac__DOT__p___05Fh78164 = ((0x80000000U 
                                        & ((0x80000000U 
                                            & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                           ^ ((IData)(vlTOPp->mac__DOT__y___05Fh87734) 
                                              << 0x1fU))) 
                                       | ((0x40000000U 
                                           & ((0xc0000000U 
                                               & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                              ^ ((IData)(vlTOPp->mac__DOT__y___05Fh87453) 
                                                 << 0x1eU))) 
                                          | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mac__DOT__y___05Fh87172) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlTOPp->mac__DOT__INV_rg_C___05Fq5) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh86891) 
                                                     << 0x1cU))) 
                                                | vlTOPp->mac__DOT__INV_rg_C_BIT_27_0_XOR_IF_INV_rg_C_BIT_0_THEN_2_ETC___05F_d115))));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d287 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh37419) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh37142) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh36865) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh36588) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d285)))));
    vlTOPp->mac__DOT__y___05Fh37696 = ((IData)(vlTOPp->mac__DOT__y___05Fh37419) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh384544 = ((IData)(vlTOPp->mac__DOT__y___05Fh384170) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh384169));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
        = ((0x80000000U & vlTOPp->mac__DOT__rg_C) ? vlTOPp->mac__DOT__p___05Fh78164
            : vlTOPp->mac__DOT__rg_C);
    vlTOPp->mac__DOT__y___05Fh37973 = ((IData)(vlTOPp->mac__DOT__y___05Fh37696) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh384447 = ((IData)(vlTOPp->mac__DOT__x___05Fh384543) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh384544));
    vlTOPp->mac__DOT__mult_result___05Fh21554 = ((0x8000U 
                                                  & ((0xffff8000U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mac__DOT__y___05Fh37973) 
                                                      << 0xfU))) 
                                                 | ((0x4000U 
                                                     & ((0xffffc000U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203)) 
                                                        ^ 
                                                        ((IData)(vlTOPp->mac__DOT__y___05Fh37696) 
                                                         << 0xeU))) 
                                                    | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d287)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1145 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh384446) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh384447)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh384169) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh384170)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1144));
    vlTOPp->mac__DOT__y___05Fh384821 = ((IData)(vlTOPp->mac__DOT__y___05Fh384447) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh384446));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289 
        = ((2U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh21554)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d203));
    vlTOPp->mac__DOT__y___05Fh384724 = ((IData)(vlTOPp->mac__DOT__x___05Fh384820) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh384821));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq19 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh43343 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh42969 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh43066 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh42692 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh42789 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh42415 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh42512 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh42138 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh42235 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh41861 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh41958 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh41583 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh41680 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 3U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq18 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                   >> 2U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 8U : 0U);
    vlTOPp->mac__DOT__x___05Fh41309 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                              >> 3U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh385098 = ((IData)(vlTOPp->mac__DOT__y___05Fh384724) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh384723));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d359 
        = ((8U & (((IData)(vlTOPp->mac__DOT__x___05Fh41309) 
                   << 3U) ^ (0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq18)))) 
           | ((4U & ((0xfffffffcU & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                     ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                        << 2U))) | ((2U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq19)))));
    vlTOPp->mac__DOT__y___05Fh41681 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq18) 
                                        >> 3U) & (IData)(vlTOPp->mac__DOT__x___05Fh41309));
    vlTOPp->mac__DOT__y___05Fh385001 = ((IData)(vlTOPp->mac__DOT__x___05Fh385097) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh385098));
    vlTOPp->mac__DOT__y___05Fh41584 = ((IData)(vlTOPp->mac__DOT__x___05Fh41680) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41681));
    vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0___05FETC___05F_d1146 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh385000) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh385001)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh384723) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh384724)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1145));
    vlTOPp->mac__DOT__y___05Fh385375 = ((IData)(vlTOPp->mac__DOT__y___05Fh385001) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh385000));
    vlTOPp->mac__DOT__y___05Fh41959 = ((IData)(vlTOPp->mac__DOT__y___05Fh41584) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41583));
    vlTOPp->mac__DOT__y___05Fh385278 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                       >> 0x29U)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh385375)));
    vlTOPp->mac__DOT__y___05Fh41862 = ((IData)(vlTOPp->mac__DOT__x___05Fh41958) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh41959));
    vlTOPp->mac__DOT__y___05Fh385555 = ((IData)(vlTOPp->mac__DOT__y___05Fh385278) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                   >> 0x2aU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d360 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh41861) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh41862)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh41583) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh41584)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d359)));
    vlTOPp->mac__DOT__y___05Fh42236 = ((IData)(vlTOPp->mac__DOT__y___05Fh41862) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh41861));
    vlTOPp->mac__DOT__y___05Fh385832 = ((IData)(vlTOPp->mac__DOT__y___05Fh385555) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__y___05Fh42139 = ((IData)(vlTOPp->mac__DOT__x___05Fh42235) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42236));
    vlTOPp->mac__DOT__y___05Fh386109 = ((IData)(vlTOPp->mac__DOT__y___05Fh385832) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh42513 = ((IData)(vlTOPp->mac__DOT__y___05Fh42139) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42138));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1148 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh386109))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh385832))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh385555))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh385278))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0___05FETC___05F_d1146))));
    vlTOPp->mac__DOT__y___05Fh386386 = ((IData)(vlTOPp->mac__DOT__y___05Fh386109) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__y___05Fh42416 = ((IData)(vlTOPp->mac__DOT__x___05Fh42512) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42513));
    vlTOPp->mac__DOT__y___05Fh386663 = ((IData)(vlTOPp->mac__DOT__y___05Fh386386) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d361 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42415) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42416)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh42138) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh42139)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d360)));
    vlTOPp->mac__DOT__y___05Fh42790 = ((IData)(vlTOPp->mac__DOT__y___05Fh42416) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42415));
    vlTOPp->mac__DOT__mantissa_result___05Fh113591 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh386663))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh386386))))) 
                          << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1148));
    vlTOPp->mac__DOT__y___05Fh42693 = ((IData)(vlTOPp->mac__DOT__x___05Fh42789) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh42790));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
        = ((4U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh113591
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_1_88_THEN_IF_rg_B_20_BIT_0_89_T_ETC___05F_d1076);
    vlTOPp->mac__DOT__y___05Fh43067 = ((IData)(vlTOPp->mac__DOT__y___05Fh42693) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42692));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_8_ETC___05Fq35 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh396329 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x23U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh398268 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh398365 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh397991 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh398088 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh397714 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh397811 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh397437 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh397534 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh397160 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh397257 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh396883 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh396980 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x24U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh396606 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x24U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh396607 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x23U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh42970 = ((IData)(vlTOPp->mac__DOT__x___05Fh43066) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43067));
    vlTOPp->mac__DOT__y___05Fh396981 = ((IData)(vlTOPp->mac__DOT__y___05Fh396607) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh396606));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d362 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh42969) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh42970)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh42692) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh42693)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d361)));
    vlTOPp->mac__DOT__y___05Fh43344 = ((IData)(vlTOPp->mac__DOT__y___05Fh42970) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh42969));
    vlTOPp->mac__DOT__y___05Fh396884 = ((IData)(vlTOPp->mac__DOT__x___05Fh396980) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh396981));
    vlTOPp->mac__DOT__y___05Fh43247 = ((IData)(vlTOPp->mac__DOT__x___05Fh43343) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh43344));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1214 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh396883) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh396884)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh396606) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh396607)))) 
                          << 0x24U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh396329)) 
                                        << 0x23U) | 
                                       ((0x7fffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_8_ETC___05Fq35))))))));
    vlTOPp->mac__DOT__y___05Fh397258 = ((IData)(vlTOPp->mac__DOT__y___05Fh396884) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh396883));
    vlTOPp->mac__DOT__y___05Fh43524 = ((IData)(vlTOPp->mac__DOT__y___05Fh43247) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                          >> 0xaU));
    vlTOPp->mac__DOT__y___05Fh397161 = ((IData)(vlTOPp->mac__DOT__x___05Fh397257) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh397258));
    vlTOPp->mac__DOT__y___05Fh43801 = ((IData)(vlTOPp->mac__DOT__y___05Fh43524) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__y___05Fh397535 = ((IData)(vlTOPp->mac__DOT__y___05Fh397161) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh397160));
    vlTOPp->mac__DOT__y___05Fh44078 = ((IData)(vlTOPp->mac__DOT__y___05Fh43801) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh397438 = ((IData)(vlTOPp->mac__DOT__x___05Fh397534) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh397535));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d364 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh44078) 
                          << 0xdU))) | ((0x1000U & 
                                         ((0xfffff000U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                          ^ ((IData)(vlTOPp->mac__DOT__y___05Fh43801) 
                                             << 0xcU))) 
                                        | ((0x800U 
                                            & ((0xfffff800U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                               ^ ((IData)(vlTOPp->mac__DOT__y___05Fh43524) 
                                                  << 0xbU))) 
                                           | ((0x400U 
                                               & ((0xfffffc00U 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mac__DOT__y___05Fh43247) 
                                                   << 0xaU))) 
                                              | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d362)))));
    vlTOPp->mac__DOT__y___05Fh44355 = ((IData)(vlTOPp->mac__DOT__y___05Fh44078) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1215 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh397437) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh397438)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh397160) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh397161)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1214));
    vlTOPp->mac__DOT__y___05Fh397812 = ((IData)(vlTOPp->mac__DOT__y___05Fh397438) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh397437));
    vlTOPp->mac__DOT__y___05Fh44632 = ((IData)(vlTOPp->mac__DOT__y___05Fh44355) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh397715 = ((IData)(vlTOPp->mac__DOT__x___05Fh397811) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh397812));
    vlTOPp->mac__DOT__mult_result___05Fh18598 = ((0x8000U 
                                                  & ((0xffff8000U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mac__DOT__y___05Fh44632) 
                                                      << 0xfU))) 
                                                 | ((0x4000U 
                                                     & ((0xffffc000U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289)) 
                                                        ^ 
                                                        ((IData)(vlTOPp->mac__DOT__y___05Fh44355) 
                                                         << 0xeU))) 
                                                    | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d364)));
    vlTOPp->mac__DOT__y___05Fh398089 = ((IData)(vlTOPp->mac__DOT__y___05Fh397715) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh397714));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366 
        = ((4U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh18598)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d289));
    vlTOPp->mac__DOT__y___05Fh397992 = ((IData)(vlTOPp->mac__DOT__x___05Fh398088) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh398089));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq21 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh50274 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh49900 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh49997 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh49623 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh49720 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh49346 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh49443 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh49069 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh49166 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh48792 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh48889 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh48514 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh48611 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 4U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq20 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                   >> 3U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 0x10U : 0U);
    vlTOPp->mac__DOT__x___05Fh48240 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                              >> 4U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1216 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh397991) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh397992)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh397714) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh397715)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1215));
    vlTOPp->mac__DOT__y___05Fh398366 = ((IData)(vlTOPp->mac__DOT__y___05Fh397992) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh397991));
    vlTOPp->mac__DOT__y___05Fh48612 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq20) 
                                        >> 4U) & (IData)(vlTOPp->mac__DOT__x___05Fh48240));
    vlTOPp->mac__DOT__y___05Fh398269 = ((IData)(vlTOPp->mac__DOT__x___05Fh398365) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh398366));
    vlTOPp->mac__DOT__y___05Fh48515 = ((IData)(vlTOPp->mac__DOT__x___05Fh48611) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh48612));
    vlTOPp->mac__DOT__y___05Fh398643 = ((IData)(vlTOPp->mac__DOT__y___05Fh398269) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh398268));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d433 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh48514) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh48515)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mac__DOT__x___05Fh48240) 
                                 << 4U) ^ (0xfffffff0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq20)))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq21))))));
    vlTOPp->mac__DOT__y___05Fh48890 = ((IData)(vlTOPp->mac__DOT__y___05Fh48515) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh48514));
    vlTOPp->mac__DOT__y___05Fh398546 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                       >> 0x2aU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh398643)));
    vlTOPp->mac__DOT__y___05Fh48793 = ((IData)(vlTOPp->mac__DOT__x___05Fh48889) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh48890));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1217 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh398546))))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh398268) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh398269)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1216));
    vlTOPp->mac__DOT__y___05Fh398823 = ((IData)(vlTOPp->mac__DOT__y___05Fh398546) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                   >> 0x2bU)));
    vlTOPp->mac__DOT__y___05Fh49167 = ((IData)(vlTOPp->mac__DOT__y___05Fh48793) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh48792));
    vlTOPp->mac__DOT__y___05Fh399100 = ((IData)(vlTOPp->mac__DOT__y___05Fh398823) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__y___05Fh49070 = ((IData)(vlTOPp->mac__DOT__x___05Fh49166) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh49167));
    vlTOPp->mac__DOT__y___05Fh399377 = ((IData)(vlTOPp->mac__DOT__y___05Fh399100) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d434 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh49069) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh49070)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh48792) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh48793)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d433)));
    vlTOPp->mac__DOT__y___05Fh49444 = ((IData)(vlTOPp->mac__DOT__y___05Fh49070) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh49069));
    vlTOPp->mac__DOT__y___05Fh399654 = ((IData)(vlTOPp->mac__DOT__y___05Fh399377) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh49347 = ((IData)(vlTOPp->mac__DOT__x___05Fh49443) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh49444));
    vlTOPp->mac__DOT__mantissa_result___05Fh112218 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh399654))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh399377))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh399100))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh398823))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1217))));
    vlTOPp->mac__DOT__y___05Fh49721 = ((IData)(vlTOPp->mac__DOT__y___05Fh49347) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh49346));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
        = ((8U & (IData)(vlTOPp->mac__DOT__rg_B)) ? vlTOPp->mac__DOT__mantissa_result___05Fh112218
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_2_87_THEN_IF_rg_B_20_BIT_1_88_T_ETC___05F_d1150);
    vlTOPp->mac__DOT__y___05Fh49624 = ((IData)(vlTOPp->mac__DOT__x___05Fh49720) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh49721));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_8_ETC___05Fq36 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh409592 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x24U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh411531 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh411628 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh411254 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh411351 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh410977 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh411074 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh410700 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh410797 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh410423 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh410520 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh410146 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh410243 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x25U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh409869 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x25U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh409870 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x24U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d435 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh49623) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh49624)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh49346) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh49347)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d434)));
    vlTOPp->mac__DOT__y___05Fh49998 = ((IData)(vlTOPp->mac__DOT__y___05Fh49624) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh49623));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1281 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh409869) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh409870)))) 
            << 0x25U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh409592)) 
                          << 0x24U) | ((0xffffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_8_ETC___05Fq36)))))));
    vlTOPp->mac__DOT__y___05Fh410244 = ((IData)(vlTOPp->mac__DOT__y___05Fh409870) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh409869));
    vlTOPp->mac__DOT__y___05Fh49901 = ((IData)(vlTOPp->mac__DOT__x___05Fh49997) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh49998));
    vlTOPp->mac__DOT__y___05Fh410147 = ((IData)(vlTOPp->mac__DOT__x___05Fh410243) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh410244));
    vlTOPp->mac__DOT__y___05Fh50275 = ((IData)(vlTOPp->mac__DOT__y___05Fh49901) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh49900));
    vlTOPp->mac__DOT__y___05Fh410521 = ((IData)(vlTOPp->mac__DOT__y___05Fh410147) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh410146));
    vlTOPp->mac__DOT__y___05Fh50178 = ((IData)(vlTOPp->mac__DOT__x___05Fh50274) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh50275));
    vlTOPp->mac__DOT__y___05Fh410424 = ((IData)(vlTOPp->mac__DOT__x___05Fh410520) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh410521));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d436 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                      ^ ((IData)(vlTOPp->mac__DOT__y___05Fh50178) 
                         << 0xbU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh49900) 
                                         ^ (IData)(vlTOPp->mac__DOT__y___05Fh49901)) 
                                        << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d435)));
    vlTOPp->mac__DOT__y___05Fh50455 = ((IData)(vlTOPp->mac__DOT__y___05Fh50178) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                          >> 0xbU));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1282 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh410423) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh410424)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh410146) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh410147)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1281));
    vlTOPp->mac__DOT__y___05Fh410798 = ((IData)(vlTOPp->mac__DOT__y___05Fh410424) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh410423));
    vlTOPp->mac__DOT__y___05Fh50732 = ((IData)(vlTOPp->mac__DOT__y___05Fh50455) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh410701 = ((IData)(vlTOPp->mac__DOT__x___05Fh410797) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh410798));
    vlTOPp->mac__DOT__y___05Fh51009 = ((IData)(vlTOPp->mac__DOT__y___05Fh50732) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh411075 = ((IData)(vlTOPp->mac__DOT__y___05Fh410701) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh410700));
    vlTOPp->mac__DOT__y___05Fh51286 = ((IData)(vlTOPp->mac__DOT__y___05Fh51009) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh410978 = ((IData)(vlTOPp->mac__DOT__x___05Fh411074) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh411075));
    vlTOPp->mac__DOT__mult_result___05Fh15642 = ((0x8000U 
                                                  & ((0xffff8000U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mac__DOT__y___05Fh51286) 
                                                      << 0xfU))) 
                                                 | ((0x4000U 
                                                     & ((0xffffc000U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                                        ^ 
                                                        ((IData)(vlTOPp->mac__DOT__y___05Fh51009) 
                                                         << 0xeU))) 
                                                    | ((0x2000U 
                                                        & ((0xffffe000U 
                                                            & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                                           ^ 
                                                           ((IData)(vlTOPp->mac__DOT__y___05Fh50732) 
                                                            << 0xdU))) 
                                                       | ((0x1000U 
                                                           & ((0xfffff000U 
                                                               & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366)) 
                                                              ^ 
                                                              ((IData)(vlTOPp->mac__DOT__y___05Fh50455) 
                                                               << 0xcU))) 
                                                          | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d436)))));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1283 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh410977) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh410978)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh410700) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh410701)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1282));
    vlTOPp->mac__DOT__y___05Fh411352 = ((IData)(vlTOPp->mac__DOT__y___05Fh410978) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh410977));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439 
        = ((8U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh15642)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d366));
    vlTOPp->mac__DOT__y___05Fh411255 = ((IData)(vlTOPp->mac__DOT__x___05Fh411351) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh411352));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq23 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh57200 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh56826 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh56923 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh56549 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh56646 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh56272 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh56369 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh55995 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh56092 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh55718 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh55815 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh55440 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh55537 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 5U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq22 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                   >> 4U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 0x20U : 0U);
    vlTOPp->mac__DOT__x___05Fh55166 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                              >> 5U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh411629 = ((IData)(vlTOPp->mac__DOT__y___05Fh411255) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh411254));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d503 
        = ((0x20U & (((IData)(vlTOPp->mac__DOT__x___05Fh55166) 
                      << 5U) ^ (0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq22)))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                        ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq23)))));
    vlTOPp->mac__DOT__y___05Fh55538 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq22) 
                                        >> 5U) & (IData)(vlTOPp->mac__DOT__x___05Fh55166));
    vlTOPp->mac__DOT__y___05Fh411532 = ((IData)(vlTOPp->mac__DOT__x___05Fh411628) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh411629));
    vlTOPp->mac__DOT__y___05Fh55441 = ((IData)(vlTOPp->mac__DOT__x___05Fh55537) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55538));
    vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2___05FETC___05F_d1284 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh411531) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh411532)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh411254) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh411255)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1283));
    vlTOPp->mac__DOT__y___05Fh411906 = ((IData)(vlTOPp->mac__DOT__y___05Fh411532) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh411531));
    vlTOPp->mac__DOT__y___05Fh55816 = ((IData)(vlTOPp->mac__DOT__y___05Fh55441) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55440));
    vlTOPp->mac__DOT__y___05Fh411809 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                       >> 0x2bU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh411906)));
    vlTOPp->mac__DOT__y___05Fh55719 = ((IData)(vlTOPp->mac__DOT__x___05Fh55815) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh55816));
    vlTOPp->mac__DOT__y___05Fh412086 = ((IData)(vlTOPp->mac__DOT__y___05Fh411809) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                   >> 0x2cU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d504 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh55718) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh55719)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh55440) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh55441)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d503)));
    vlTOPp->mac__DOT__y___05Fh56093 = ((IData)(vlTOPp->mac__DOT__y___05Fh55719) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55718));
    vlTOPp->mac__DOT__y___05Fh412363 = ((IData)(vlTOPp->mac__DOT__y___05Fh412086) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__y___05Fh55996 = ((IData)(vlTOPp->mac__DOT__x___05Fh56092) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56093));
    vlTOPp->mac__DOT__y___05Fh412640 = ((IData)(vlTOPp->mac__DOT__y___05Fh412363) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh56370 = ((IData)(vlTOPp->mac__DOT__y___05Fh55996) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh55995));
    vlTOPp->mac__DOT__mantissa_result___05Fh110845 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh412640))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh412363))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mac__DOT__y___05Fh412086))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh411809))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2___05FETC___05F_d1284))));
    vlTOPp->mac__DOT__y___05Fh56273 = ((IData)(vlTOPp->mac__DOT__x___05Fh56369) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56370));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh110845
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_3_86_THEN_IF_rg_B_20_BIT_2_87_T_ETC___05F_d1220);
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d505 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh56272) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh56273)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh55995) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh55996)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d504)));
    vlTOPp->mac__DOT__y___05Fh56647 = ((IData)(vlTOPp->mac__DOT__y___05Fh56273) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh56272));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_8_ETC___05Fq37 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh422850 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x25U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh424789 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh424886 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh424512 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh424609 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh424235 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh424332 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh423958 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh424055 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh423681 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh423778 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh423404 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh423501 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x26U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh423127 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x26U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh423128 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x25U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh56550 = ((IData)(vlTOPp->mac__DOT__x___05Fh56646) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56647));
    vlTOPp->mac__DOT__y___05Fh423502 = ((IData)(vlTOPp->mac__DOT__y___05Fh423128) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh423127));
    vlTOPp->mac__DOT__y___05Fh56924 = ((IData)(vlTOPp->mac__DOT__y___05Fh56550) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh56549));
    vlTOPp->mac__DOT__y___05Fh423405 = ((IData)(vlTOPp->mac__DOT__x___05Fh423501) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh423502));
    vlTOPp->mac__DOT__y___05Fh56827 = ((IData)(vlTOPp->mac__DOT__x___05Fh56923) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh56924));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1345 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh423404) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh423405)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh423127) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh423128)))) 
                          << 0x26U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh422850)) 
                                        << 0x25U) | 
                                       ((0x1ffffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_8_ETC___05Fq37))))))));
    vlTOPp->mac__DOT__y___05Fh423779 = ((IData)(vlTOPp->mac__DOT__y___05Fh423405) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh423404));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d506 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh56826) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh56827)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh56549) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh56550)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d505)));
    vlTOPp->mac__DOT__y___05Fh57201 = ((IData)(vlTOPp->mac__DOT__y___05Fh56827) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh56826));
    vlTOPp->mac__DOT__y___05Fh423682 = ((IData)(vlTOPp->mac__DOT__x___05Fh423778) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh423779));
    vlTOPp->mac__DOT__y___05Fh57104 = ((IData)(vlTOPp->mac__DOT__x___05Fh57200) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh57201));
    vlTOPp->mac__DOT__y___05Fh424056 = ((IData)(vlTOPp->mac__DOT__y___05Fh423682) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh423681));
    vlTOPp->mac__DOT__y___05Fh57381 = ((IData)(vlTOPp->mac__DOT__y___05Fh57104) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                          >> 0xcU));
    vlTOPp->mac__DOT__y___05Fh423959 = ((IData)(vlTOPp->mac__DOT__x___05Fh424055) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh424056));
    vlTOPp->mac__DOT__y___05Fh57658 = ((IData)(vlTOPp->mac__DOT__y___05Fh57381) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1346 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh423958) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh423959)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh423681) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh423682)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1345));
    vlTOPp->mac__DOT__y___05Fh424333 = ((IData)(vlTOPp->mac__DOT__y___05Fh423959) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh423958));
    vlTOPp->mac__DOT__y___05Fh57935 = ((IData)(vlTOPp->mac__DOT__y___05Fh57658) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh424236 = ((IData)(vlTOPp->mac__DOT__x___05Fh424332) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh424333));
    vlTOPp->mac__DOT__mult_result___05Fh12686 = ((0x8000U 
                                                  & ((0xffff8000U 
                                                      & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                                                     ^ 
                                                     ((IData)(vlTOPp->mac__DOT__y___05Fh57935) 
                                                      << 0xfU))) 
                                                 | ((0x4000U 
                                                     & ((0xffffc000U 
                                                         & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                                                        ^ 
                                                        ((IData)(vlTOPp->mac__DOT__y___05Fh57658) 
                                                         << 0xeU))) 
                                                    | ((0x2000U 
                                                        & ((0xffffe000U 
                                                            & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                                                           ^ 
                                                           ((IData)(vlTOPp->mac__DOT__y___05Fh57381) 
                                                            << 0xdU))) 
                                                       | ((0x1000U 
                                                           & ((0xfffff000U 
                                                               & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439)) 
                                                              ^ 
                                                              ((IData)(vlTOPp->mac__DOT__y___05Fh57104) 
                                                               << 0xcU))) 
                                                          | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d506)))));
    vlTOPp->mac__DOT__y___05Fh424610 = ((IData)(vlTOPp->mac__DOT__y___05Fh424236) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh424235));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509 
        = ((0x10U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh12686)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d439));
    vlTOPp->mac__DOT__y___05Fh424513 = ((IData)(vlTOPp->mac__DOT__x___05Fh424609) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh424610));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq25 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh64121 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh63747 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh63844 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh63470 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh63567 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh63193 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh63290 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh62916 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh63013 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh62639 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh62736 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh62361 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh62458 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 6U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq24 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                   >> 5U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 0x40U : 0U);
    vlTOPp->mac__DOT__x___05Fh62087 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                              >> 6U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1347 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh424512) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh424513)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh424235) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh424236)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1346));
    vlTOPp->mac__DOT__y___05Fh424887 = ((IData)(vlTOPp->mac__DOT__y___05Fh424513) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh424512));
    vlTOPp->mac__DOT__y___05Fh62459 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq24) 
                                        >> 6U) & (IData)(vlTOPp->mac__DOT__x___05Fh62087));
    vlTOPp->mac__DOT__y___05Fh424790 = ((IData)(vlTOPp->mac__DOT__x___05Fh424886) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh424887));
    vlTOPp->mac__DOT__y___05Fh62362 = ((IData)(vlTOPp->mac__DOT__x___05Fh62458) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh62459));
    vlTOPp->mac__DOT__y___05Fh425164 = ((IData)(vlTOPp->mac__DOT__y___05Fh424790) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh424789));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d570 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh62361) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh62362)) 
            << 7U) | ((0x40U & (((IData)(vlTOPp->mac__DOT__x___05Fh62087) 
                                 << 6U) ^ (0xffffffc0U 
                                           & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq24)))) 
                      | ((0x20U & ((0xffffffe0U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                      << 5U))) | ((0x1eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq25))))));
    vlTOPp->mac__DOT__y___05Fh62737 = ((IData)(vlTOPp->mac__DOT__y___05Fh62362) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh62361));
    vlTOPp->mac__DOT__y___05Fh425067 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                       >> 0x2cU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh425164)));
    vlTOPp->mac__DOT__y___05Fh62640 = ((IData)(vlTOPp->mac__DOT__x___05Fh62736) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh62737));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1348 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh425067))))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh424789) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh424790)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1347));
    vlTOPp->mac__DOT__y___05Fh425344 = ((IData)(vlTOPp->mac__DOT__y___05Fh425067) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                   >> 0x2dU)));
    vlTOPp->mac__DOT__y___05Fh63014 = ((IData)(vlTOPp->mac__DOT__y___05Fh62640) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh62639));
    vlTOPp->mac__DOT__y___05Fh425621 = ((IData)(vlTOPp->mac__DOT__y___05Fh425344) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__y___05Fh62917 = ((IData)(vlTOPp->mac__DOT__x___05Fh63013) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63014));
    vlTOPp->mac__DOT__mantissa_result___05Fh109472 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh425621))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh425344))))) 
                          << 0x2eU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1348));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d571 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh62916) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh62917)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh62639) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh62640)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d570)));
    vlTOPp->mac__DOT__y___05Fh63291 = ((IData)(vlTOPp->mac__DOT__y___05Fh62917) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh62916));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh109472
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_4_85_THEN_IF_rg_B_20_BIT_3_86_T_ETC___05F_d1287);
    vlTOPp->mac__DOT__y___05Fh63194 = ((IData)(vlTOPp->mac__DOT__x___05Fh63290) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63291));
    vlTOPp->mac__DOT__x___05Fh438042 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_8_ETC___05Fq38 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh436103 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x26U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh438139 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2cU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh437765 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2cU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh437862 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh437488 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh437585 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh437211 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh437308 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh436934 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh437031 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh436657 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh436754 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x27U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh436380 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x27U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh436381 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x26U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh63568 = ((IData)(vlTOPp->mac__DOT__y___05Fh63194) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh63193));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1405 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh436380) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh436381)))) 
            << 0x27U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh436103)) 
                          << 0x26U) | ((0x3ffffffffeULL 
                                        & vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350) 
                                       | (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_8_ETC___05Fq38)))))));
    vlTOPp->mac__DOT__y___05Fh436755 = ((IData)(vlTOPp->mac__DOT__y___05Fh436381) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh436380));
    vlTOPp->mac__DOT__y___05Fh63471 = ((IData)(vlTOPp->mac__DOT__x___05Fh63567) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63568));
    vlTOPp->mac__DOT__y___05Fh436658 = ((IData)(vlTOPp->mac__DOT__x___05Fh436754) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh436755));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d572 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh63470) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh63471)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh63193) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh63194)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d571)));
    vlTOPp->mac__DOT__y___05Fh63845 = ((IData)(vlTOPp->mac__DOT__y___05Fh63471) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh63470));
    vlTOPp->mac__DOT__y___05Fh437032 = ((IData)(vlTOPp->mac__DOT__y___05Fh436658) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh436657));
    vlTOPp->mac__DOT__y___05Fh63748 = ((IData)(vlTOPp->mac__DOT__x___05Fh63844) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh63845));
    vlTOPp->mac__DOT__y___05Fh436935 = ((IData)(vlTOPp->mac__DOT__x___05Fh437031) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh437032));
    vlTOPp->mac__DOT__y___05Fh64122 = ((IData)(vlTOPp->mac__DOT__y___05Fh63748) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh63747));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1406 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh436934) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh436935)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh436657) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh436658)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1405));
    vlTOPp->mac__DOT__y___05Fh437309 = ((IData)(vlTOPp->mac__DOT__y___05Fh436935) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh436934));
    vlTOPp->mac__DOT__y___05Fh64025 = ((IData)(vlTOPp->mac__DOT__x___05Fh64121) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh64122));
    vlTOPp->mac__DOT__y___05Fh437212 = ((IData)(vlTOPp->mac__DOT__x___05Fh437308) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh437309));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d573 
        = ((0x2000U & ((0xffffe000U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509)) 
                       ^ ((IData)(vlTOPp->mac__DOT__y___05Fh64025) 
                          << 0xdU))) | ((((IData)(vlTOPp->mac__DOT__x___05Fh63747) 
                                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh63748)) 
                                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d572)));
    vlTOPp->mac__DOT__y___05Fh64302 = ((IData)(vlTOPp->mac__DOT__y___05Fh64025) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                          >> 0xdU));
    vlTOPp->mac__DOT__y___05Fh437586 = ((IData)(vlTOPp->mac__DOT__y___05Fh437212) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437211));
    vlTOPp->mac__DOT__y___05Fh64579 = ((IData)(vlTOPp->mac__DOT__y___05Fh64302) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh437489 = ((IData)(vlTOPp->mac__DOT__x___05Fh437585) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh437586));
    vlTOPp->mac__DOT__mult_result___05Fh9730 = ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh64579) 
                                                     << 0xfU))) 
                                                | ((0x4000U 
                                                    & ((0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh64302) 
                                                        << 0xeU))) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d573)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1407 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh437488) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh437489)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh437211) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh437212)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1406));
    vlTOPp->mac__DOT__y___05Fh437863 = ((IData)(vlTOPp->mac__DOT__y___05Fh437489) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437488));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575 
        = ((0x20U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh9730)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d509));
    vlTOPp->mac__DOT__y___05Fh437766 = ((IData)(vlTOPp->mac__DOT__x___05Fh437862) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh437863));
    vlTOPp->mac__DOT__x___05Fh71037 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh70663 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq27 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh70760 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh70386 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh70483 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh70109 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh70206 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh69832 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh69929 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh69555 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh69652 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh69277 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh69374 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 7U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq26 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                   >> 6U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 0x80U : 0U);
    vlTOPp->mac__DOT__x___05Fh69003 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                              >> 7U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh438140 = ((IData)(vlTOPp->mac__DOT__y___05Fh437766) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh437765));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d633 
        = ((0x80U & (((IData)(vlTOPp->mac__DOT__x___05Fh69003) 
                      << 7U) ^ (0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq26)))) 
           | ((0x40U & ((0xffffffc0U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575)) 
                        ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                           << 6U))) | ((0x3eU & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575)) 
                                       | (1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq27)))));
    vlTOPp->mac__DOT__y___05Fh69375 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq26) 
                                        >> 7U) & (IData)(vlTOPp->mac__DOT__x___05Fh69003));
    vlTOPp->mac__DOT__y___05Fh438043 = ((IData)(vlTOPp->mac__DOT__x___05Fh438139) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh438140));
    vlTOPp->mac__DOT__y___05Fh69278 = ((IData)(vlTOPp->mac__DOT__x___05Fh69374) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh69375));
    vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4___05FETC___05F_d1408 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh438042) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh438043)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh437765) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh437766)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1407));
    vlTOPp->mac__DOT__y___05Fh438417 = ((IData)(vlTOPp->mac__DOT__y___05Fh438043) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh438042));
    vlTOPp->mac__DOT__y___05Fh69653 = ((IData)(vlTOPp->mac__DOT__y___05Fh69278) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh69277));
    vlTOPp->mac__DOT__y___05Fh438320 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                       >> 0x2dU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh438417)));
    vlTOPp->mac__DOT__y___05Fh69556 = ((IData)(vlTOPp->mac__DOT__x___05Fh69652) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh69653));
    vlTOPp->mac__DOT__y___05Fh438597 = ((IData)(vlTOPp->mac__DOT__y___05Fh438320) 
                                        & (IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                   >> 0x2eU)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d634 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh69555) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh69556)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh69277) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh69278)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d633)));
    vlTOPp->mac__DOT__y___05Fh69930 = ((IData)(vlTOPp->mac__DOT__y___05Fh69556) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh69555));
    vlTOPp->mac__DOT__mantissa_result___05Fh108099 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mac__DOT__y___05Fh438597))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mac__DOT__y___05Fh438320))))) 
                          << 0x2eU) | vlTOPp->mac__DOT__INV_IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4___05FETC___05F_d1408));
    vlTOPp->mac__DOT__y___05Fh69833 = ((IData)(vlTOPp->mac__DOT__x___05Fh69929) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh69930));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__rg_B))
            ? vlTOPp->mac__DOT__mantissa_result___05Fh108099
            : vlTOPp->mac__DOT__IF_rg_B_20_BIT_5_84_THEN_IF_rg_B_20_BIT_4_85_T_ETC___05F_d1350);
    vlTOPp->mac__DOT__y___05Fh70207 = ((IData)(vlTOPp->mac__DOT__y___05Fh69833) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh69832));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_8_ETC___05Fq40 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh449351 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x27U)) 
                                              ^ (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__x___05Fh451290 = (1U & (~ (IData)(
                                                        (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh451387 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2dU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh451013 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2dU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 6U)));
    vlTOPp->mac__DOT__x___05Fh451110 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2cU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh450736 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2cU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 5U)));
    vlTOPp->mac__DOT__x___05Fh450833 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2bU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh450459 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2bU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 4U)));
    vlTOPp->mac__DOT__x___05Fh450556 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2aU)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh450182 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2aU)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 3U)));
    vlTOPp->mac__DOT__x___05Fh450279 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x29U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh449905 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x29U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 2U)));
    vlTOPp->mac__DOT__x___05Fh450002 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x28U)) 
                                              & ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__x___05Fh449628 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x28U)) 
                                              ^ ((IData)(vlTOPp->mac__DOT__rg_A) 
                                                 >> 1U)));
    vlTOPp->mac__DOT__y___05Fh449629 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x27U)) 
                                              & (IData)(vlTOPp->mac__DOT__rg_A)));
    vlTOPp->mac__DOT__y___05Fh70110 = ((IData)(vlTOPp->mac__DOT__x___05Fh70206) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh70207));
    vlTOPp->mac__DOT__y___05Fh450003 = ((IData)(vlTOPp->mac__DOT__y___05Fh449629) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh449628));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d635 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh70109) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh70110)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh69832) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh69833)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d634)));
    vlTOPp->mac__DOT__y___05Fh70484 = ((IData)(vlTOPp->mac__DOT__y___05Fh70110) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh70109));
    vlTOPp->mac__DOT__y___05Fh449906 = ((IData)(vlTOPp->mac__DOT__x___05Fh450002) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450003));
    vlTOPp->mac__DOT__y___05Fh70387 = ((IData)(vlTOPp->mac__DOT__x___05Fh70483) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh70484));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1562 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh449905) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh449906)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh449628) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh449629)))) 
                          << 0x28U) | (((QData)((IData)(vlTOPp->mac__DOT__x___05Fh449351)) 
                                        << 0x27U) | 
                                       ((0x7ffffffffeULL 
                                         & vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_8_ETC___05Fq40))))))));
    vlTOPp->mac__DOT__y___05Fh450280 = ((IData)(vlTOPp->mac__DOT__y___05Fh449906) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh449905));
    vlTOPp->mac__DOT__y___05Fh70761 = ((IData)(vlTOPp->mac__DOT__y___05Fh70387) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh70386));
    vlTOPp->mac__DOT__y___05Fh450183 = ((IData)(vlTOPp->mac__DOT__x___05Fh450279) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450280));
    vlTOPp->mac__DOT__y___05Fh70664 = ((IData)(vlTOPp->mac__DOT__x___05Fh70760) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh70761));
    vlTOPp->mac__DOT__y___05Fh450557 = ((IData)(vlTOPp->mac__DOT__y___05Fh450183) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450182));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d636 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh70663) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh70664)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh70386) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh70387)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d635)));
    vlTOPp->mac__DOT__y___05Fh71038 = ((IData)(vlTOPp->mac__DOT__y___05Fh70664) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh70663));
    vlTOPp->mac__DOT__y___05Fh450460 = ((IData)(vlTOPp->mac__DOT__x___05Fh450556) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450557));
    vlTOPp->mac__DOT__y___05Fh70941 = ((IData)(vlTOPp->mac__DOT__x___05Fh71037) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh71038));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1563 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450459) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh450460)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450182) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh450183)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1562));
    vlTOPp->mac__DOT__y___05Fh450834 = ((IData)(vlTOPp->mac__DOT__y___05Fh450460) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450459));
    vlTOPp->mac__DOT__y___05Fh71218 = ((IData)(vlTOPp->mac__DOT__y___05Fh70941) 
                                       & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575) 
                                          >> 0xeU));
    vlTOPp->mac__DOT__y___05Fh450737 = ((IData)(vlTOPp->mac__DOT__x___05Fh450833) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh450834));
    vlTOPp->mac__DOT__mult_result___05Fh6774 = ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh71218) 
                                                     << 0xfU))) 
                                                | ((0x4000U 
                                                    & ((0xffffc000U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh70941) 
                                                        << 0xeU))) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d636)));
    vlTOPp->mac__DOT__y___05Fh451111 = ((IData)(vlTOPp->mac__DOT__y___05Fh450737) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh450736));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638 
        = ((0x40U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
            ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh6774)
            : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d575));
    vlTOPp->mac__DOT__y___05Fh451014 = ((IData)(vlTOPp->mac__DOT__x___05Fh451110) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451111));
    vlTOPp->mac__DOT__x___05Fh77948 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xeU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh77574 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xeU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 7U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq29 
        = ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh77671 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh77297 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xdU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh77394 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xcU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh77020 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xcU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh77117 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xbU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh76743 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xbU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh76840 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xaU) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh76466 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 0xaU) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh76563 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 9U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh76188 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 9U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh76285 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq28 
        = ((1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                   >> 7U) & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502)))
            ? 0x100U : 0U);
    vlTOPp->mac__DOT__x___05Fh75914 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638) 
                                              >> 8U) 
                                             ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1564 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh451013) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh451014)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh450736) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh450737)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1563));
    vlTOPp->mac__DOT__y___05Fh451388 = ((IData)(vlTOPp->mac__DOT__y___05Fh451014) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh451013));
    vlTOPp->mac__DOT__y___05Fh76286 = (((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq28) 
                                        >> 8U) & (IData)(vlTOPp->mac__DOT__x___05Fh75914));
    vlTOPp->mac__DOT__mantissa_result___05Fh458935 
        = (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1564 
           << 2U);
    vlTOPp->mac__DOT__y___05Fh451291 = ((IData)(vlTOPp->mac__DOT__x___05Fh451387) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh451388));
    vlTOPp->mac__DOT__y___05Fh76189 = ((IData)(vlTOPp->mac__DOT__x___05Fh76285) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh76286));
    vlTOPp->mac__DOT__mantissa_result___05Fh451836 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh451290) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh451291)))) 
            << 0x2fU) | (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1564 
                         << 1U));
    vlTOPp->mac__DOT__y___05Fh451665 = ((IData)(vlTOPp->mac__DOT__y___05Fh451291) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh451290));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d693 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh76188) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh76189)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mac__DOT__x___05Fh75914) 
                                  << 8U) ^ (0xffffff00U 
                                            & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq28)))) 
                      | ((0x80U & ((0xffffff80U & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638)) 
                                   ^ ((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh71502) 
                                      << 7U))) | ((0x7eU 
                                                   & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638)) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BIT_ETC___05Fq29))))));
    vlTOPp->mac__DOT__y___05Fh76564 = ((IData)(vlTOPp->mac__DOT__y___05Fh76189) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh76188));
    vlTOPp->mac__DOT__y___05Fh451568 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                                                       >> 0x2eU)) 
                                              | (IData)(vlTOPp->mac__DOT__y___05Fh451665)));
    vlTOPp->mac__DOT__y___05Fh76467 = ((IData)(vlTOPp->mac__DOT__x___05Fh76563) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh76564));
    vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1448 
        = (1U & ((IData)((vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1410 
                          >> 0x2fU)) ^ (IData)(vlTOPp->mac__DOT__y___05Fh451568)));
    vlTOPp->mac__DOT__y___05Fh76841 = ((IData)(vlTOPp->mac__DOT__y___05Fh76467) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh76466));
    if (vlTOPp->mac__DOT__IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_84_T_ETC___05F_d1448) {
        vlTOPp->mac__DOT__mantissa_result___05Fh106416 
            = vlTOPp->mac__DOT__mantissa_result___05Fh451836;
        vlTOPp->mac__DOT__expA___05Fh106418 = vlTOPp->mac__DOT__spliced_bits___05Fh451839;
    } else {
        vlTOPp->mac__DOT__mantissa_result___05Fh106416 
            = vlTOPp->mac__DOT__mantissa_result___05Fh458935;
        vlTOPp->mac__DOT__expA___05Fh106418 = vlTOPp->mac__DOT__spliced_bits___05Fh451866;
    }
    vlTOPp->mac__DOT__y___05Fh76744 = ((IData)(vlTOPp->mac__DOT__x___05Fh76840) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh76841));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_8_ETC___05F_d1548 
        = ((IData)(vlTOPp->mac__DOT__expA___05Fh106418) 
           <= (0xffU & (vlTOPp->mac__DOT__rg_C >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh458930 = (0xffU 
                                              & ((IData)(vlTOPp->mac__DOT__expA___05Fh106418) 
                                                 - 
                                                 (vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U)));
    vlTOPp->mac__DOT__expDiff___05Fh458939 = (0xffU 
                                              & ((vlTOPp->mac__DOT__rg_C 
                                                  >> 0x17U) 
                                                 - (IData)(vlTOPp->mac__DOT__expA___05Fh106418)));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d694 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh76743) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh76744)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh76466) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh76467)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d693)));
    vlTOPp->mac__DOT__y___05Fh77118 = ((IData)(vlTOPp->mac__DOT__y___05Fh76744) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh76743));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949 
        = (0xffU & ((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_8_ETC___05F_d1548)
                     ? (vlTOPp->mac__DOT__rg_C >> 0x17U)
                     : (IData)(vlTOPp->mac__DOT__expA___05Fh106418)));
    vlTOPp->mac__DOT__shiftedMantB___05Fh458931 = (
                                                   (0x2fU 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh458930))
                                                    ? 
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlTOPp->mac__DOT__rg_C))) 
                                                        << 0x18U) 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh458930)))
                                                    : 0ULL);
    vlTOPp->mac__DOT__shiftedMantA___05Fh458940 = (
                                                   (0x2fU 
                                                    >= (IData)(vlTOPp->mac__DOT__expDiff___05Fh458939))
                                                    ? 
                                                   (0xffffffffffffULL 
                                                    & (vlTOPp->mac__DOT__mantissa_result___05Fh106416 
                                                       >> (IData)(vlTOPp->mac__DOT__expDiff___05Fh458939)))
                                                    : 0ULL);
    vlTOPp->mac__DOT__y___05Fh77021 = ((IData)(vlTOPp->mac__DOT__x___05Fh77117) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77118));
    if ((1U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949))) {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B___05FETC___05Fq46 = 0U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_B_ETC___05Fq45 = 2U;
    } else {
        vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B___05FETC___05Fq46 = 1U;
        vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_B_ETC___05Fq45 = 0U;
    }
    if (vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT_5_8_ETC___05F_d1548) {
        vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
            = ((QData)((IData)((0x7fffffU & vlTOPp->mac__DOT__rg_C))) 
               << 0x18U);
        vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
            = vlTOPp->mac__DOT__shiftedMantA___05Fh458940;
    } else {
        vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
            = vlTOPp->mac__DOT__shiftedMantB___05Fh458931;
        vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
            = vlTOPp->mac__DOT__mantissa_result___05Fh106416;
    }
    vlTOPp->mac__DOT__y___05Fh77395 = ((IData)(vlTOPp->mac__DOT__y___05Fh77021) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77020));
    vlTOPp->mac__DOT__y___05Fh474388 = (1U & (((IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_B_ETC___05Fq45) 
                                               & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                              >> 1U));
    vlTOPp->mac__DOT__x___05Fh473419 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2fU))));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1576 
        = (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
           <= vlTOPp->mac__DOT__shiftedMantB___05Fh106424);
    vlTOPp->mac__DOT__x___05Fh473517 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2eU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh473139 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2eU))));
    vlTOPp->mac__DOT__x___05Fh473237 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2dU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__x___05Fh472859 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2dU))));
    vlTOPp->mac__DOT__x___05Fh472957 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2cU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh472579 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2cU))));
    vlTOPp->mac__DOT__x___05Fh472677 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2bU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh472299 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2bU))));
    vlTOPp->mac__DOT__x___05Fh472397 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2aU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh472019 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x2aU))));
    vlTOPp->mac__DOT__x___05Fh472117 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x29U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh471739 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x29U))));
    vlTOPp->mac__DOT__x___05Fh471837 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x28U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh471459 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x28U))));
    vlTOPp->mac__DOT__x___05Fh471557 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x27U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x27U))));
    vlTOPp->mac__DOT__x___05Fh471179 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x27U))));
    vlTOPp->mac__DOT__x___05Fh471277 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x26U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x26U))));
    vlTOPp->mac__DOT__x___05Fh470899 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x26U))));
    vlTOPp->mac__DOT__x___05Fh470997 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x25U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x25U))));
    vlTOPp->mac__DOT__x___05Fh470619 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x25U))));
    vlTOPp->mac__DOT__x___05Fh470717 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x24U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x24U))));
    vlTOPp->mac__DOT__x___05Fh470339 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x24U))));
    vlTOPp->mac__DOT__IF_shiftedMantA06423_BIT_0_XOR_shiftedMantB064_ETC___05Fq43 
        = ((1U & ((IData)(vlTOPp->mac__DOT__shiftedMantA___05Fh106423) 
                  ^ (IData)(vlTOPp->mac__DOT__shiftedMantB___05Fh106424)))
            ? 1ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh470437 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x23U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x23U))));
    vlTOPp->mac__DOT__x___05Fh470059 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x23U))));
    vlTOPp->mac__DOT__x___05Fh470157 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x22U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x22U))));
    vlTOPp->mac__DOT__x___05Fh469779 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x22U))));
    vlTOPp->mac__DOT__x___05Fh469877 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x21U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x21U))));
    vlTOPp->mac__DOT__x___05Fh469499 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x21U))));
    vlTOPp->mac__DOT__x___05Fh469597 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x20U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x20U))));
    vlTOPp->mac__DOT__x___05Fh469219 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x20U))));
    vlTOPp->mac__DOT__x___05Fh469317 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1fU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1fU))));
    vlTOPp->mac__DOT__x___05Fh468939 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1fU))));
    vlTOPp->mac__DOT__x___05Fh469037 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1eU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1eU))));
    vlTOPp->mac__DOT__x___05Fh468659 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1eU))));
    vlTOPp->mac__DOT__x___05Fh468757 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1dU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1dU))));
    vlTOPp->mac__DOT__x___05Fh468379 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1dU))));
    vlTOPp->mac__DOT__x___05Fh468477 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1cU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1cU))));
    vlTOPp->mac__DOT__x___05Fh468099 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1cU))));
    vlTOPp->mac__DOT__x___05Fh468197 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1bU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1bU))));
    vlTOPp->mac__DOT__x___05Fh467819 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1bU))));
    vlTOPp->mac__DOT__x___05Fh467917 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1aU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1aU))));
    vlTOPp->mac__DOT__x___05Fh467539 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x1aU))));
    vlTOPp->mac__DOT__x___05Fh467637 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x19U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x19U))));
    vlTOPp->mac__DOT__x___05Fh467259 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x19U))));
    vlTOPp->mac__DOT__x___05Fh467357 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x18U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x18U))));
    vlTOPp->mac__DOT__x___05Fh466979 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x18U))));
    vlTOPp->mac__DOT__x___05Fh467077 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x17U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x17U))));
    vlTOPp->mac__DOT__x___05Fh466699 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x17U))));
    vlTOPp->mac__DOT__x___05Fh466797 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x16U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x16U))));
    vlTOPp->mac__DOT__x___05Fh466419 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x16U))));
    vlTOPp->mac__DOT__x___05Fh466517 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x15U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x15U))));
    vlTOPp->mac__DOT__x___05Fh466139 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x15U))));
    vlTOPp->mac__DOT__x___05Fh466237 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x14U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x14U))));
    vlTOPp->mac__DOT__x___05Fh465859 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x14U))));
    vlTOPp->mac__DOT__x___05Fh465957 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x13U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x13U))));
    vlTOPp->mac__DOT__x___05Fh465579 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x13U))));
    vlTOPp->mac__DOT__x___05Fh465677 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x12U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x12U))));
    vlTOPp->mac__DOT__x___05Fh465299 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x12U))));
    vlTOPp->mac__DOT__x___05Fh465397 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x11U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x11U))));
    vlTOPp->mac__DOT__x___05Fh465019 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x11U))));
    vlTOPp->mac__DOT__x___05Fh465117 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x10U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x10U))));
    vlTOPp->mac__DOT__x___05Fh464739 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0x10U))));
    vlTOPp->mac__DOT__x___05Fh464837 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xfU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xfU))));
    vlTOPp->mac__DOT__x___05Fh464459 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xfU))));
    vlTOPp->mac__DOT__x___05Fh464557 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xeU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xeU))));
    vlTOPp->mac__DOT__x___05Fh464179 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xeU))));
    vlTOPp->mac__DOT__x___05Fh464277 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xdU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xdU))));
    vlTOPp->mac__DOT__x___05Fh463899 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xdU))));
    vlTOPp->mac__DOT__x___05Fh463997 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xcU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xcU))));
    vlTOPp->mac__DOT__x___05Fh463619 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xcU))));
    vlTOPp->mac__DOT__x___05Fh463717 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xbU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xbU))));
    vlTOPp->mac__DOT__x___05Fh463339 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xbU))));
    vlTOPp->mac__DOT__x___05Fh463437 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xaU)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xaU))));
    vlTOPp->mac__DOT__x___05Fh463059 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 0xaU))));
    vlTOPp->mac__DOT__x___05Fh463157 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 9U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 9U))));
    vlTOPp->mac__DOT__x___05Fh462779 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 9U))));
    vlTOPp->mac__DOT__x___05Fh462877 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 8U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 8U))));
    vlTOPp->mac__DOT__x___05Fh462499 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 8U))));
    vlTOPp->mac__DOT__x___05Fh462597 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 7U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 7U))));
    vlTOPp->mac__DOT__x___05Fh462219 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 7U))));
    vlTOPp->mac__DOT__x___05Fh462317 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 6U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 6U))));
    vlTOPp->mac__DOT__x___05Fh461939 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 6U))));
    vlTOPp->mac__DOT__x___05Fh462037 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 5U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 5U))));
    vlTOPp->mac__DOT__x___05Fh461659 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 5U))));
    vlTOPp->mac__DOT__x___05Fh461757 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 4U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 4U))));
    vlTOPp->mac__DOT__x___05Fh461379 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 4U))));
    vlTOPp->mac__DOT__x___05Fh461477 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 3U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 3U))));
    vlTOPp->mac__DOT__x___05Fh461099 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 3U))));
    vlTOPp->mac__DOT__x___05Fh461197 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 2U))));
    vlTOPp->mac__DOT__x___05Fh460818 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 2U))));
    vlTOPp->mac__DOT__x___05Fh460916 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 1U)) 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 1U))));
    vlTOPp->mac__DOT__IF_shiftedMantA06423_BIT_0_AND_shiftedMantB064_ETC___05Fq41 
        = ((1U & ((IData)(vlTOPp->mac__DOT__shiftedMantA___05Fh106423) 
                  & (IData)(vlTOPp->mac__DOT__shiftedMantB___05Fh106424)))
            ? 2ULL : 0ULL);
    vlTOPp->mac__DOT__x___05Fh460541 = (1U & ((IData)(
                                                      (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                                         >> 1U))));
    vlTOPp->mac__DOT__y___05Fh77298 = ((IData)(vlTOPp->mac__DOT__x___05Fh77394) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77395));
    vlTOPp->mac__DOT__y___05Fh474666 = ((IData)(vlTOPp->mac__DOT__y___05Fh474388) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           >> 2U));
    vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_2_ETC___05F_d1583 
        = ((1U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1576)
                   ? (vlTOPp->mac__DOT__rg_C >> 0x1fU)
                   : (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq42 
                      >> 0x1fU))) ? 0x80000000U : 0U);
    vlTOPp->mac__DOT__add_mant_Result___05Fh473685 
        = (0xffffffffffffULL & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1576)
                                 ? (vlTOPp->mac__DOT__shiftedMantB___05Fh106424 
                                    - vlTOPp->mac__DOT__shiftedMantA___05Fh106423)
                                 : (vlTOPp->mac__DOT__shiftedMantA___05Fh106423 
                                    - vlTOPp->mac__DOT__shiftedMantB___05Fh106424)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1920 
        = ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh460541) 
                   ^ (IData)((vlTOPp->mac__DOT__IF_shiftedMantA06423_BIT_0_AND_shiftedMantB064_ETC___05Fq41 
                              >> 1U))) << 1U)) | (1U 
                                                  & (IData)(vlTOPp->mac__DOT__IF_shiftedMantA06423_BIT_0_XOR_shiftedMantB064_ETC___05Fq43)));
    vlTOPp->mac__DOT__y___05Fh460917 = ((IData)((vlTOPp->mac__DOT__IF_shiftedMantA06423_BIT_0_AND_shiftedMantB064_ETC___05Fq41 
                                                 >> 1U)) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh460541));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d695 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh77297) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh77298)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh77020) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh77021)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d694)));
    vlTOPp->mac__DOT__y___05Fh77672 = ((IData)(vlTOPp->mac__DOT__y___05Fh77298) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77297));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1977 
        = ((8U & ((0xfffffff8U & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                  ^ ((IData)(vlTOPp->mac__DOT__y___05Fh474666) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                        ^ ((IData)(vlTOPp->mac__DOT__y___05Fh474388) 
                                           << 2U))) 
                                 | ((2U & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           ^ (IData)(vlTOPp->mac__DOT__IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_B_ETC___05Fq45))) 
                                    | (1U & (IData)(vlTOPp->mac__DOT__IF_INV_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B___05FETC___05Fq46)))));
    vlTOPp->mac__DOT__y___05Fh474943 = ((IData)(vlTOPp->mac__DOT__y___05Fh474666) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           >> 3U));
    vlTOPp->mac__DOT__y___05Fh460819 = ((IData)(vlTOPp->mac__DOT__x___05Fh460916) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh460917));
    vlTOPp->mac__DOT__y___05Fh77575 = ((IData)(vlTOPp->mac__DOT__x___05Fh77671) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77672));
    vlTOPp->mac__DOT__y___05Fh475220 = ((IData)(vlTOPp->mac__DOT__y___05Fh474943) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           >> 4U));
    vlTOPp->mac__DOT__y___05Fh461198 = ((IData)(vlTOPp->mac__DOT__y___05Fh460819) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh460818));
    vlTOPp->mac__DOT__y___05Fh77949 = ((IData)(vlTOPp->mac__DOT__y___05Fh77575) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh77574));
    vlTOPp->mac__DOT__y___05Fh475497 = ((IData)(vlTOPp->mac__DOT__y___05Fh475220) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           >> 5U));
    vlTOPp->mac__DOT__y___05Fh461100 = ((IData)(vlTOPp->mac__DOT__x___05Fh461197) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh461198));
    vlTOPp->mac__DOT__y___05Fh77852 = ((IData)(vlTOPp->mac__DOT__x___05Fh77948) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh77949));
    vlTOPp->mac__DOT__y___05Fh475774 = ((IData)(vlTOPp->mac__DOT__y___05Fh475497) 
                                        & ((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949) 
                                           >> 6U));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1921 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh461099) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh461100)) 
            << 3U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh460818) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh460819)) 
                       << 2U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1920)));
    vlTOPp->mac__DOT__y___05Fh461478 = ((IData)(vlTOPp->mac__DOT__y___05Fh461100) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh461099));
    vlTOPp->mac__DOT__mult_result___05Fh3818 = ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mac__DOT__y___05Fh77852) 
                                                     << 0xfU))) 
                                                | ((((IData)(vlTOPp->mac__DOT__x___05Fh77574) 
                                                     ^ (IData)(vlTOPp->mac__DOT__y___05Fh77575)) 
                                                    << 0xeU) 
                                                   | (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d695)));
    vlTOPp->mac__DOT__spliced_bits___05Fh473716 = (
                                                   (0x80U 
                                                    & ((0xffffff80U 
                                                        & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mac__DOT__y___05Fh475774) 
                                                        << 7U))) 
                                                   | ((0x40U 
                                                       & ((0xffffffc0U 
                                                           & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mac__DOT__y___05Fh475497) 
                                                           << 6U))) 
                                                      | ((0x20U 
                                                          & ((0xffffffe0U 
                                                              & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mac__DOT__y___05Fh475220) 
                                                              << 5U))) 
                                                         | ((0x10U 
                                                             & ((0xfffffff0U 
                                                                 & (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1949)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mac__DOT__y___05Fh474943) 
                                                                 << 4U))) 
                                                            | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1977)))));
    vlTOPp->mac__DOT__y___05Fh461380 = ((IData)(vlTOPp->mac__DOT__x___05Fh461477) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh461478));
    vlTOPp->mac__DOT__x___05Fh1243 = ((0x80U & (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh22063))
                                       ? (IData)(vlTOPp->mac__DOT__mult_result___05Fh3818)
                                       : (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d638));
    vlTOPp->mac__DOT__y___05Fh461758 = ((IData)(vlTOPp->mac__DOT__y___05Fh461380) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh461379));
    vlTOPp->mac__DOT__x___05Fh92309 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xfU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xfU)));
    vlTOPp->mac__DOT__x___05Fh91935 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xfU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xfU)));
    vlTOPp->mac__DOT__x___05Fh92032 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xeU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh91658 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xeU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xeU)));
    vlTOPp->mac__DOT__x___05Fh91755 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xdU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh91381 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xdU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xdU)));
    vlTOPp->mac__DOT__x___05Fh91478 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xcU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh91104 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xcU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xcU)));
    vlTOPp->mac__DOT__x___05Fh91201 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xbU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__x___05Fh90827 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xbU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xbU)));
    vlTOPp->mac__DOT__IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq31 
        = ((1U & ((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                  ^ vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118))
            ? 1U : 0U);
    vlTOPp->mac__DOT__x___05Fh90924 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xaU) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh90550 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 0xaU) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 0xaU)));
    vlTOPp->mac__DOT__x___05Fh90647 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 9U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh90273 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 9U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 9U)));
    vlTOPp->mac__DOT__x___05Fh90370 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 8U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh89996 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 8U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 8U)));
    vlTOPp->mac__DOT__x___05Fh90093 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 7U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh89719 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 7U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 7U)));
    vlTOPp->mac__DOT__x___05Fh89816 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 6U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh89442 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 6U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 6U)));
    vlTOPp->mac__DOT__x___05Fh89539 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 5U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh89165 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 5U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 5U)));
    vlTOPp->mac__DOT__x___05Fh89262 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 4U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh88888 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 4U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 4U)));
    vlTOPp->mac__DOT__x___05Fh88985 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 3U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh88611 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 3U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 3U)));
    vlTOPp->mac__DOT__x___05Fh88708 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 2U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh88333 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 2U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 2U)));
    vlTOPp->mac__DOT__x___05Fh88430 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 1U) 
                                             & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 1U)));
    vlTOPp->mac__DOT__IF_x243_BIT_0_AND_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq30 
        = ((1U & ((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                  & vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118))
            ? 2U : 0U);
    vlTOPp->mac__DOT__x___05Fh88059 = (1U & (((IData)(vlTOPp->mac__DOT__x___05Fh1243) 
                                              >> 1U) 
                                             ^ (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                                >> 1U)));
    vlTOPp->mac__DOT__y___05Fh461660 = ((IData)(vlTOPp->mac__DOT__x___05Fh461757) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh461758));
    if ((1U & vlTOPp->mac__DOT__IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq31)) {
        vlTOPp->mac__DOT__IF_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_r_ETC___05Fq47 = 1U;
        vlTOPp->mac__DOT__IF_INV_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_I_ETC___05Fq32 = 0U;
    } else {
        vlTOPp->mac__DOT__IF_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_r_ETC___05Fq47 = 0U;
        vlTOPp->mac__DOT__IF_INV_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_I_ETC___05Fq32 = 2U;
    }
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d832 
        = (1U & ((IData)(vlTOPp->mac__DOT__x___05Fh88059) 
                 ^ (vlTOPp->mac__DOT__IF_x243_BIT_0_AND_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq30 
                    >> 1U)));
    vlTOPp->mac__DOT__y___05Fh88431 = ((vlTOPp->mac__DOT__IF_x243_BIT_0_AND_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq30 
                                        >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh88059));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1922 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh461659) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh461660)) 
            << 5U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh461379) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh461380)) 
                       << 4U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1921)));
    vlTOPp->mac__DOT__y___05Fh462038 = ((IData)(vlTOPp->mac__DOT__y___05Fh461660) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh461659));
    vlTOPp->mac__DOT__x___05Fh97793 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d832)));
    vlTOPp->mac__DOT__y___05Fh88334 = ((IData)(vlTOPp->mac__DOT__x___05Fh88430) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh88431));
    vlTOPp->mac__DOT__y___05Fh461940 = ((IData)(vlTOPp->mac__DOT__x___05Fh462037) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh462038));
    vlTOPp->mac__DOT__y___05Fh98070 = ((vlTOPp->mac__DOT__IF_INV_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_I_ETC___05Fq32 
                                        >> 1U) & (IData)(vlTOPp->mac__DOT__x___05Fh97793));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d835 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh88333) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh88334));
    vlTOPp->mac__DOT__y___05Fh88709 = ((IData)(vlTOPp->mac__DOT__y___05Fh88334) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh88333));
    vlTOPp->mac__DOT__y___05Fh462318 = ((IData)(vlTOPp->mac__DOT__y___05Fh461940) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh461939));
    vlTOPp->mac__DOT__x___05Fh98069 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d835)));
    vlTOPp->mac__DOT__y___05Fh88612 = ((IData)(vlTOPp->mac__DOT__x___05Fh88708) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh88709));
    vlTOPp->mac__DOT__y___05Fh462220 = ((IData)(vlTOPp->mac__DOT__x___05Fh462317) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh462318));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d951 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh98069) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh98070)) 
            << 2U) | ((2U & (((IData)(vlTOPp->mac__DOT__x___05Fh97793) 
                              << 1U) ^ (0xfffffffeU 
                                        & vlTOPp->mac__DOT__IF_INV_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_I_ETC___05Fq32))) 
                      | (1U & vlTOPp->mac__DOT__IF_IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_r_ETC___05Fq47)));
    vlTOPp->mac__DOT__y___05Fh98349 = ((IData)(vlTOPp->mac__DOT__y___05Fh98070) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh98069));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d838 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh88611) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh88612));
    vlTOPp->mac__DOT__y___05Fh88986 = ((IData)(vlTOPp->mac__DOT__y___05Fh88612) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh88611));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1923 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh462219) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh462220)) 
            << 7U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh461939) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh461940)) 
                       << 6U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1922)));
    vlTOPp->mac__DOT__y___05Fh462598 = ((IData)(vlTOPp->mac__DOT__y___05Fh462220) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh462219));
    vlTOPp->mac__DOT__x___05Fh98348 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d838)));
    vlTOPp->mac__DOT__y___05Fh88889 = ((IData)(vlTOPp->mac__DOT__x___05Fh88985) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh88986));
    vlTOPp->mac__DOT__y___05Fh462500 = ((IData)(vlTOPp->mac__DOT__x___05Fh462597) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh462598));
    vlTOPp->mac__DOT__y___05Fh98627 = ((IData)(vlTOPp->mac__DOT__y___05Fh98349) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh98348));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d841 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh88888) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh88889));
    vlTOPp->mac__DOT__y___05Fh89263 = ((IData)(vlTOPp->mac__DOT__y___05Fh88889) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh88888));
    vlTOPp->mac__DOT__y___05Fh462878 = ((IData)(vlTOPp->mac__DOT__y___05Fh462500) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh462499));
    vlTOPp->mac__DOT__x___05Fh98626 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d841)));
    vlTOPp->mac__DOT__y___05Fh89166 = ((IData)(vlTOPp->mac__DOT__x___05Fh89262) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh89263));
    vlTOPp->mac__DOT__y___05Fh462780 = ((IData)(vlTOPp->mac__DOT__x___05Fh462877) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh462878));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d952 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh98626) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh98627)) 
            << 4U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh98348) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh98349)) 
                       << 3U) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d951)));
    vlTOPp->mac__DOT__y___05Fh98905 = ((IData)(vlTOPp->mac__DOT__y___05Fh98627) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh98626));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d844 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh89165) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh89166));
    vlTOPp->mac__DOT__y___05Fh89540 = ((IData)(vlTOPp->mac__DOT__y___05Fh89166) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh89165));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1924 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh462779) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh462780)) 
            << 9U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh462499) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh462500)) 
                       << 8U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1923)));
    vlTOPp->mac__DOT__y___05Fh463158 = ((IData)(vlTOPp->mac__DOT__y___05Fh462780) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh462779));
    vlTOPp->mac__DOT__x___05Fh98904 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d844)));
    vlTOPp->mac__DOT__y___05Fh89443 = ((IData)(vlTOPp->mac__DOT__x___05Fh89539) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh89540));
    vlTOPp->mac__DOT__y___05Fh463060 = ((IData)(vlTOPp->mac__DOT__x___05Fh463157) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh463158));
    vlTOPp->mac__DOT__y___05Fh99183 = ((IData)(vlTOPp->mac__DOT__y___05Fh98905) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh98904));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d847 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh89442) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh89443));
    vlTOPp->mac__DOT__y___05Fh89817 = ((IData)(vlTOPp->mac__DOT__y___05Fh89443) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh89442));
    vlTOPp->mac__DOT__y___05Fh463438 = ((IData)(vlTOPp->mac__DOT__y___05Fh463060) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh463059));
    vlTOPp->mac__DOT__x___05Fh99182 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d847)));
    vlTOPp->mac__DOT__y___05Fh89720 = ((IData)(vlTOPp->mac__DOT__x___05Fh89816) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh89817));
    vlTOPp->mac__DOT__y___05Fh463340 = ((IData)(vlTOPp->mac__DOT__x___05Fh463437) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh463438));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d953 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh99182) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh99183)) 
            << 6U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh98904) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh98905)) 
                       << 5U) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d952)));
    vlTOPp->mac__DOT__y___05Fh99461 = ((IData)(vlTOPp->mac__DOT__y___05Fh99183) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99182));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d850 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh89719) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh89720));
    vlTOPp->mac__DOT__y___05Fh90094 = ((IData)(vlTOPp->mac__DOT__y___05Fh89720) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh89719));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1925 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh463339) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh463340)) 
            << 0xbU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh463059) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh463060)) 
                         << 0xaU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1924)));
    vlTOPp->mac__DOT__y___05Fh463718 = ((IData)(vlTOPp->mac__DOT__y___05Fh463340) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh463339));
    vlTOPp->mac__DOT__x___05Fh99460 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d850)));
    vlTOPp->mac__DOT__y___05Fh89997 = ((IData)(vlTOPp->mac__DOT__x___05Fh90093) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90094));
    vlTOPp->mac__DOT__y___05Fh463620 = ((IData)(vlTOPp->mac__DOT__x___05Fh463717) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh463718));
    vlTOPp->mac__DOT__y___05Fh99739 = ((IData)(vlTOPp->mac__DOT__y___05Fh99461) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh99460));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d853 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh89996) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh89997));
    vlTOPp->mac__DOT__y___05Fh90371 = ((IData)(vlTOPp->mac__DOT__y___05Fh89997) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh89996));
    vlTOPp->mac__DOT__y___05Fh463998 = ((IData)(vlTOPp->mac__DOT__y___05Fh463620) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh463619));
    vlTOPp->mac__DOT__x___05Fh99738 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d853)));
    vlTOPp->mac__DOT__y___05Fh90274 = ((IData)(vlTOPp->mac__DOT__x___05Fh90370) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90371));
    vlTOPp->mac__DOT__y___05Fh463900 = ((IData)(vlTOPp->mac__DOT__x___05Fh463997) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh463998));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d954 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh99738) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh99739)) 
            << 8U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh99460) 
                        ^ (IData)(vlTOPp->mac__DOT__y___05Fh99461)) 
                       << 7U) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d953)));
    vlTOPp->mac__DOT__y___05Fh100017 = ((IData)(vlTOPp->mac__DOT__y___05Fh99739) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh99738));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d856 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh90273) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh90274));
    vlTOPp->mac__DOT__y___05Fh90648 = ((IData)(vlTOPp->mac__DOT__y___05Fh90274) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90273));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1926 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh463899) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh463900)) 
            << 0xdU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh463619) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh463620)) 
                         << 0xcU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1925)));
    vlTOPp->mac__DOT__y___05Fh464278 = ((IData)(vlTOPp->mac__DOT__y___05Fh463900) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh463899));
    vlTOPp->mac__DOT__x___05Fh100016 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d856)));
    vlTOPp->mac__DOT__y___05Fh90551 = ((IData)(vlTOPp->mac__DOT__x___05Fh90647) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90648));
    vlTOPp->mac__DOT__y___05Fh464180 = ((IData)(vlTOPp->mac__DOT__x___05Fh464277) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh464278));
    vlTOPp->mac__DOT__y___05Fh100295 = ((IData)(vlTOPp->mac__DOT__y___05Fh100017) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100016));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d859 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh90550) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh90551));
    vlTOPp->mac__DOT__y___05Fh90925 = ((IData)(vlTOPp->mac__DOT__y___05Fh90551) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90550));
    vlTOPp->mac__DOT__y___05Fh464558 = ((IData)(vlTOPp->mac__DOT__y___05Fh464180) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh464179));
    vlTOPp->mac__DOT__x___05Fh100294 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d859)));
    vlTOPp->mac__DOT__y___05Fh90828 = ((IData)(vlTOPp->mac__DOT__x___05Fh90924) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh90925));
    vlTOPp->mac__DOT__y___05Fh464460 = ((IData)(vlTOPp->mac__DOT__x___05Fh464557) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh464558));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d955 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh100294) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh100295)) 
            << 0xaU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh100016) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh100017)) 
                         << 9U) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d954)));
    vlTOPp->mac__DOT__y___05Fh100573 = ((IData)(vlTOPp->mac__DOT__y___05Fh100295) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100294));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d862 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh90827) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh90828));
    vlTOPp->mac__DOT__y___05Fh91202 = ((IData)(vlTOPp->mac__DOT__y___05Fh90828) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh90827));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1927 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh464459) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh464460)) 
            << 0xfU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh464179) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh464180)) 
                         << 0xeU) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1926)));
    vlTOPp->mac__DOT__y___05Fh464838 = ((IData)(vlTOPp->mac__DOT__y___05Fh464460) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh464459));
    vlTOPp->mac__DOT__x___05Fh100572 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d862)));
    vlTOPp->mac__DOT__y___05Fh91105 = ((IData)(vlTOPp->mac__DOT__x___05Fh91201) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh91202));
    vlTOPp->mac__DOT__y___05Fh464740 = ((IData)(vlTOPp->mac__DOT__x___05Fh464837) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh464838));
    vlTOPp->mac__DOT__y___05Fh100851 = ((IData)(vlTOPp->mac__DOT__y___05Fh100573) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100572));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d865 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh91104) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh91105));
    vlTOPp->mac__DOT__y___05Fh91479 = ((IData)(vlTOPp->mac__DOT__y___05Fh91105) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh91104));
    vlTOPp->mac__DOT__y___05Fh465118 = ((IData)(vlTOPp->mac__DOT__y___05Fh464740) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh464739));
    vlTOPp->mac__DOT__x___05Fh100850 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d865)));
    vlTOPp->mac__DOT__y___05Fh91382 = ((IData)(vlTOPp->mac__DOT__x___05Fh91478) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh91479));
    vlTOPp->mac__DOT__y___05Fh465020 = ((IData)(vlTOPp->mac__DOT__x___05Fh465117) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh465118));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d956 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh100850) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh100851)) 
            << 0xcU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh100572) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh100573)) 
                         << 0xbU) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d955)));
    vlTOPp->mac__DOT__y___05Fh101129 = ((IData)(vlTOPp->mac__DOT__y___05Fh100851) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh100850));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d868 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh91381) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh91382));
    vlTOPp->mac__DOT__y___05Fh91756 = ((IData)(vlTOPp->mac__DOT__y___05Fh91382) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh91381));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1928 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh465019) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh465020)) 
            << 0x11U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh464739) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh464740)) 
                          << 0x10U) | (IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1927)));
    vlTOPp->mac__DOT__y___05Fh465398 = ((IData)(vlTOPp->mac__DOT__y___05Fh465020) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh465019));
    vlTOPp->mac__DOT__x___05Fh101128 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d868)));
    vlTOPp->mac__DOT__y___05Fh91659 = ((IData)(vlTOPp->mac__DOT__x___05Fh91755) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh91756));
    vlTOPp->mac__DOT__y___05Fh465300 = ((IData)(vlTOPp->mac__DOT__x___05Fh465397) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh465398));
    vlTOPp->mac__DOT__y___05Fh101407 = ((IData)(vlTOPp->mac__DOT__y___05Fh101129) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh101128));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d871 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh91658) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh91659));
    vlTOPp->mac__DOT__y___05Fh92033 = ((IData)(vlTOPp->mac__DOT__y___05Fh91659) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh91658));
    vlTOPp->mac__DOT__y___05Fh465678 = ((IData)(vlTOPp->mac__DOT__y___05Fh465300) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh465299));
    vlTOPp->mac__DOT__x___05Fh101406 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d871)));
    vlTOPp->mac__DOT__y___05Fh91936 = ((IData)(vlTOPp->mac__DOT__x___05Fh92032) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh92033));
    vlTOPp->mac__DOT__y___05Fh465580 = ((IData)(vlTOPp->mac__DOT__x___05Fh465677) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh465678));
    vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d957 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh101406) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh101407)) 
            << 0xeU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh101128) 
                          ^ (IData)(vlTOPp->mac__DOT__y___05Fh101129)) 
                         << 0xdU) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d956)));
    vlTOPp->mac__DOT__y___05Fh101685 = ((IData)(vlTOPp->mac__DOT__y___05Fh101407) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh101406));
    vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d874 
        = ((IData)(vlTOPp->mac__DOT__x___05Fh91935) 
           ^ (IData)(vlTOPp->mac__DOT__y___05Fh91936));
    vlTOPp->mac__DOT__y___05Fh92310 = ((IData)(vlTOPp->mac__DOT__y___05Fh91936) 
                                       & (IData)(vlTOPp->mac__DOT__x___05Fh91935));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1929 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh465579) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh465580)) 
            << 0x13U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh465299) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh465300)) 
                          << 0x12U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1928));
    vlTOPp->mac__DOT__y___05Fh465958 = ((IData)(vlTOPp->mac__DOT__y___05Fh465580) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh465579));
    vlTOPp->mac__DOT__x___05Fh101684 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d874)));
    vlTOPp->mac__DOT__y___05Fh92213 = ((IData)(vlTOPp->mac__DOT__x___05Fh92309) 
                                       | (IData)(vlTOPp->mac__DOT__y___05Fh92310));
    vlTOPp->mac__DOT__y___05Fh465860 = ((IData)(vlTOPp->mac__DOT__x___05Fh465957) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh465958));
    vlTOPp->mac__DOT__y___05Fh101963 = ((IData)(vlTOPp->mac__DOT__y___05Fh101685) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh101684));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d877 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x10U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh92213)));
    vlTOPp->mac__DOT__y___05Fh92490 = ((IData)(vlTOPp->mac__DOT__y___05Fh92213) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x10U));
    vlTOPp->mac__DOT__y___05Fh466238 = ((IData)(vlTOPp->mac__DOT__y___05Fh465860) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh465859));
    vlTOPp->mac__DOT__x___05Fh101962 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d877)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d880 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x11U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh92490)));
    vlTOPp->mac__DOT__y___05Fh92767 = ((IData)(vlTOPp->mac__DOT__y___05Fh92490) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x11U));
    vlTOPp->mac__DOT__y___05Fh466140 = ((IData)(vlTOPp->mac__DOT__x___05Fh466237) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh466238));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d958 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh101962) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh101963)) 
            << 0x10U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh101684) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh101685)) 
                          << 0xfU) | (IData)(vlTOPp->mac__DOT__INV_IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BI_ETC___05F_d957)));
    vlTOPp->mac__DOT__y___05Fh102241 = ((IData)(vlTOPp->mac__DOT__y___05Fh101963) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh101962));
    vlTOPp->mac__DOT__x___05Fh102240 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d880)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d883 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x12U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh92767)));
    vlTOPp->mac__DOT__y___05Fh93044 = ((IData)(vlTOPp->mac__DOT__y___05Fh92767) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x12U));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1930 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh466139) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh466140)) 
            << 0x15U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh465859) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh465860)) 
                          << 0x14U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1929));
    vlTOPp->mac__DOT__y___05Fh466518 = ((IData)(vlTOPp->mac__DOT__y___05Fh466140) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh466139));
    vlTOPp->mac__DOT__y___05Fh102519 = ((IData)(vlTOPp->mac__DOT__y___05Fh102241) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh102240));
    vlTOPp->mac__DOT__x___05Fh102518 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d883)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d886 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x13U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh93044)));
    vlTOPp->mac__DOT__y___05Fh93321 = ((IData)(vlTOPp->mac__DOT__y___05Fh93044) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x13U));
    vlTOPp->mac__DOT__y___05Fh466420 = ((IData)(vlTOPp->mac__DOT__x___05Fh466517) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh466518));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d959 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh102518) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh102519)) 
            << 0x12U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh102240) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh102241)) 
                          << 0x11U) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d958));
    vlTOPp->mac__DOT__y___05Fh102797 = ((IData)(vlTOPp->mac__DOT__y___05Fh102519) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh102518));
    vlTOPp->mac__DOT__x___05Fh102796 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d886)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d889 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x14U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh93321)));
    vlTOPp->mac__DOT__y___05Fh93598 = ((IData)(vlTOPp->mac__DOT__y___05Fh93321) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x14U));
    vlTOPp->mac__DOT__y___05Fh466798 = ((IData)(vlTOPp->mac__DOT__y___05Fh466420) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh466419));
    vlTOPp->mac__DOT__y___05Fh103075 = ((IData)(vlTOPp->mac__DOT__y___05Fh102797) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh102796));
    vlTOPp->mac__DOT__x___05Fh103074 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d889)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d892 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x15U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh93598)));
    vlTOPp->mac__DOT__y___05Fh93875 = ((IData)(vlTOPp->mac__DOT__y___05Fh93598) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x15U));
    vlTOPp->mac__DOT__y___05Fh466700 = ((IData)(vlTOPp->mac__DOT__x___05Fh466797) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh466798));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d960 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh103074) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh103075)) 
            << 0x14U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh102796) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh102797)) 
                          << 0x13U) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d959));
    vlTOPp->mac__DOT__y___05Fh103353 = ((IData)(vlTOPp->mac__DOT__y___05Fh103075) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103074));
    vlTOPp->mac__DOT__x___05Fh103352 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d892)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d895 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x16U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh93875)));
    vlTOPp->mac__DOT__y___05Fh94152 = ((IData)(vlTOPp->mac__DOT__y___05Fh93875) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x16U));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1931 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh466699) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh466700)) 
            << 0x17U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh466419) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh466420)) 
                          << 0x16U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1930));
    vlTOPp->mac__DOT__y___05Fh467078 = ((IData)(vlTOPp->mac__DOT__y___05Fh466700) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh466699));
    vlTOPp->mac__DOT__y___05Fh103631 = ((IData)(vlTOPp->mac__DOT__y___05Fh103353) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103352));
    vlTOPp->mac__DOT__x___05Fh103630 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d895)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d898 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x17U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh94152)));
    vlTOPp->mac__DOT__y___05Fh94429 = ((IData)(vlTOPp->mac__DOT__y___05Fh94152) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x17U));
    vlTOPp->mac__DOT__y___05Fh466980 = ((IData)(vlTOPp->mac__DOT__x___05Fh467077) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh467078));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d961 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh103630) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh103631)) 
            << 0x16U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh103352) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh103353)) 
                          << 0x15U) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d960));
    vlTOPp->mac__DOT__y___05Fh103909 = ((IData)(vlTOPp->mac__DOT__y___05Fh103631) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103630));
    vlTOPp->mac__DOT__x___05Fh103908 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d898)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d901 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x18U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh94429)));
    vlTOPp->mac__DOT__y___05Fh94706 = ((IData)(vlTOPp->mac__DOT__y___05Fh94429) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x18U));
    vlTOPp->mac__DOT__y___05Fh467358 = ((IData)(vlTOPp->mac__DOT__y___05Fh466980) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh466979));
    vlTOPp->mac__DOT__y___05Fh104187 = ((IData)(vlTOPp->mac__DOT__y___05Fh103909) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh103908));
    vlTOPp->mac__DOT__x___05Fh104186 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d901)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d904 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x19U) ^ (IData)(vlTOPp->mac__DOT__y___05Fh94706)));
    vlTOPp->mac__DOT__y___05Fh94983 = ((IData)(vlTOPp->mac__DOT__y___05Fh94706) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x19U));
    vlTOPp->mac__DOT__y___05Fh467260 = ((IData)(vlTOPp->mac__DOT__x___05Fh467357) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh467358));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d962 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh104186) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh104187)) 
            << 0x18U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh103908) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh103909)) 
                          << 0x17U) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d961));
    vlTOPp->mac__DOT__y___05Fh104465 = ((IData)(vlTOPp->mac__DOT__y___05Fh104187) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104186));
    vlTOPp->mac__DOT__x___05Fh104464 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d904)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d907 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1aU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh94983)));
    vlTOPp->mac__DOT__y___05Fh95260 = ((IData)(vlTOPp->mac__DOT__y___05Fh94983) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x1aU));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1932 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh467259) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh467260)) 
            << 0x19U) | ((((IData)(vlTOPp->mac__DOT__x___05Fh466979) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh466980)) 
                          << 0x18U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1931));
    vlTOPp->mac__DOT__y___05Fh467638 = ((IData)(vlTOPp->mac__DOT__y___05Fh467260) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh467259));
    vlTOPp->mac__DOT__y___05Fh104743 = ((IData)(vlTOPp->mac__DOT__y___05Fh104465) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104464));
    vlTOPp->mac__DOT__x___05Fh104742 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d907)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d910 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1bU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh95260)));
    vlTOPp->mac__DOT__y___05Fh95537 = ((IData)(vlTOPp->mac__DOT__y___05Fh95260) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x1bU));
    vlTOPp->mac__DOT__y___05Fh467540 = ((IData)(vlTOPp->mac__DOT__x___05Fh467637) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh467638));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d963 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh104742) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh104743)) 
            << 0x1aU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh104464) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh104465)) 
                          << 0x19U) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d962));
    vlTOPp->mac__DOT__y___05Fh105021 = ((IData)(vlTOPp->mac__DOT__y___05Fh104743) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh104742));
    vlTOPp->mac__DOT__x___05Fh105020 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d910)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d913 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1cU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh95537)));
    vlTOPp->mac__DOT__y___05Fh95814 = ((IData)(vlTOPp->mac__DOT__y___05Fh95537) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x1cU));
    vlTOPp->mac__DOT__y___05Fh467918 = ((IData)(vlTOPp->mac__DOT__y___05Fh467540) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh467539));
    vlTOPp->mac__DOT__y___05Fh105299 = ((IData)(vlTOPp->mac__DOT__y___05Fh105021) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh105020));
    vlTOPp->mac__DOT__x___05Fh105298 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d913)));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d916 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1dU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh95814)));
    vlTOPp->mac__DOT__y___05Fh96091 = ((IData)(vlTOPp->mac__DOT__y___05Fh95814) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x1dU));
    vlTOPp->mac__DOT__y___05Fh467820 = ((IData)(vlTOPp->mac__DOT__x___05Fh467917) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh467918));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d964 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh105298) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh105299)) 
            << 0x1cU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh105020) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh105021)) 
                          << 0x1bU) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d963));
    vlTOPp->mac__DOT__y___05Fh105577 = ((IData)(vlTOPp->mac__DOT__y___05Fh105299) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh105298));
    vlTOPp->mac__DOT__x___05Fh105576 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d916)));
    vlTOPp->mac__DOT__y___05Fh96368 = ((IData)(vlTOPp->mac__DOT__y___05Fh96091) 
                                       & (vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                                          >> 0x1eU));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d824 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1eU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh96091)));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1933 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh467819) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh467820)) 
            << 0x1bU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh467539) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh467540)) 
                          << 0x1aU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1932));
    vlTOPp->mac__DOT__y___05Fh468198 = ((IData)(vlTOPp->mac__DOT__y___05Fh467820) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh467819));
    vlTOPp->mac__DOT__y___05Fh105855 = ((IData)(vlTOPp->mac__DOT__y___05Fh105577) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh105576));
    vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d823 
        = (1U & ((vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d118 
                  >> 0x1fU) ^ (IData)(vlTOPp->mac__DOT__y___05Fh96368)));
    vlTOPp->mac__DOT__x___05Fh105854 = (1U & (~ (IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d824)));
    vlTOPp->mac__DOT__y___05Fh468100 = ((IData)(vlTOPp->mac__DOT__x___05Fh468197) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh468198));
    vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d965 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh105854) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh105855)) 
            << 0x1eU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh105576) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh105577)) 
                          << 0x1dU) | vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d964));
    vlTOPp->mac__DOT__y___05Fh468478 = ((IData)(vlTOPp->mac__DOT__y___05Fh468100) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh468099));
    vlTOPp->mac__DOT__IF_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF___05FETC___05F_d981 
        = ((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d823)
            ? vlTOPp->mac__DOT__INV_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_ETC___05F_d965
            : (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d824) 
                << 0x1eU) | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d916) 
                              << 0x1dU) | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d913) 
                                            << 0x1cU) 
                                           | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d910) 
                                               << 0x1bU) 
                                              | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d907) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d904) 
                                                     << 0x19U) 
                                                    | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d901) 
                                                        << 0x18U) 
                                                       | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d898) 
                                                           << 0x17U) 
                                                          | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d895) 
                                                              << 0x16U) 
                                                             | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d892) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d889) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d886) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d883) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d880) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d877) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d874) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d871) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d868) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d865) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d862) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d859) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d856) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d853) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d850) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d847) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d844) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d841) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d838) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d835) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mac__DOT__IF_IF_rg_B_20_BIT_7_21_THEN_INV_rg_B_20_BITS_7_ETC___05F_d832) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mac__DOT__IF_x243_BIT_0_XOR_IF_rg_C_BIT_31_THEN_INV_rg_C_ETC___05Fq31))))))))))))))))))))))))))))))));
    vlTOPp->mac__DOT__y___05Fh468380 = ((IData)(vlTOPp->mac__DOT__x___05Fh468477) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh468478));
    vlTOPp->mac__DOT__rg_out_int_D_IN = (((IData)(vlTOPp->mac__DOT__IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF_INV_ETC___05F_d823) 
                                          << 0x1fU) 
                                         | vlTOPp->mac__DOT__IF_IF_rg_C_BIT_31_THEN_INV_rg_C_BIT_31_XOR_IF___05FETC___05F_d981);
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1934 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh468379) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh468380)) 
            << 0x1dU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh468099) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh468100)) 
                          << 0x1cU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1933));
    vlTOPp->mac__DOT__y___05Fh468758 = ((IData)(vlTOPp->mac__DOT__y___05Fh468380) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh468379));
    vlTOPp->mac__DOT__y___05Fh468660 = ((IData)(vlTOPp->mac__DOT__x___05Fh468757) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh468758));
    vlTOPp->mac__DOT__y___05Fh469038 = ((IData)(vlTOPp->mac__DOT__y___05Fh468660) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh468659));
    vlTOPp->mac__DOT__y___05Fh468940 = ((IData)(vlTOPp->mac__DOT__x___05Fh469037) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh469038));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1935 
        = ((((IData)(vlTOPp->mac__DOT__x___05Fh468939) 
             ^ (IData)(vlTOPp->mac__DOT__y___05Fh468940)) 
            << 0x1fU) | ((((IData)(vlTOPp->mac__DOT__x___05Fh468659) 
                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh468660)) 
                          << 0x1eU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1934));
    vlTOPp->mac__DOT__y___05Fh469318 = ((IData)(vlTOPp->mac__DOT__y___05Fh468940) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh468939));
    vlTOPp->mac__DOT__y___05Fh469220 = ((IData)(vlTOPp->mac__DOT__x___05Fh469317) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh469318));
    vlTOPp->mac__DOT__y___05Fh469598 = ((IData)(vlTOPp->mac__DOT__y___05Fh469220) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh469219));
    vlTOPp->mac__DOT__y___05Fh469500 = ((IData)(vlTOPp->mac__DOT__x___05Fh469597) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh469598));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1936 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh469499) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh469500)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh469219) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh469220)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1935))));
    vlTOPp->mac__DOT__y___05Fh469878 = ((IData)(vlTOPp->mac__DOT__y___05Fh469500) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh469499));
    vlTOPp->mac__DOT__y___05Fh469780 = ((IData)(vlTOPp->mac__DOT__x___05Fh469877) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh469878));
    vlTOPp->mac__DOT__y___05Fh470158 = ((IData)(vlTOPp->mac__DOT__y___05Fh469780) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh469779));
    vlTOPp->mac__DOT__y___05Fh470060 = ((IData)(vlTOPp->mac__DOT__x___05Fh470157) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh470158));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1937 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh470059) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh470060)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh469779) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh469780)))) 
                          << 0x22U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1936));
    vlTOPp->mac__DOT__y___05Fh470438 = ((IData)(vlTOPp->mac__DOT__y___05Fh470060) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh470059));
    vlTOPp->mac__DOT__y___05Fh470340 = ((IData)(vlTOPp->mac__DOT__x___05Fh470437) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh470438));
    vlTOPp->mac__DOT__y___05Fh470718 = ((IData)(vlTOPp->mac__DOT__y___05Fh470340) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh470339));
    vlTOPp->mac__DOT__y___05Fh470620 = ((IData)(vlTOPp->mac__DOT__x___05Fh470717) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh470718));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1938 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh470619) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh470620)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh470339) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh470340)))) 
                          << 0x24U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1937));
    vlTOPp->mac__DOT__y___05Fh470998 = ((IData)(vlTOPp->mac__DOT__y___05Fh470620) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh470619));
    vlTOPp->mac__DOT__y___05Fh470900 = ((IData)(vlTOPp->mac__DOT__x___05Fh470997) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh470998));
    vlTOPp->mac__DOT__y___05Fh471278 = ((IData)(vlTOPp->mac__DOT__y___05Fh470900) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh470899));
    vlTOPp->mac__DOT__y___05Fh471180 = ((IData)(vlTOPp->mac__DOT__x___05Fh471277) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh471278));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1939 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh471179) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh471180)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh470899) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh470900)))) 
                          << 0x26U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1938));
    vlTOPp->mac__DOT__y___05Fh471558 = ((IData)(vlTOPp->mac__DOT__y___05Fh471180) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh471179));
    vlTOPp->mac__DOT__y___05Fh471460 = ((IData)(vlTOPp->mac__DOT__x___05Fh471557) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh471558));
    vlTOPp->mac__DOT__y___05Fh471838 = ((IData)(vlTOPp->mac__DOT__y___05Fh471460) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh471459));
    vlTOPp->mac__DOT__y___05Fh471740 = ((IData)(vlTOPp->mac__DOT__x___05Fh471837) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh471838));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1940 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh471739) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh471740)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh471459) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh471460)))) 
                          << 0x28U) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1939));
    vlTOPp->mac__DOT__y___05Fh472118 = ((IData)(vlTOPp->mac__DOT__y___05Fh471740) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh471739));
    vlTOPp->mac__DOT__y___05Fh472020 = ((IData)(vlTOPp->mac__DOT__x___05Fh472117) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh472118));
    vlTOPp->mac__DOT__y___05Fh472398 = ((IData)(vlTOPp->mac__DOT__y___05Fh472020) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh472019));
    vlTOPp->mac__DOT__y___05Fh472300 = ((IData)(vlTOPp->mac__DOT__x___05Fh472397) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh472398));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1941 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh472299) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh472300)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh472019) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh472020)))) 
                          << 0x2aU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1940));
    vlTOPp->mac__DOT__y___05Fh472678 = ((IData)(vlTOPp->mac__DOT__y___05Fh472300) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh472299));
    vlTOPp->mac__DOT__y___05Fh472580 = ((IData)(vlTOPp->mac__DOT__x___05Fh472677) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh472678));
    vlTOPp->mac__DOT__y___05Fh472958 = ((IData)(vlTOPp->mac__DOT__y___05Fh472580) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh472579));
    vlTOPp->mac__DOT__y___05Fh472860 = ((IData)(vlTOPp->mac__DOT__x___05Fh472957) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh472958));
    vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1942 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh472859) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh472860)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh472579) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh472580)))) 
                          << 0x2cU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1941));
    vlTOPp->mac__DOT__y___05Fh473238 = ((IData)(vlTOPp->mac__DOT__y___05Fh472860) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh472859));
    vlTOPp->mac__DOT__y___05Fh473140 = ((IData)(vlTOPp->mac__DOT__x___05Fh473237) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh473238));
    vlTOPp->mac__DOT__y___05Fh473518 = ((IData)(vlTOPp->mac__DOT__y___05Fh473140) 
                                        & (IData)(vlTOPp->mac__DOT__x___05Fh473139));
    vlTOPp->mac__DOT__y___05Fh473420 = ((IData)(vlTOPp->mac__DOT__x___05Fh473517) 
                                        | (IData)(vlTOPp->mac__DOT__y___05Fh473518));
    vlTOPp->mac__DOT__add_mant_Result___05Fh459112 
        = (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh473419) 
                             ^ (IData)(vlTOPp->mac__DOT__y___05Fh473420)))) 
            << 0x2fU) | (((QData)((IData)(((IData)(vlTOPp->mac__DOT__x___05Fh473139) 
                                           ^ (IData)(vlTOPp->mac__DOT__y___05Fh473140)))) 
                          << 0x2eU) | vlTOPp->mac__DOT__IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_20_BIT___05FETC___05F_d1942));
    vlTOPp->mac__DOT__IF_IF_rg_A_63_BIT_15_577_XOR_rg_B_20_BIT_15_57_ETC___05F_d1947 
        = (((1U & (vlTOPp->mac__DOT__IF_rg_A_BIT_15_XOR_rg_B_BIT_15_THEN_2147483648_ETC___05Fq42 
                   >> 0x1fU)) == (1U & (vlTOPp->mac__DOT__rg_C 
                                        >> 0x1fU)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh459112
            : vlTOPp->mac__DOT__add_mant_Result___05Fh473685);
    vlTOPp->mac__DOT__spliced_bits___05Fh106460 = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mac__DOT__IF_IF_rg_A_63_BIT_15_577_XOR_rg_B_20_BIT_15_57_ETC___05F_d1947 
                                                               >> 0x2fU)))
                                                    ? (IData)(vlTOPp->mac__DOT__spliced_bits___05Fh473716)
                                                    : (IData)(vlTOPp->mac__DOT__expA___05Fh106418));
    vlTOPp->mac__DOT__add_mant_Result___05Fh473713 
        = (0xfffffffffffeULL & (vlTOPp->mac__DOT__IF_IF_rg_A_63_BIT_15_577_XOR_rg_B_20_BIT_15_57_ETC___05F_d1947 
                                << 1U));
    vlTOPp->mac__DOT__add_mant_Result___05Fh476195 
        = (0xfffffffffffcULL & (vlTOPp->mac__DOT__IF_IF_rg_A_63_BIT_15_577_XOR_rg_B_20_BIT_15_57_ETC___05F_d1947 
                                << 2U));
    vlTOPp->mac__DOT__add_mant_Result___05Fh106429 
        = ((1U & (IData)((vlTOPp->mac__DOT__IF_IF_rg_A_63_BIT_15_577_XOR_rg_B_20_BIT_15_57_ETC___05F_d1947 
                          >> 0x2fU))) ? vlTOPp->mac__DOT__add_mant_Result___05Fh473713
            : vlTOPp->mac__DOT__add_mant_Result___05Fh476195);
    vlTOPp->mac__DOT__IF_add_mant_Result06429_BIT_25_THEN_33554432_E_ETC___05Fq44 
        = ((1U & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh106429 
                          >> 0x19U))) ? 0x2000000ULL
            : 0ULL);
    vlTOPp->mac__DOT__add_mant_Result___05F_1___05Fh476224 
        = (((QData)((IData)((0x3fffffU & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh106429 
                                                  >> 0x1aU))))) 
            << 0x1aU) | (QData)((IData)((0x3ffffffU 
                                         & (IData)(vlTOPp->mac__DOT__IF_add_mant_Result06429_BIT_25_THEN_33554432_E_ETC___05Fq44)))));
    vlTOPp->mac__DOT__IF_add_mant_Result06429_BITS_24_TO_0_EQ_0_THEN_ETC___05Fq48 
        = ((0U == (0x1ffffffU & (IData)(vlTOPp->mac__DOT__add_mant_Result___05Fh106429)))
            ? vlTOPp->mac__DOT__add_mant_Result___05Fh106429
            : ((1U & (IData)((vlTOPp->mac__DOT__add_mant_Result___05Fh106429 
                              >> 0x17U))) ? vlTOPp->mac__DOT__add_mant_Result___05F_1___05Fh476224
                : vlTOPp->mac__DOT__add_mant_Result___05Fh106429));
    vlTOPp->mac__DOT__rg_out_fp_D_IN = ((0x80000000U 
                                         & vlTOPp->mac__DOT__IF_IF_IF_IF_IF_rg_B_20_BIT_6_83_THEN_IF_rg_B_2_ETC___05F_d1583) 
                                        | (((IData)(vlTOPp->mac__DOT__spliced_bits___05Fh106460) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(
                                                        (vlTOPp->mac__DOT__IF_add_mant_Result06429_BITS_24_TO_0_EQ_0_THEN_ETC___05Fq48 
                                                         >> 0x19U)))));
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
