module ControlUnit_tb;
                   reg arst;
                   reg clk;
                   reg request;
                   reg confirm;
                   reg [1:0] password;
                   reg [1:0] syskey;
                   reg [34:0] configin;
                   wire [34:0] configout;
                   wire  write_en;
                   wire [2:0] dbg_state;
                   
   ControlUnit u22(
                   .arst(arst), .clk(clk), .request(request),
                   .confirm(confirm), .password(password),
                   .syskey(syskey), .configin(configin),
                   .configout(configout),.write_en(write_en),
                   .dbg_state(dbg_state));
                   
                   
                   always #5 clk = ~clk;
                   
                   
                   initial begin
                      arst = 1;
                      clk = 0;
                      request = 0;
                      confirm = 0;
                      password = 0;
                      syskey = 2'b10;
                      configin = 0;
                      #2;
                      arst = 0;
                      request = 1;
                      #6;
                      password = 2'b10;
                      confirm = 1;
                      #2;
                      confirm = 0;
                      #4;
                      confirm = 1;
                      configin = $random;
                      #6;
                   end                    
                   
                   
                   
endmodule