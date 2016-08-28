section .text
global _start

_start:
mov esi, "/shh"
shr esi, 0x8 
push esi 
push "/bin"
mov ebx, esp    
xor ecx, ecx 
xor edx, edx 
mov al, 11
int 0x80
