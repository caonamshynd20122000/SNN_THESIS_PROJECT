// Testbench for 32-bit Floating-Point Adder

module ADDER_TB;
    // Inputs
    reg [31:0] a;
    reg [31:0] b;

    // Output
    wire [31:0] result;

    // Instantiate the floating_point_adder module
    ADDER uut (
        .A(a),
        .B(b),
        .SUM(result)
    );

    // Task to display results
    task display_result;
        input [31:0] op1, op2, res;
        begin
            $display("A = %h, B = %h, Result = %h", op1, op2, res);
        end
    endtask

    // Test procedure
    initial begin
        // Monitor signals
        $monitor($time, " A = %h, B = %h, Result = %h", a, b, result);

         // Test Case 1: Add two positive numbers
        a = 32'h40400000; // 3.0 in IEEE 754
        b = 32'h40800000; // 4.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 2: Add a positive and a negative number
        a = 32'hC0400000; // -3.0 in IEEE 754
        b = 32'h40800000; // 4.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 3: Add two negative numbers
        a = 32'hC0400000; // -3.0 in IEEE 754
        b = 32'hC0800000; // -4.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 4: Add zero
        a = 32'h00000000; // 0.0 in IEEE 754
        b = 32'h40800000; // 4.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 5: Add two very small numbers
        a = 32'h33800000; // 1.0e-40 in IEEE 754
        b = 32'h33800000; // 1.0e-40 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 6: Add infinity
        a = 32'h7F800000; // +Infinity in IEEE 754
        b = 32'h3F800000; // 1.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 7: Add NaN
        a = 32'h7FC00000; // NaN in IEEE 754
        b = 32'h3F800000; // 1.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Additional Test Cases for opposite signs
        // Test Case 8: Subtracting positive from negative
        a = 32'hC1200000; // -10.0 in IEEE 754
        b = 32'h41200000; // 10.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 9: Subtracting negative from positive
        a = 32'h41200000; // 10.0 in IEEE 754
        b = 32'hC1200000; // -10.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 10: Add small negative to large positive
        a = 32'hC0000000; // -2.0 in IEEE 754
        b = 32'h42000000; // 32.0 in IEEE 754
        #10;
        display_result(a, b, result);

        // Test Case 11: Add large negative to small positive
        a = 32'hC2000000; // -32.0 in IEEE 754
        b = 32'h40000000; // 2.0 in IEEE 754
        #10;
        display_result(a, b, result);

	// Test Case 10: Add small negative to large positive
	a = 32'hC0600000; // -3.5 in IEEE 754
	b = 32'h40A66666; // 5.2 in IEEE 754
	#10;

	// Test Case 10: Add small negative to large positive
	a = 32'h40C00000; // -3.5 in IEEE 754
	b = 32'hC1406000; // 5.2 in IEEE 754
	#10;

        $stop;
    end
  
  	initial begin
    	$dumpfile("../RESULTS/waveform.vcd"); // T n file VCD
    	$dumpvars(0, adder_tb); // ??t m?c ?? ghi t n hi?u
	end
endmodule


