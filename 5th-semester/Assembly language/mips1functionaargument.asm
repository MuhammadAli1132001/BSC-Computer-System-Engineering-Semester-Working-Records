.data 

.text 

main:
    addi $a0 ,$zero ,5    
    addi $a1,$zero , 10       #argument register 
    
    jal myfunction
    
    la $v0 1              
    addi $a0,$v1,0         #display addition
    syscall
    
    la $v0 10
    syscall             #done program
    
   myfunction:
   
   add $v1,$a0, $a1
   
   jr $ra