.data 
msg: .asciiz"Muhammad Ali, 19pwcse1801 \n  finding even number between the range \n"
 msg1: .asciiz "enter starting number of the range \n"
  msg2: .asciiz "enter ending number of the range \n"
    msg3: .asciiz "even numbers between the given range are \n"
       space: .asciiz "  "
.text 
    li $t7, 2
        li $t6, 1
  
  li $v0 ,4
  la $a0, msg
  syscall 
  
  li $v0 ,4
  la $a0, msg1
  syscall 
  
  li $v0, 5
    syscall
    move $t0, $v0            # starting range number
    
  li $v0 ,4
  la $a0, msg2
  syscall 
  
  li $v0, 5
    syscall                   # ending range number
    move $t1, $v0

  li $v0, 4
  la $a0, msg3
  syscall 
  
       addi $t2,$t0, 1
  loop: 
     beq $t2, $t1, end
     div $t2, $t7
     mfhi $t4
         beq $t4, $zero , even
              addi $t2,$t2, 1
   b loop
   syscall 
   
     even: 
     li $v0, 1
     move $a0, $t2
     syscall
     
   li $v0 ,4
  la $a0, space
  syscall 
          addi $t2,$t2, 1
          b loop         

    end: 
     li $v0, 10
     syscall 
