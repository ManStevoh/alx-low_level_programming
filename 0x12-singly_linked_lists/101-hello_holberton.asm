global main
extern printf

section .data
format db 'Hello, Holberton', 0  ; Define a null-terminated string

section .text
main:
    mov   edi, format         ; Load the address of the format string into edi
    xor   eax, eax            ; Clear the eax register (return value)
    call  printf              ; Call the printf function
    mov   eax, 0              ; Set the return value to 0 (conventionally for success)
    ret                       ; Return from the main function
