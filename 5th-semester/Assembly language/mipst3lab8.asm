.data
in1: .asciiz"Enter 1st number:\n"
in2: .asciiz"Enter 2nd number:\n"
op1: .asciiz"\nResult of Add:\t"
op2: .asciiz"\nResult of Sub:\t"
op3: .asciiz"\nResult of Mul:\t"
op4: .asciiz"\nResult of Div:\t"
op5: .asciiz"\nResult of Neg:\t"
op6: .asciiz"\nResult of Load Word Instruction:\t"
op7: .asciiz"\nResult of Sqrt Instruction:\t"
op8: .asciiz"\nResult of Abs Instruction:\t"
op9: .asciiz"\nResult of Move Instruction from double to int Register Instruction:\t"
op10: .asciiz"\nResult of trunc.w.d instruction to trunc value from single precision:\t"
pie: .double 3.1415926535897932384626433
.text
main:
la $a0,in1
li $v0,4 # $t1 =
syscall
li $v0,7 # $t1 =
syscall
mov.d $f2,$f0
la $a0,in2
li $v0,4 # $t1 =
syscall
li $v0,7 # $t1 =
syscall
mov.d $f4,$f0
# Add Instruction
add.d $f6,$f4,$f2
la $a0,op1
li $v0,4 # $t1 =
syscall
# Displaying the Result
mov.d $f12,$f6
li $v0,3 # $t1 =
syscall
# Sub Instruction
sub.d $f8,$f4,$f2
la $a0,op2
li $v0,4 # $t1 =
syscall
mov.d $f12,$f8
li $v0,3 # $t1 =
syscall
# Multiplication Instruction
mul.d $f10,$f4,$f2
la $a0,op3
li $v0,4 # $t1 =
syscall
mov.d $f12,$f10
li $v0,3 # $t1 =
syscall
# Divition Instruction
div.d $f14,$f4,$f2
la $a0,op4
li $v0,4 # $t1 =
syscall
mov.d $f12,$f14
li $v0,3 # $t1 =
syscall
# Negation Operation
neg.d $f16,$f4
la $a0,op5
li $v0,4 # $t1 =
syscall
mov.d $f12,$f16
li $v0,3 # $t1 =
syscall
# Load Word Operation
l.d $f18,pie
la $a0,op6
li $v0,4 # $t1 =
syscall
mov.d $f12,$f18
li $v0,3 # $t1 =
syscall
# Square Root Operation
sqrt.d $f20,$f4
la $a0,op7
li $v0,4 # $t1 =
syscall
mov.d $f12,$f20
li $v0,3 # $t1 =
syscall
# Absolute Operation
abs.d $f22,$f2
la $a0,op8
li $v0,4 # $t1 =
syscall
mov.d $f12,$f22
li $v0,3 # $t1 =
syscall
# using mfc1 instruction to move from double register to int register
mfc1 $t0,$f2 # t0 = f2
# Displaying Instruction Result
la $a0, op9 # ao = str1
li $v0,4 # $v0 = 4 to display string
syscall
move $a0, $t0 # $a0 = $01
li $v0,1 # Printing int number
syscall
# using trunc.w.d instruction to trunc value from single precision
trunc.w.d $f24,$f18 # f15= f9 (Contains Pie Value)
# Displaying Instruction Result
la $a0,op10
li $v0,4 # $t1 =
syscall
mov.d $f12,$f24
li $v0,3 # $t1 =
syscall
# Terminating the program
li $v0,10 # $t1 =
syscall