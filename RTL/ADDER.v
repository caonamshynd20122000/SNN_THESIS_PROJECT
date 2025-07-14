/*
    Created             : /home/caonam/SNN_THESIS_PROJECT/RTL/ADDER.v
    Module Name         : ADDER
    Author              : Van Nam CAO
    Date                : 08 - 07 - 2025
    Description         : This module that perform 32-bit floating point addition
*/

`timescale 1ns / 1ps
module ADDER (
    input   [31:0]  A,
    input   [31:0]  B,

    output  [31:0]  SUM
);

    //Extract components of IEEE 754 format
    wire            SIGN_A  =   A[31];
    wire            SIGB_B  =   B[31];
    wire    [7:0]   EXP_A   =   A[30:23];
    wire    [7:0]   EXP_B   =   B[30:23];
    wire    [23:0]  MAN_A   =   (A[30:23] == 0) ? {1'b0, A[22:0]} : {1'b1, A[22:0]};
    wire    [23:0]  MAN_B   =   (B[30:23] == 0) ? {1'b0, B[22:0]} : {1'b1, B[22:0]};
    

    // Align exponents
    wire    [7:0]   EXP_D;
    wire    [23:0]  AL_MA, AL_MB;
    wire    [7:0]   L_EXP;

    assign          EXP_D   =   (EXP_A > EXP_B)  

endmodule
