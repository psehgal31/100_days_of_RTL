// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vday18_tb.h for the primary calling header

#ifndef VERILATED_VDAY18_TB_DAY18_H_
#define VERILATED_VDAY18_TB_DAY18_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vday18_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vday18_tb_day18 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ pready;
    IData/*31:0*/ prdata;

    // INTERNAL VARIABLES
    Vday18_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vday18_tb_day18(Vday18_tb__Syms* symsp, const char* v__name);
    ~Vday18_tb_day18();
    VL_UNCOPYABLE(Vday18_tb_day18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vday18_tb_day18* obj);

#endif  // guard
