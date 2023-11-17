section .data
      hello db "Hello, Holberton", 0
section.text
      global main

main: 
    ; Prepare arguments for printf
    mov rdi, hello      ; Format specifier
    mov rax, 0          ; System call number for printf
    call printf

    ; Exit the program
    mov rax, 60        ; System call number for exit
    xor rdi, rdi       ; Exit code 0
    syscall          
  
section .text
     extern print
