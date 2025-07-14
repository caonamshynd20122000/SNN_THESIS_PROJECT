/*
    Created             : /home/caonam/SNN_THESIS_PROJECT/RTL/ADDER.v
    Module Name         : ADDER
    Author              : Van Nam CAO
    Date                : 08 - 07 - 2025
    Description         : This module that perform 32-bit floating point addition
*/

`timescale 1ns / 1ps
module ADDER (
    input         [31:0]  A,
    input         [31:0]  B,

    output  reg   [31:0]  SUM
);

    //Extract components of IEEE 754 format
    wire                  SIGN_A  =   A[31];
    wire                  SIGB_B  =   B[31];
    wire          [7:0]   EXP_A   =   A[30:23];
    wire          [7:0]   EXP_B   =   B[30:23];
    wire          [23:0]  MAN_A   =   (A[30:23] == 0) ? {1'b0, A[22:0]} : {1'b1, A[22:0]};
    wire          [23:0]  MAN_B   =   (B[30:23] == 0) ? {1'b0, B[22:0]} : {1'b1, B[22:0]};
    
    wire          [7:0]   EXP_D;
    wire          [23:0]  AL_MA, AL_MB;
    wire          [7:0]   L_EXP;

    wire          [24:0]  MAN_S;
    reg           [24:0]  ABS_A, ABS_B;
    reg                   OP_SI;

    reg           [7:0]   R_EXP;
    reg           [23:0]  R_MAN;
    reg                   R_SIG;

    integer               S_COU;


    // Align exponents
    assign                EXP_D   =   (EXP_A > EXP_B) ? (EXP_A - EXP_B) : (EXP_B - EXP_A);
    assign                L_EXP   =   (EXP_A > EXP_B) ? EXP_A : EXP_B;
    assign                AL_MA   =   (EXP_A > EXP_B) ? MAN_A : (MAN_A >> EXP_D);
    assign                AL_MB   =   (EXP_B > EXP_A) ? MAN_B : (MAN_B >> EXP_D);
    
    // Perform addition or subtraction based on signs
    always@(*) begin
      if(AL_MA >= AL_MB) begin
        ABS_A   =   {1'b0, AL_MA};
        ABS_B   =   {1'b0, AL_MB};
        OP_SI   =   SIGN_A;
      end else begin
        ABS_A   =   {1'b0, AL_MB};
        ABS_B   =   {1'b0, AL_MA};
        OP_SI   =   SIGB_B;
      end
    end
    
    assign                MAN_S   =   (SIGN_A == SIGB_B) ? (AL_MA + AL_MB) : (ABS_A - ABS_B);

    // Normalize the result
    always@(*) begin
      if(MAN_S[24]) begin
        R_MAN   =   MAN_S[24:1];
        R_EXP   =   L_EXP + 1;

      end else begin
        R_MAN   =   MAN_S[23:0];
        R_EXP   =   L_EXP;

        for(S_COU = 0; S_COU < 24; S_COU = S_COU + 1) begin
          if(R_MAN[23] == 1'b0 && R_EXP > 0 ) begin
            R_MAN   =   R_MAN << 1;
            R_EXP   =   R_EXP - 1;
          end
        end
      end
      R_SIG   =   (MAN_S == 0) ? 0 : OP_SI;
    end

    // Handle special cases (zero cases)
    always @(*) begin
      if(A[30:0] == 0)
        SUM   =   B;

      else if (B[30:0] == 0)
        SUM   =   A;

      else
        SUM   =   {R_SIG, R_EXP, R_MAN[22:0]};      
    end

endmodule
