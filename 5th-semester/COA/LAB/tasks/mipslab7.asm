
.main: 

.text
#li.s $f1, 0.4
#li.s $f2, 2.1

li $v0, 6
syscall 
mov.s $f1,$f0

li $v0, 6
syscall 
mov.s $f2,$f0

add.s $f3, $f1, $f2
mov.s $f12, $f3
li $v0 ,2
syscall 

sub.s $f3, $f1, $f2
mov.s $f12, $f3
li $v0 ,2
syscall 

mul.s $f3, $f1, $f2
mov.s $f12, $f3
li $v0 ,2
syscall 

li $v0, 10
syscall 