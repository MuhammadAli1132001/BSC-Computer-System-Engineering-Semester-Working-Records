.data 
msg: .asciiz"Muhammad Ali, 19pwcse1801 \n finding LCM of two numbers \n"
 msg1: .asciiz "enter a number \n"
  msg2: .asciiz "enter second number \n"
    msg3: .asciiz "HCF of two numbers is \n"

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

     blt $t0, $t1, first_is_smaller
     move $t7, $t1
     
     first_is_smaller:
     move $t7, $t0

    li $t6, 1        #iteration variable
        li $t4, 1     #HCF variable
   loop:
    bgt $t6,$t7,HCF               #$t6 is started with one and increment by 1 in each iteration 
    div $t0, $t6
    mfhi $t4
    beq $t4, $zero ,check_second
    addi $t6,$t6, 1
  b loop
syscall
     
     check_second:   
     div $t1, $t6
     mfhi $t4
     beq $t4, $zero , increment
     addi $t6,$t6, 1
  b loop    
  
  increment:
     move $4,$t6
     addi $t6,$t6, 1
     b loop
HCF:
     li $v0, 1
     move $a0, $t4
     syscall
   b end
             
    end: 
     li $v0, 10
     syscall 
