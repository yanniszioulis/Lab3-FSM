// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcombined.h for the primary calling header

#include "verilated.h"

#include "Vcombined___024root.h"

VL_ATTR_COLD void Vcombined___024root___settle__TOP__0(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->dout = vlSelf->combined__DOT__myf1_fsm__DOT__sreg;
}

VL_ATTR_COLD void Vcombined___024root___eval_initial(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcombined___024root___eval_settle(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___eval_settle\n"); );
    // Body
    Vcombined___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcombined___024root___final(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___final\n"); );
}

VL_ATTR_COLD void Vcombined___024root___ctor_var_reset(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->combined__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->combined__DOT__myclktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->combined__DOT__myf1_fsm__DOT__sreg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
