section .data
		message db "Hello, Holberton",10

		section .text
		global main

main:
		mov rdi, 1
		mov rsi, message
		mov rax, 1
		mov rdx, 17
		syscall