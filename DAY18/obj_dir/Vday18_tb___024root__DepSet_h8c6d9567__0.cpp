// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb___024root.h"

VL_ATTR_COLD void Vday18_tb___024root___eval_initial__TOP(Vday18_tb___024root* vlSelf);
VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__0(Vday18_tb___024root* vlSelf);
VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__1(Vday18_tb___024root* vlSelf);
VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__2(Vday18_tb___024root* vlSelf);

void Vday18_tb___024root___eval_initial(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_initial\n"); );
    // Body
    Vday18_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vday18_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vday18_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vday18_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__clk__0 
        = vlSelf->day18_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__reset__0 
        = vlSelf->day18_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__2(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        vlSelf->day18_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "day18_tb.sv", 
                                           27);
        vlSelf->day18_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "day18_tb.sv", 
                                           29);
    }
}

void Vday18_tb___024root___act_sequent__TOP__0(Vday18_tb___024root* vlSelf);

void Vday18_tb___024root___eval_act(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vday18_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vday18_tb___024root___nba_sequent__TOP__0(Vday18_tb___024root* vlSelf);

void Vday18_tb___024root___eval_nba(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vday18_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vday18_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vday18_tb___024root___timing_resume(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6d6540b7__0.resume("@(posedge day18_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vday18_tb___024root___timing_commit(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6d6540b7__0.commit("@(posedge day18_tb.clk)");
    }
}

void Vday18_tb___024root___eval_triggers__act(Vday18_tb___024root* vlSelf);

bool Vday18_tb___024root___eval_phase__act(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vday18_tb___024root___eval_triggers__act(vlSelf);
    Vday18_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vday18_tb___024root___timing_resume(vlSelf);
        Vday18_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vday18_tb___024root___eval_phase__nba(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vday18_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__nba(Vday18_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__act(Vday18_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vday18_tb___024root___eval(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vday18_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("day18_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vday18_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("day18_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vday18_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vday18_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vday18_tb___024root___eval_debug_assertions(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
