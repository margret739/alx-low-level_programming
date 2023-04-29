section .text
global main
extern printf

main:
mov edi, format
xor eax, eax
call printf
mov eax, 0
ret

section .data

format:
msg db "Hello, Holberton",0xa

