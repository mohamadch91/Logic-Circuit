`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:46:44 01/28/2021
// Design Name:   TemperatureCalculator
// Module Name:   M:/uni/thirdsummestur/az manteghi/final proj/phase 1/part 1/tb_calculator.v
// Project Name:  moudle1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TemperatureCalculator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_calculator;

	// Inputs
	reg [31:0] tc_base;
	reg [7:0] tc_ref;
	reg [15:0] adc_data;

	// Outputs
	wire [31:0] tempc;

	// Instantiate the Unit Under Test (UUT)
	TemperatureCalculator uut (
		.tc_base(tc_base), 
		.tc_ref(tc_ref), 
		.adc_data(adc_data), 
		.tempc(tempc)
	);

	initial begin
		// Initialize Inputs
		tc_base = 32'b00000000000000000000000000000001;
		tc_ref = 8'b00011000;
		adc_data = 16'b0011000010000001;
		// Wait 100 ns for global reset to finish
	
        
		// Add stimulus here

	end
      
endmodule

