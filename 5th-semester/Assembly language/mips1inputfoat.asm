.data
msg1: .asciiz"enter float number \n"
msg2: .asciiz"float number is \n"
space: .float 0.0
f: .float 0.0
.text
    #for float
     lwc1 $f2, f
     
     li $v0 ,4
     la $a0 ,msg1
      syscall
    
    #read integer
     li $v0 6
     syscall     
  #space
      li $v0 ,4
        la $a0 ,space
         syscall
         
         li $v0 ,4
     la $a0 ,msg2
      syscall

     #display integer
     li $v0 ,2
     add.s $f12, $f0,$f4
     syscall