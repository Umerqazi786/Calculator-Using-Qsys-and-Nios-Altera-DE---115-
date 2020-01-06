	component calculator_final is
		port (
			clk_clk                               : in  std_logic                    := 'X';             -- clk
			output_all_external_connection_export : out std_logic_vector(7 downto 0);                    -- export
			input_6_external_connection_export    : in  std_logic                    := 'X';             -- export
			input_5_external_connection_export    : in  std_logic                    := 'X';             -- export
			input_4_external_connection_export    : in  std_logic                    := 'X';             -- export
			input_3_external_connection_export    : in  std_logic                    := 'X';             -- export
			input_2_external_connection_export    : in  std_logic_vector(3 downto 0) := (others => 'X'); -- export
			input_1_external_connection_export    : in  std_logic_vector(3 downto 0) := (others => 'X')  -- export
		);
	end component calculator_final;

	u0 : component calculator_final
		port map (
			clk_clk                               => CONNECTED_TO_clk_clk,                               --                            clk.clk
			output_all_external_connection_export => CONNECTED_TO_output_all_external_connection_export, -- output_all_external_connection.export
			input_6_external_connection_export    => CONNECTED_TO_input_6_external_connection_export,    --    input_6_external_connection.export
			input_5_external_connection_export    => CONNECTED_TO_input_5_external_connection_export,    --    input_5_external_connection.export
			input_4_external_connection_export    => CONNECTED_TO_input_4_external_connection_export,    --    input_4_external_connection.export
			input_3_external_connection_export    => CONNECTED_TO_input_3_external_connection_export,    --    input_3_external_connection.export
			input_2_external_connection_export    => CONNECTED_TO_input_2_external_connection_export,    --    input_2_external_connection.export
			input_1_external_connection_export    => CONNECTED_TO_input_1_external_connection_export     --    input_1_external_connection.export
		);

