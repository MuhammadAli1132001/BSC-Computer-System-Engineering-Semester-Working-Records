.model small
.data
.code
main proc
    mov dl ,"A"
    mov ah, 2
    int 21h 
    mov dl, "L"
    mov ah, 2
    int 21h
    mov dl ,"i"
    mov ah, 2
    int 21h
    mov ah, 4ch
    int 21h
main endp
end  main