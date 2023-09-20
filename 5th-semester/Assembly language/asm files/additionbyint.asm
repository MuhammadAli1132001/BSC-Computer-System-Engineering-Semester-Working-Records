      
 org 100h
.model small

.data
.code  
main proc

    mov ah, 1                   ;ah 1 for input
    int 21h 
    
    mov dl,al                ;store input ascii value in dl 
    
    mov ah, 1                   ;ah 1 for input
    int 21h 
    
    add dl,al
    sub dl, 48                    ;store 2nd input ascii value in dl
    
    mov bl, dl             ;added result
    
    mov ah, 2                ;ah 2 for ouput
    int 21h

main endp




    