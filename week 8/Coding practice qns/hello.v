module Kai (input a,b,c,d,
            output C);

    wire and1out, and2out;

    and (and1out,a,b);
    and (and2out,c,d);
    nor (out, and1out, and2out);
    

endmodule


