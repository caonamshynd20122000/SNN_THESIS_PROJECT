// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VADDER_TB.h for the primary calling header

#ifndef VERILATED_VADDER_TB___024UNIT_H_
#define VERILATED_VADDER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VADDER_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VADDER_TB___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VADDER_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VADDER_TB___024unit(VADDER_TB__Syms* symsp, const char* v__name);
    ~VADDER_TB___024unit();
    VL_UNCOPYABLE(VADDER_TB___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
