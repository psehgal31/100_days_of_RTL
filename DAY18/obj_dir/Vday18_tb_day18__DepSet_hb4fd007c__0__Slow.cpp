// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vday18_tb.h for the primary calling header

#include "Vday18_tb__pch.h"
#include "Vday18_tb_day18.h"

VL_ATTR_COLD void Vday18_tb_day18___ctor_var_reset(Vday18_tb_day18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vday18_tb_day18___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->prdata = VL_RAND_RESET_I(32);
    vlSelf->pready = VL_RAND_RESET_I(1);
}
