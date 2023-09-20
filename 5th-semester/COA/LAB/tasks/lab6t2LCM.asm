.data 
msg: .asciiz"Muhammad Ali, 19pwcse1801 \n finding LCM of two numbers \n"
 msg1: .asciiz "enter a number \n"
  msg2: .asciiz "enter second number \n"
    msg3: .asciiz "LCM of two numbers are \n"

.text 
    
  li $v0 ,4
  la $a0, msg
  syscall 
  
  li $v0 ,4
  la $a0, msg1
  syscall 
  
  li $v0, 5
    syscall
    move $t0, $v0            # fisrt number
    
  li $v0 ,4
  la $a0, msg2
  syscall 
  
  li $v0, 5
    syscall                         # second number
    move $t1, $v0

  li $v0, 4
  la $a0, msg3
  syscall 
  
     
     bgt $t0, $t1, first_is_greater
     move $t7, $t1
     
     first_is_greater:
     move $t7, $t0
      
   loop: 
    div $t7, $t0
     mfhi $t4
     beq $t4, $zero , check_second
     addi $t7,$t7, 1
  b loop
     
     
     check_second:
     div $t7, $t1
     mfhi $t4
     beq $t4, $zero , LCM
    addi $t7,$t7, 1
  b loop    
   syscall 
   
LCM:
     li $v0, 1
     move $a0, $t7
     syscall
   b end  
             
    end: 
     li $v0, 10
     syscall 
