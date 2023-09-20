; output: com


org 100h
.model small
.data

    msg db "Assalamoalaikok", 24h

.code
 main proc
    mov ax, @data                ;store address  of data
    mov ds, ax
    
    mov dx, offset msg              ;storing string
    mov ah, 9                    ;ah 9 for string display
    int 21h   
    
    lea dx,msg                   ;lea also store string
    mov ah, 9
    int 21h
     
 main endp
.exit




