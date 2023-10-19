global main
extern printf

main:
    mov edi, format   ; Load the address of the format string
    xor eax, eax      ; Clear EAX register (indicating no additional floating-point registers used)
    call printf       ; Call the printf function
    mov eax, 0        ; Set the return value to 0 (return code)
    ret
format: db `Hello, Holberton\n`,0
