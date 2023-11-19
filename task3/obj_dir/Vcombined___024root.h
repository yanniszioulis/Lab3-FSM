// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcombined.h for the primary calling header

#ifndef VERILATED_VCOMBINED___024ROOT_H_
#define VERILATED_VCOMBINED___024ROOT_H_  // guard

#include "verilated.h"

class Vcombined__Syms;

class Vcombined___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ combined__DOT__tick;
    CData/*7:0*/ combined__DOT__myf1_fsm__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ combined__DOT__myclktick__DOT__count;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcombined__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcombined___024root(Vcombined__Syms* symsp, const char* name);
    ~Vcombined___024root();
    VL_UNCOPYABLE(Vcombined___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
