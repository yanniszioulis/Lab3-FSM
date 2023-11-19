// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcombined__Syms.h"


void Vcombined___024root__trace_chg_sub_0(Vcombined___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcombined___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_chg_top_0\n"); );
    // Init
    Vcombined___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcombined___024root*>(voidSelf);
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcombined___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcombined___024root__trace_chg_sub_0(Vcombined___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->combined__DOT__tick));
        bufp->chgSData(oldp+1,(vlSelf->combined__DOT__myclktick__DOT__count),16);
        bufp->chgCData(oldp+2,(vlSelf->combined__DOT__myf1_fsm__DOT__sreg),8);
    }
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->rst));
    bufp->chgBit(oldp+5,(vlSelf->en));
    bufp->chgSData(oldp+6,(vlSelf->N),16);
    bufp->chgCData(oldp+7,(vlSelf->dout),8);
}

void Vcombined___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_cleanup\n"); );
    // Init
    Vcombined___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcombined___024root*>(voidSelf);
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
