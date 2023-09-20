.data
info: .ascii" Name:Muhammad Ali---- Reg.no:19pwcse1801 \n"
msg: .asciiz"enter a number \n"
msg1: .asciiz"enter second number\n"
msg2: .asciiz"enter symbol for operation  "
space: .asciiz" \n"

no1: .word 43
no2: .word 45
no3: .word 42
no4: .word 47
.text

lw $t3 ,no1
lw $t4 ,no2
lw $t5 ,no3
lw $t6 ,no4

#for information name and registration number    
     li $v0 ,4
     la $a0 ,info
      syscall
      
    #for integer     
     li $v0 ,4
     la $a0 ,msg
      syscall
    
      #enter ascii
     li $v0 ,5
     syscall
     move $t0,$v0
     
     #for integer     
     li $v0 ,4
     la $a0 ,msg1
      syscall
    
      #enter ascii
     li $v0 ,5
     syscall
     move $t1,$v0
     
    
    #space
      li $v0 ,4
        la $a0 ,msg2
         syscall
         
     li $v0 ,12
     syscall
     move $t2,$v0
     
     #for integer     
     li $v0 ,4
     la $a0 ,space
      syscall
     
        beq $t2,$t3, labeladd
                beq $t2,$t4, labelsub
                        beq $t2,$t5, labelmul
                                beq $t2,$t6, labeldiv
                                
         labeladd:
         add $t3, $t0,$t1
         move $a0,$t3
          li $v0 ,1
     syscall
     b end
     
         labelsub:
         sub $t3, $t0,$t1
         move $a0,$t3
          li $v0 ,1
     syscall
     
          b end
         labelmul:
         mul $t3, $t0,$t1
         move $a0,$t3
          li $v0 ,1
     syscall
          b end
          
         labeldiv:
         div $t3, $t0,$t1
         mfhi $t4
         move $a0,$t4
          li $v0 ,1
     syscall
         b end
     
     end:
     li $v0 ,10
     syscall
