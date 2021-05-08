# ---- Test patterns for project striVe ----

.SUFFIXES:

PATTERN = blink

#GCC_PATH=/ef/apps/bin
GCC_PATH=/opt/riscv32imc/bin/

all:  ${PATTERN:=.vcd}

hex:  ${PATTERN:=.hex}

%.elf: %.c ../sections.lds ../start.s
	${GCC_PATH}/riscv32-unknown-elf-gcc -march=rv32imc -Wl,-Bstatic,-T,../sections.lds,--strip-debug -ffreestanding -nostdlib -o $@ ../start.s $<

%.hex: %.elf
	${GCC_PATH}/riscv32-unknown-elf-objcopy -O verilog $< $@ 

clean:
	rm -f *.elf *.hex *.bin *.vvp *.vcd *.log

flash: blink.hex
	python3 ../util/strive_flash.py blink.hex

.PHONY: clean hex flash