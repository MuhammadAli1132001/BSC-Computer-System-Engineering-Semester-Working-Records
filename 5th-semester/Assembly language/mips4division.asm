.data    

.text                   # data at REGISTER
  addi $t0,$zero ,12   # data declare directly at register
  addi $t1,$zero ,4
  
   div $t2,$t0, $t1   #first method for multiplication
   
    li $v0, 1        #ready for syscall
   add $a0,$zero, $t2         # we use can  move $a0 ,$t3
    syscall 
    
    # second method for division
    
       div $t0, $t1   #first method
       mflo $s0      #mflo find Quotient
       mfhi $s1      #mflhi find remainder
        li $v0, 1        #ready for syscall
   add $a0,$zero, $s0         # s1 instead of s0 will print remainder
    syscall 