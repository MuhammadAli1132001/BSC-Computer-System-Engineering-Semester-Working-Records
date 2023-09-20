.data 
 msg1: .asciiz " Muhammad Ali 19pwcse1801 quardral GPA calculation\n"
 gpa1: .asciiz " enter first subject GPA " 
  ch1: .asciiz " \nenter credit of first subject  " 
 gpa2: .asciiz " \nenter second subject GPA "
   ch2: .asciiz " \nenter credit of second subject  " 
  gpa3: .asciiz " \nenter third subject GPA "
    ch3: .asciiz " \nenter credit of third subject  " 
   gpa4: .asciiz " \nenter fouth subject GPA "
     ch4: .asciiz " \nenter credit of fourth subject  " 
     
       result:  .asciiz " GPA = " 
.text 

li $v0, 4
la $a0, msg1
syscall 

li $v0, 4
la $a0, gpa1
syscall 

li $v0, 6
syscall 
mov.s $f1, $f0 

li $v0, 4
la $a0, ch1
syscall 

li $v0, 6
syscall 
mov.s $f2, $f0 

li $v0, 4
la $a0, gpa2
syscall 

li $v0, 6
syscall 
mov.s $f3, $f0 

li $v0, 4
la $a0, ch2
syscall 

li $v0, 6
syscall 
mov.s $f4, $f0 

add.s $f9,$f3,$f1
add.s $f10, $f4,$f2

li $v0, 4
la $a0, gpa3
syscall 

li $v0, 6
syscall 
mov.s $f5, $f0 

li $v0, 4
la $a0, ch3
syscall 

li $v0, 6
syscall 
mov.s $f6, $f0 

add.s $f9,$f9,$f5
add.s $f10, $f4,$f6


li $v0, 4
la $a0, gpa4
syscall 

li $v0, 6
syscall 
mov.s $f7, $f0 

li $v0, 4
la $a0, ch4
syscall 

li $v0, 6
syscall 
mov.s $f8, $f0 

add.s $f9,$f9,$f7
add.s $f10, $f4,$f8

div.s $f1,$f9, $f10
#mflo $f3

li $v0, 4
la $a0, result
syscall 

mov.s $f12, $f1
li $v0 ,2
syscall

li $v0, 10
syscall 
