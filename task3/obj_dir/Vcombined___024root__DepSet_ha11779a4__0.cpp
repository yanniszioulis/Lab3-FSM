// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcombined.h for the primary calling header

#include "verilated.h"

#include "Vcombined___024root.h"

VL_INLINE_OPT void Vcombined___024root___sequent__TOP__0(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__combined__DOT__myclktick__DOT__count;
    CData/*7:0*/ __Vdly__combined__DOT__myf1_fsm__DOT__sreg;
    // Body
    __Vdly__combined__DOT__myclktick__DOT__count = vlSelf->combined__DOT__myclktick__DOT__count;
    __Vdly__combined__DOT__myf1_fsm__DOT__sreg = vlSelf->combined__DOT__myf1_fsm__DOT__sreg;
    if (vlSelf->rst) {
        __Vdly__combined__DOT__myf1_fsm__DOT__sreg = 0U;
        vlSelf->combined__DOT__tick = 0U;
        __Vdly__combined__DOT__myclktick__DOT__count 
            = vlSelf->N;
    } else {
        if (vlSelf->combined__DOT__tick) {
            __Vdly__combined__DOT__myf1_fsm__DOT__sreg 
                = ((0xffU == (IData)(vlSelf->combined__DOT__myf1_fsm__DOT__sreg))
                    ? 0U : (1U | (0xfeU & ((IData)(vlSelf->combined__DOT__myf1_fsm__DOT__sreg) 
                                           << 1U))));
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->combined__DOT__myclktick__DOT__count))) {
                vlSelf->combined__DOT__tick = 1U;
                __Vdly__combined__DOT__myclktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__combined__DOT__myclktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->combined__DOT__myclktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->combined__DOT__tick = 0U;
            }
        }
    }
    vlSelf->combined__DOT__myf1_fsm__DOT__sreg = __Vdly__combined__DOT__myf1_fsm__DOT__sreg;
    vlSelf->dout = vlSelf->combined__DOT__myf1_fsm__DOT__sreg;
    vlSelf->combined__DOT__myclktick__DOT__count = __Vdly__combined__DOT__myclktick__DOT__count;
}

void Vcombined___024root___eval(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcombined___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcombined___024root___eval_debug_assertions(Vcombined___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
