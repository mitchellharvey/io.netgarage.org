
all: exec_binsh setreuid_exec_binsh

exec_binsh: 
	nasm -f elf32 ./exec_binsh.asm
	ld -m elf_i386 ./exec_binsh.o -o exec_binsh.bin

setreuid_exec_binsh: 
	nasm -f elf32 ./setreuid_exec_binsh.asm
	ld -m elf_i386 ./setreuid_exec_binsh.o -o setreuid_exec_binsh.bin

clean:
	rm -f *.o
	rm -f *.bin
