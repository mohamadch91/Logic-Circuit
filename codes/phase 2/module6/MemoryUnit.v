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
---  Module Name: Memory Unit
---  Description: Module6:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module MemoryUnit (arst,clk,wren,din,dout);
	input         arst ; // async  reset
	input         clk  ; // clock  posedge
	input         wren ; // write  enabledata
	input  [34:0] din  ; // input  data
	output [34:0] dout ;  // output data
	reg [34:0]dout;

	
    
	/* write your code here */
	//rising edge

	always @(posedge clk or posedge arst)
		begin
			if(arst)
			
				 dout<=0;
		
	
			else 
			begin
			if(wren) 
				 dout <= din;
			end
		end
	/* write your code here */

endmodule
