%define sys_write 1
%define stdout 1

%define sys_exit 60
%define success 0

%define nl 10

section .data

	message db "Hello, Holberton!", 10

section .text

global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 14
	syscall
	mov rax, 60
	mov rdi, 0
	syscall