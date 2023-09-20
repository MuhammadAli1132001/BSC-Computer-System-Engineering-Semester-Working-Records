.data
msg: .asciiz "Muhammad Ali, 19pwcse1801 \n" 
msg1: .asciiz "\nenter floating number \n" 
msg2: .asciiz "\nenter another number \n"
msg3: .asciiz "\naddtion of two number is \n"
msg4: .asciiz "\nsubtraction of two number is \n"
msg5: .asciiz "\nmultiplication of two number is \n"
.main: 

.text
       
       li $v0 ,4
       la $a0, msg
       syscall
       
       li $v0 ,4
       la $a0, msg1
       syscall
       
       
li $v0, 7
syscall 
mov.d $f2,$f0

    li $v0 ,4
       la $a0, msg2
       syscall
       
li $v0, 7
syscall 
mov.d $f4,$f0

      li $v0 ,4
       la $a0, msg3
       syscall
       
add.d $f6, $f2, $f4
mov.d $f12, $f6
li $v0 ,3
syscall 
 
   li $v0 ,4
       la $a0, msg4
       syscall
       

sub.d $f6, $f2, $f4
mov.d $f12, $f6
li $v0 ,3
syscall 
 
    li $v0 ,4
       la $a0, msg5
       syscall
       

mul.d $f6, $f2, $f4
mov.d $f12, $f6
li $v0 ,3
syscall 

li $v0, 10
syscall 
