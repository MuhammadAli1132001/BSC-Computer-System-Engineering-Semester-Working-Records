 .data
 msg: .asciiz "enter a float \n"
 space: .asciiz "\n"
  float: .float 0.0
 .text
  #for msg
     lwc1 $f2, float
     
     li $v0 ,4
     la $a0 ,msg
     syscall
    
    #read float
     li $v0 6
     syscall     
  #space
      li $v0 ,4
        la $a0 ,space
         syscall

     #display float
     li $v0 ,2
     add.s $f12, $f0,$f4
     syscall
