// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDER_TB__SYMS_H_
#define VERILATED_VADDER_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VADDER_TB.h"

// INCLUDE MODULE CLASSES
#include "VADDER_TB___024root.h"
#include "VADDER_TB___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VADDER_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VADDER_TB* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VADDER_TB___024root            TOP;
    VADDER_TB___024unit            TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_ADDER_TB;

    // CONSTRUCTORS
    VADDER_TB__Syms(VerilatedContext* contextp, const char* namep, VADDER_TB* modelp);
    ~VADDER_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
