section .data
    hello db 'Hello, Holberton', 10 ; The string to print with a newline character

section .text
    global _start

_start:
    ; Write "Hello, Holberton" to stdout (file descriptor 1)
    mov rax, 1        ; sys_write syscall number
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rsi, hello    ; pointer to the string
    mov rdx, 15       ; string length
    syscall

    ; Exit the program
    mov rax, 60       ; sys_exit syscall number
    xor rdi, rdi      ; exit code 0
    syscall
