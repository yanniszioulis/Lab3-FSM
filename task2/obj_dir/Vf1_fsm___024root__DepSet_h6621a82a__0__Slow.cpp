// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___settle__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->f1_fsm__DOT__sreg;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
    // Body
    Vf1_fsm___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root___final(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_fsm__DOT__sreg = VL_RAND_RESET_I(8);
}
