/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Temperature Calculator
---  Description: Module1: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns 

module TemperatureCalculator (
	input  [31:0] tc_base  , // base [environment degree ]
	input  [ 7:0] tc_ref   , // ref  [system work voltage]
	input  [15:0] adc_data , // adc  [sensor digital data]
	output [31:0] tempc      // temp [temperature celsius]
);

	/* write your code here */
	wire [15:0] out;
	Multiplier8x8 multi(.A(tc_ref[7:0]),.B(tc_ref[7:0]),.P(out[15:0]));
	wire [31:0] out1;
	Multiplier16x16 multi1(.A(out[15:0]),.B({1'b0,adc_data[14:0]}),.P(out1[31:0]));
	wire  [31:0] out2;
	AdderSubtractor32x32 adder(.A(tc_base[31:0]),.B(out1[31:0]),.sel(adc_data[15]),.S(out2[31:0]));
	division devide(.A(out2[31:0]),.B({32'b00000000000000000000000000100000}),.Res(tempc[31:0]));
	
	/* write your code here */

endmodule
