org 100h
.model small 
 .data
 .code
 main proc
    mov cx, 10           ;goes loop upto 58
    mov dx, 49          ;49 ascii code of 1 started loop
    
    
    test:
    
    mov ah, 2
    int 21h   
    
    add dx,1              ;increment dx
    
 loop test 
 
 main endp