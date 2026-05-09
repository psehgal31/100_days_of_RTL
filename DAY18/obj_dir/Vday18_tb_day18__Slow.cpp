// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb__Syms.h"
#include "Vday18_tb_day18.h"

void Vday18_tb_day18___ctor_var_reset(Vday18_tb_day18* vlSelf);

Vday18_tb_day18::Vday18_tb_day18(Vday18_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vday18_tb_day18___ctor_var_reset(this);
}

void Vday18_tb_day18::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vday18_tb_day18::~Vday18_tb_day18() {
}
