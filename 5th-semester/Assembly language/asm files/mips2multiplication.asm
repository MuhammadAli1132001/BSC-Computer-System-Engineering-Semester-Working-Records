.data    

.text                   # data at REGISTER
  addi $t0,$zero ,3   # data declare directly at register
  addi $t1,$zero ,4
  
   mul $t2,$t0, $t1   #first method for multiplication
   
    li $v0, 1        #ready for syscall
   add $a0,$zero, $t2         # we use can  move $a0 ,$t2
    syscall 
    
    # second method for multiplication
    
       mult $t0, $t1   #first method
       mflo $s0
       
        li $v0, 1        #ready for syscall
   add $s1,$zero, $s0         # we can use    move $s1 ,$s0
    syscall 
