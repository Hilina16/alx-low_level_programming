section .data
    msg db "Hello, Holberton", 10; msg folloedby new line
    len equ $ - msg + 1;len of msg

section .text;start of the code
    global main;define entry point
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]
    xor eax, eax
    call printf

    mov eax, 0
    leave
    ret
