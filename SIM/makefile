top_module = ADDER_TB
exe_name = V$(top_module)
verilator_option = -cc --binary --trace -j

sim:
	@echo "Running Verilator with options: $(verilator_option)"
	verilator $(verilator_option) --top-module $(top_module) -f flist.f
	@echo "Running simulation executable: ./obj_dir/$(exe_name)"
	./obj_dir/$(exe_name)

