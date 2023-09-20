.data
msg: .asciiz"enter a number\n "
space: .ascii"integervalue is\n"
.text
#for integer
li $v0 ,4
la $a0 ,msg
syscall
    
    #read integer
     li $v0 5
     syscall
     
     addi $t0, $v0,0
     
  #space
 li $v0 ,4
la $a0 ,space
syscall

     #display integer
     li $v0 ,1
          addi $a0, $t0,0
     syscall
     
   