// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcombined.h for the primary calling header

#include "verilated.h"

#include "Vcombined__Syms.h"
#include "Vcombined___024root.h"

void Vcombined___024root___ctor_var_reset(Vcombined___024root* vlSelf);

Vcombined___024root::Vcombined___024root(Vcombined__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcombined___024root___ctor_var_reset(this);
}

void Vcombined___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcombined___024root::~Vcombined___024root() {
}
