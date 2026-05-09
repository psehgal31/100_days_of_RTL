// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vday18_tb__Syms.h"


VL_ATTR_COLD void Vday18_tb___024root__trace_init_sub__TOP__day18_tb__DOT__day18_if__0(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vday18_tb___024root__trace_init_sub__TOP__0(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("day18_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("day18_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vday18_tb___024root__trace_init_sub__TOP__day18_tb__DOT__day18_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+12,0,"wait_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("apb_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("apb_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vday18_tb___024root__trace_init_sub__TOP__day18_tb__DOT__day18_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+13,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vday18_tb___024root__trace_init_sub__TOP__day18_tb__DOT__day18_if__0(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_init_sub__TOP__day18_tb__DOT__day18_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_init_top(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_init_top\n"); );
    // Body
    Vday18_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vday18_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vday18_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vday18_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vday18_tb___024root__trace_register(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vday18_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vday18_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vday18_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vday18_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_const_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vday18_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_const_0\n"); );
    // Init
    Vday18_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday18_tb___024root*>(voidSelf);
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vday18_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_const_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+15,(0xdeadcafeU),32);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_full_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vday18_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_full_0\n"); );
    // Init
    Vday18_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday18_tb___024root*>(voidSelf);
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vday18_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vday18_tb___024root__trace_full_0_sub_0(Vday18_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vday18_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->day18_tb__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelf->day18_tb__DOT__cmd_i),2);
    bufp->fullIData(oldp+3,(vlSelf->day18_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->day18_tb__DOT__cmd_i) 
                                 >> 1U))));
    bufp->fullIData(oldp+5,(vlSymsp->TOP__day18_tb__DOT__day18_if.prdata),32);
    bufp->fullCData(oldp+6,(vlSelf->day18_tb__DOT__apb_master__DOT__state_q),2);
    bufp->fullIData(oldp+7,(vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q),32);
    bufp->fullBit(oldp+8,(((1U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)) 
                           | (2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q)))));
    bufp->fullBit(oldp+9,((2U == (IData)(vlSelf->day18_tb__DOT__apb_master__DOT__state_q))));
    bufp->fullIData(oldp+10,(((IData)(1U) + vlSelf->day18_tb__DOT__apb_master__DOT__rdata_q)),32);
    bufp->fullBit(oldp+11,(vlSelf->day18_tb__DOT__clk));
    bufp->fullIData(oldp+12,(vlSelf->day18_tb__DOT__wait_cycles),32);
    bufp->fullCData(oldp+13,(vlSelf->day18_tb__DOT__apb_master__DOT__nxt_state),2);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__day18_tb__DOT__day18_if.pready));
}
