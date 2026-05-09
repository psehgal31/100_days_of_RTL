// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vday18_tb__Syms.h"


void Vday18_tb___024root__trace_chg_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vday18_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_chg_0\n"); );
    // Init
    Vday18_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday18_tb___024root*>(voidSelf);
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vday18_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vday18_tb___024root__trace_chg_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->day18_tb__DOT__reset));
        bufp->chgCData(oldp+1,(vlSelf->day18_tb__DOT__cmd_i),2);
        bufp->chgIData(oldp+2,(vlSelf->day18_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->day18_tb__DOT__cmd_i) 
                                    >> 1U))));
        bufp->chgIData(oldp+4,(vlSymsp->TOP__day18_tb__DOT__day18_if.prdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(vlSelf->day18_tb__DOT__apb_master__DOT__state_q),2);
        bufp->chgIData(oldp+6,(vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q),32);
        bufp->chgBit(oldp+7,(((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                              | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)))));
        bufp->chgBit(oldp+8,((2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))));
        bufp->chgIData(oldp+9,(((IData)(1U) + vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q)),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->day18_tb__DOT__clk));
    bufp->chgIData(oldp+11,(vlSelf->day18_tb__DOT__wait_cycles),32);
    bufp->chgCData(oldp+12,(vlSelf->day18_tb__DOT__apb_master__DOT__nxt_state),2);
    bufp->chgBit(oldp+13,(vlSymsp->TOP__day18_tb__DOT__day18_if.pready));
}

void Vday18_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_cleanup\n"); );
    // Init
    Vday18_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday18_tb___024root*>(voidSelf);
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
