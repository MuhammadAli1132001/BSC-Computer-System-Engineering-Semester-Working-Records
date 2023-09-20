 .data
 msg: .asciiz "enter your name \n"
 sp:   .space 15
 msg2: .asciiz "Assalamoalikom, \n"
 .text
  #for msg     
     li $v0 ,4
     la $a0 ,msg
      syscall
    
    #read text
     li $v0, 8
     la $a0, sp
     li $a1, 15         #must store at a1
     syscall     
  #space
      li $v0 ,4
        la $a0 ,msg2
         syscall

     #display float
     li $v0, 4
      la $a0 ,sp
     syscall
     
     #END CODe
     li  $v0, 10
     syscall
