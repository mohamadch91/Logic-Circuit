`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:19:35 01/20/2021
// Design Name:   TemperatureCalculator
// Module Name:   F:/Term 3 uni/LC/ISE/final_project/yemperature_calculator_test.v
// Project Name:  final_project
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

module temperature_calculator_test;

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
  
  tc_base = 32'b10101010101010101010101010101010;
  adc_data = 16'b1010101010101010;

  tc_ref = 8'b11000110 ;
  // Wait 100 ns for global reset to finish
  #100;
        
  // Add stimulus here

 end
      
endmodule