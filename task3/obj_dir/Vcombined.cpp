// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcombined.h"
#include "Vcombined__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcombined::Vcombined(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcombined__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , dout{vlSymsp->TOP.dout}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcombined::Vcombined(const char* _vcname__)
    : Vcombined(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcombined::~Vcombined() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcombined___024root___eval_initial(Vcombined___024root* vlSelf);
void Vcombined___024root___eval_settle(Vcombined___024root* vlSelf);
void Vcombined___024root___eval(Vcombined___024root* vlSelf);
#ifdef VL_DEBUG
void Vcombined___024root___eval_debug_assertions(Vcombined___024root* vlSelf);
#endif  // VL_DEBUG
void Vcombined___024root___final(Vcombined___024root* vlSelf);

static void _eval_initial_loop(Vcombined__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcombined___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcombined___024root___eval_settle(&(vlSymsp->TOP));
        Vcombined___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcombined::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcombined::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcombined___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcombined___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcombined::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcombined::final() {
    Vcombined___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcombined::hierName() const { return vlSymsp->name(); }
const char* Vcombined::modelName() const { return "Vcombined"; }
unsigned Vcombined::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcombined::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcombined___024root__trace_init_top(Vcombined___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcombined___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcombined___024root*>(voidSelf);
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcombined___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcombined___024root__trace_register(Vcombined___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcombined::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcombined___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
