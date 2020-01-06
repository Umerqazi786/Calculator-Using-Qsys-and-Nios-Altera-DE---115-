module LED7( clk1, LEDPin,Number);
input clk1;
input [3:0] Number;
output [6:0] LEDPin;
reg [6:0] LEDPin;


always @ (posedge clk1)
 begin
  case (Number)
  4'b0000: LEDPin=7'b1000000;
  4'b0001: LEDPin=7'b1111001;
  4'b0010: LEDPin=7'b0100100;
  4'b0011: LEDPin=7'b0110000;
  4'b0100: LEDPin=7'b0011001;
  4'b0101: LEDPin=7'b0010010;
  4'b0110: LEDPin=7'b0000010;
  4'b0111: LEDPin=7'b1111000;
  4'b1000: LEDPin=7'b0000000;
  4'b1001: LEDPin=7'b0010000;
  endcase 
 end
endmodule 