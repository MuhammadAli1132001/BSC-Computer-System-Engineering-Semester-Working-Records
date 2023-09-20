.data    

.text                       # data at REGISTER
  addi $t0,$zero ,3         # data declare directly at register
  
  # n bit shift effect the value by multiplication of 2^n
  
   sll $t1,$t0, 2           #shift number 3 to left by 1 bit logically
   
    li $v0, 1               #ready for syscall
   add $a0,$zero, $t1       # we use can  move $a0 ,$t3
    syscall 