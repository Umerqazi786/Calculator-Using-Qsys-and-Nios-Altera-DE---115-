module top1(input clk, input[3:0]input_1, input[3:0]input_2, input input_3, input input_4, input input_5, input input_6, output [7:0]output_all);

calculator_final u0 (
        .clk_clk                               (clk),                               //                            clk.clk
        .output_all_external_connection_export (output_all), // output_all_external_connection.export
        .input_6_external_connection_export    (input_6),    //    input_6_external_connection.export
        .input_5_external_connection_export    (input_5),    //    input_5_external_connection.export
        .input_4_external_connection_export    (input_4),    //    input_4_external_connection.export
        .input_3_external_connection_export    (input_3),    //    input_3_external_connection.export
        .input_2_external_connection_export    (input_2),    //    input_2_external_connection.export
        .input_1_external_connection_export    (input_1)     //    input_1_external_connection.export
    );
	 
endmodule 