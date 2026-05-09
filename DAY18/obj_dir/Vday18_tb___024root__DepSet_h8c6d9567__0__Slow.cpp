// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb___024root.h"

VL_ATTR_COLD void Vday18_tb___024root___eval_static(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vday18_tb___024root___eval_final(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__stl(Vday18_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vday18_tb___024root___eval_phase__stl(Vday18_tb___024root* vlSelf);

VL_ATTR_COLD void Vday18_tb___024root___eval_settle(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vday18_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("day18_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vday18_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__stl(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vday18_tb___024root___act_sequent__TOP__0(Vday18_tb___024root* vlSelf);

VL_ATTR_COLD void Vday18_tb___024root___eval_stl(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vday18_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vday18_tb___024root___eval_triggers__stl(Vday18_tb___024root* vlSelf);

VL_ATTR_COLD bool Vday18_tb___024root___eval_phase__stl(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vday18_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vday18_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__act(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge day18_tb.clk or posedge day18_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge day18_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__nba(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge day18_tb.clk or posedge day18_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge day18_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vday18_tb___024root___ctor_var_reset(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->day18_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->day18_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->day18_tb__DOT__cmd_i = VL_RAND_RESET_I(2);
    vlSelf->day18_tb__DOT__wait_cycles = 0;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->day18_tb__DOT__apb_master__DOT__nxt_state = VL_RAND_RESET_I(2);
    vlSelf->day18_tb__DOT__apb_master__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
