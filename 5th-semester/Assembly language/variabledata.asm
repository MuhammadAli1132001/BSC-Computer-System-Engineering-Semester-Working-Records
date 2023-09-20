
 org 100h
 .model small
 .data
 variable db 5
 .code
 main proc 
    mov dl ,variable
    mov bl, dl 
    add dl ,48  ;ascii 48+5=53 is ascii code for 5
    
    mov ah, 2
    int 21h
 main endp
    