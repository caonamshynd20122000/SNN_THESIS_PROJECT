// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VADDER_TB.h for the primary calling header

#include "VADDER_TB__pch.h"
#include "VADDER_TB__Syms.h"
#include "VADDER_TB___024unit.h"

void VADDER_TB___024unit___ctor_var_reset(VADDER_TB___024unit* vlSelf);

VADDER_TB___024unit::VADDER_TB___024unit(VADDER_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VADDER_TB___024unit___ctor_var_reset(this);
}

void VADDER_TB___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VADDER_TB___024unit::~VADDER_TB___024unit() {
}
