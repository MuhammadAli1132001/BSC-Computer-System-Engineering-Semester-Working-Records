      
 org 100h
.model small

.data

   msg db "Assalamoalaikom ", 24h

.code  
main proc

    mov ah, 1                   ;ah 1 for input
    int 21h 
                   
    mov dl, al
    
    mov ah, 2                ;ah 2 for ouput
    int 21h

main endp




    