DAY  = day17
TIME = $$(date +'%Y%m%d-%H%M%S')

VERILATOR_BIN=/usr/bin/verilator
BUILD_DIR=$(PWD)/$(DAY)_build

# Use --binary so Verilator produces a runnable executable directly
TOOLCMD = $(VERILATOR_BIN) --binary --sv --top-module $(DAY)_tb $(DAY).sv $(DAY)_tb.sv $(DEPS)

compile: clean
	@mkdir -p $(BUILD_DIR)
	$(TOOLCMD)

sim: clean
	@mkdir -p $(BUILD_DIR)
	$(TOOLCMD)
	@./obj_dir/V$(DAY)_tb   # run the generated binary

build: clean
	@touch synth.ys
	@echo "plugin -i systemverilog" > synth.ys
	@echo "read_systemverilog -DSYNTH $(DAY).sv " >> synth.ys
	@echo "hierarchy -top $(DAY)" >> synth.ys
	@echo "proc; opt; techmap; opt" >> synth.ys
	@echo "write_verilog synth.v" >> synth.ys
	@echo "show -prefix $(DAY) -colors $(TIME)" >> synth.ys

synth: build
	yosys synth.ys

clean:
	rm -rf sim.vvp synth.ys synth.v $(DAY).dot $(DAY).dot.pid $(DAY).vcd slpp_all $(BUILD_DIR) Vtop obj_dir

