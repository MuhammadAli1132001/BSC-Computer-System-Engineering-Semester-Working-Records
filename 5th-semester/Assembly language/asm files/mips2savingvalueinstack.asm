.data 
space: .asciiz "\n"
.text 
main:
    addi $a1,$zero , 10       #argument register 
    
    jal myfunction    #function calling
    
    li $v0 4              
    la $a0 space         #space of one line after myfuction
    syscall
    
    la $v0 1              
    addi $a0,$a1,0         #display addition
    syscall
    #done program
    la $v0 10
    syscall             
    
   myfunction:
     addi $sp ,$sp -4      #allocate sp at stack
     sw $a1,0($sp)          #store a1 at stack
   
   la $v0, 1
   addi $a0,$a1,0         # display stack value
   syscall
   
   lw $a1,0($sp)         #then deallocate
   addi $sp, $sp , 4
   
   jr $ra