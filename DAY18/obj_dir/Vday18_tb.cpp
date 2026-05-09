// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vday18_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vday18_tb::Vday18_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vday18_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__day18_tb__DOT__day18_if{vlSymsp->TOP.__PVT__day18_tb__DOT__day18_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vday18_tb::Vday18_tb(const char* _vcname__)
    : Vday18_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vday18_tb::~Vday18_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vday18_tb___024root___eval_debug_assertions(Vday18_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vday18_tb___024root___eval_static(Vday18_tb___024root* vlSelf);
void Vday18_tb___024root___eval_initial(Vday18_tb___024root* vlSelf);
void Vday18_tb___024root___eval_settle(Vday18_tb___024root* vlSelf);
void Vday18_tb___024root___eval(Vday18_tb___024root* vlSelf);

void Vday18_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vday18_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vday18_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vday18_tb___024root___eval_static(&(vlSymsp->TOP));
        Vday18_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vday18_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vday18_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vday18_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vday18_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vday18_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vday18_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vday18_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vday18_tb___024root___eval_final(Vday18_tb___024root* vlSelf);

VL_ATTR_COLD void Vday18_tb::final() {
    Vday18_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vday18_tb::hierName() const { return vlSymsp->name(); }
const char* Vday18_tb::modelName() const { return "Vday18_tb"; }
unsigned Vday18_tb::threads() const { return 1; }
void Vday18_tb::prepareClone() const { contextp()->prepareClone(); }
void Vday18_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vday18_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vday18_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vday18_tb___024root__trace_init_top(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vday18_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vday18_tb___024root*>(voidSelf);
    Vday18_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vday18_tb___024root__trace_decl_types(tracep);
    Vday18_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vday18_tb___024root__trace_register(Vday18_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vday18_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vday18_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vday18_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
