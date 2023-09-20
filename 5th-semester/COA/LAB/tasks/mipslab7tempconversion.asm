.data
msg1: .asciiz "Muhammad Ali 19pwcse1801 \nenter temp in farenheight "
msg2: .asciiz "\ntemp in celsius is" 
f: .float 32.0
f1: .float 0.555
.text
     lwc1 $f2, f
     lwc1 $f5, f1
     
li $v0, 4
la $a0, msg1
syscall 

li $v0, 6
syscall 
mov.s $f1,$f0

sub.s $f3,$f1, $f2
mul.s $f4,$f3, $f5

li $v0, 4
la $a0, msg2
syscall 
mov.s $f12, $f4
li $v0 ,2
syscall 

li $v0, 10
syscall 
