// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb__Syms.h"
#include "Vday18_tb___024root.h"

void Vday18_tb___024root___ctor_var_reset(Vday18_tb___024root* vlSelf);

Vday18_tb___024root::Vday18_tb___024root(Vday18_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vday18_tb___024root___ctor_var_reset(this);
}

void Vday18_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vday18_tb___024root::~Vday18_tb___024root() {
}
