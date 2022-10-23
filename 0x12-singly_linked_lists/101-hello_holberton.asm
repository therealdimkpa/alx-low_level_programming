; Prints "Hello, Holberton" to the screen.
; OS/X requires system call arguments to be pushed onto the stack in reversed
; order, with an extra 4 bytes (DWORD) at the end.
;
; Build with:
;   nasm -f elf64 101-hello_holberton.asm
;   ld 101-hello_holberton.o hello
;
; Run with:
;   ./hello
;
; Author: therealdimkpa


SECTION .data           ; initialised data section

Msg: db "Hello, Holberton", 10		; message to print
MsgLen: equ $ - Msg					; length of message


SECTION .text           ; code section


global main 
main:

    ; printing message, use write()
    ; system call 4 syntax:
    ; user_ssize_t write(int fd, user_addr_t cbuf, user_size_t nbyte)
	mov rax,1         	; 4 - write() system call
	mov rdi,1			; Tells the cpu where to writge
	mov rsi,Msg			; Message to write
	mov rdx,MsgLen		; Message length
	syscall				; call kernel

	; (program exit)
	mov rax,60			;sys_exit
	mov rdi,0			;exit-code 0
