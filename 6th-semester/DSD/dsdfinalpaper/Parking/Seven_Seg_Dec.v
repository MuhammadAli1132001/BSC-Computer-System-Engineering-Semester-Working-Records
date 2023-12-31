`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:40 07/27/2022 
// Design Name: 
// Module Name:    Seven_Seg_Dec 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Seven_Seg_Decoder (
    output [6:0] out,
	 input [3:0] in
	 );
	 
	assign out = (in == 0) ? 7'b1000000 : 
						(in == 1) ? 7'b1111001 : 
							(in == 2) ? 7'b0100100 :
								(in == 3) ? 7'b0110000 :
									(in == 4) ? 7'b0011001 : 
										(in == 5) ? 7'b0100010 : 
											(in == 6) ? 7'b0000010 : 
												(in == 7) ? 7'b1111000 : 
													(in == 8) ? 7'b0000000 : 
														(in == 9) ? 7'b0010000 : 7'b1111111;
endmodule
