section .data
	hello_message db "Hello, Holberton", 0
	format db "%s", 10, 0  ; %s for string, 10 for newline, 0 for null terminator


section .text
	global main

extern printf

main:
	;Call printf
	push rbp			; Align the stack
	mov rdi, format		; Format string
	mov rsi, hello_message	; Message string
	xor rax, rax		; Clear RAX
	call printf


	; Exit the program
	mov rax, 60			; syscall: exit 
	xor rdi, rdi		; status: 0
	syscall
