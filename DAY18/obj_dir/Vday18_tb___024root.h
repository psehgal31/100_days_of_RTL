// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday18_tb.h for the primary calling header

#ifndef VERILATED_VDAY18_TB___024ROOT_H_
#define VERILATED_VDAY18_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vday18_tb_day18;


class Vday18_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday18_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vday18_tb_day18* __PVT__day18_tb__DOT__day18_if;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ day18_tb__DOT__clk;
    CData/*0:0*/ day18_tb__DOT__reset;
    CData/*1:0*/ day18_tb__DOT__cmd_i;
    CData/*1:0*/ day18_tb__DOT__apb_master__DOT__nxt_state;
    CData/*1:0*/ day18_tb__DOT__apb_master__DOT__state_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day18_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__day18_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ day18_tb__DOT__wait_cycles;
    IData/*31:0*/ day18_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ day18_tb__DOT__apb_master__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6d6540b7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vday18_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vday18_tb___024root(Vday18_tb__Syms* symsp, const char* v__name);
    ~Vday18_tb___024root();
    VL_UNCOPYABLE(Vday18_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
