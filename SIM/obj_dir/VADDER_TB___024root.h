// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VADDER_TB.h for the primary calling header

#ifndef VERILATED_VADDER_TB___024ROOT_H_
#define VERILATED_VADDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VADDER_TB___024unit;


class VADDER_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VADDER_TB___024root final : public VerilatedModule {
  public:
    // CELLS
    VADDER_TB___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ ADDER_TB__DOT__uut__DOT__EXP_D;
    CData/*7:0*/ ADDER_TB__DOT__uut__DOT__L_EXP;
    CData/*7:0*/ ADDER_TB__DOT__uut__DOT__R_EXP;
    CData/*0:0*/ ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ ADDER_TB__DOT__a;
    IData/*31:0*/ ADDER_TB__DOT__b;
    IData/*31:0*/ ADDER_TB__DOT__result;
    IData/*23:0*/ ADDER_TB__DOT__uut__DOT__MAN_A;
    IData/*23:0*/ ADDER_TB__DOT__uut__DOT__MAN_B;
    IData/*23:0*/ ADDER_TB__DOT__uut__DOT__AL_MA;
    IData/*23:0*/ ADDER_TB__DOT__uut__DOT__AL_MB;
    IData/*24:0*/ ADDER_TB__DOT__uut__DOT__MAN_S;
    IData/*23:0*/ ADDER_TB__DOT__uut__DOT__R_MAN;
    IData/*31:0*/ ADDER_TB__DOT__uut__DOT__S_COU;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VADDER_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VADDER_TB___024root(VADDER_TB__Syms* symsp, const char* v__name);
    ~VADDER_TB___024root();
    VL_UNCOPYABLE(VADDER_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
