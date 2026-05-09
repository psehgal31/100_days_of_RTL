// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAY18_TB__SYMS_H_
#define VERILATED_VDAY18_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vday18_tb.h"

// INCLUDE MODULE CLASSES
#include "Vday18_tb___024root.h"
#include "Vday18_tb_day18.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vday18_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vday18_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vday18_tb___024root            TOP;
    Vday18_tb_day18                TOP__day18_tb__DOT__day18_if;

    // CONSTRUCTORS
    Vday18_tb__Syms(VerilatedContext* contextp, const char* namep, Vday18_tb* modelp);
    ~Vday18_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
