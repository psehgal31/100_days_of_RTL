// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb__Syms.h"
#include "Vday18_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__0(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->day18_tb__DOT__reset = 1U;
    vlSelf->day18_tb__DOT__cmd_i = 0U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 0U;
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__cmd_i = 1U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->day18_tb__DOT__cmd_i = 2U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->day18_tb__DOT__cmd_i = 1U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->day18_tb__DOT__cmd_i = 2U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->day18_tb__DOT__cmd_i = 1U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->day18_tb__DOT__cmd_i = 2U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->day18_tb__DOT__cmd_i = 1U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->day18_tb__DOT__cmd_i = 2U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->day18_tb__DOT__cmd_i = 1U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->day18_tb__DOT__cmd_i = 2U;
    vlSymsp->TOP__day18_tb__DOT__day18_if.prdata = 
        VL_URANDOM_RANGE_I(0U, 0xfU);
    while ((1U & ((~ (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready)) 
                  | (~ ((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                        | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))))))) {
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           59);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge day18_tb.clk)", 
                                                       "day18_tb.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->day18_tb__DOT__unnamedblk1__DOT__i = 0xaU;
    VL_FINISH_MT("day18_tb.sv", 62, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vday18_tb___024root___eval_initial__TOP__Vtiming__1(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSymsp->TOP__day18_tb__DOT__day18_if.pready = 0U;
        vlSelf->day18_tb__DOT__wait_cycles = VL_URANDOM_RANGE_I(1U, 0xaU);
        while ((0U != vlSelf->day18_tb__DOT__wait_cycles)) {
            co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge day18_tb.clk)", 
                                                               "day18_tb.sv", 
                                                               38);
            vlSelf->day18_tb__DOT__wait_cycles = (vlSelf->day18_tb__DOT__wait_cycles 
                                                  - (IData)(1U));
        }
        vlSymsp->TOP__day18_tb__DOT__day18_if.pready = 1U;
        co_await vlSelf->__VtrigSched_h6d6540b7__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge day18_tb.clk)", 
                                                           "day18_tb.sv", 
                                                           42);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vday18_tb___024root___dump_triggers__act(Vday18_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vday18_tb___024root___eval_triggers__act(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->day18_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->day18_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->day18_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__clk__0 
        = vlSelf->day18_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__day18_tb__DOT__reset__0 
        = vlSelf->day18_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vday18_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 32> Vday18_tb__ConstPool__TABLE_h93ef3463_0;

VL_INLINE_OPT void Vday18_tb___024root___act_sequent__TOP__0(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready) 
                     << 4U) | (((IData)(vlSelf->day18_tb__DOT__cmd_i) 
                                << 2U) | (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)));
    vlSelf->day18_tb__DOT__apb_master__DOT__nxt_state 
        = Vday18_tb__ConstPool__TABLE_h93ef3463_0[__Vtableidx1];
}

VL_INLINE_OPT void Vday18_tb___024root___nba_sequent__TOP__0(Vday18_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->day18_tb__DOT__reset) {
        vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q = 0U;
        vlSelf->day18_tb__DOT__apb_master__DOT__state_q = 0U;
    } else {
        if (((2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
             & (IData)(vlSymsp->TOP__day18_tb__DOT__day18_if.pready))) {
            vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q 
                = vlSymsp->TOP__day18_tb__DOT__day18_if.prdata;
        }
        vlSelf->day18_tb__DOT__apb_master__DOT__state_q 
            = vlSelf->day18_tb__DOT__apb_master__DOT__nxt_state;
    }
}
