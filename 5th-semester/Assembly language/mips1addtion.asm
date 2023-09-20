.data    # data at RAM
number1: .word 4  #declare variables 
number2: .word 2
.text                   # data at REGISTER
  lw $t0, number1       #load both number
  lw $t1, number2
  
   add $t3,$t0, $t1
   
    li $v0, 1        #ready for syscall
   add $a0,$zero, $t3          # we use      move $a0 ,$t3

    syscall 