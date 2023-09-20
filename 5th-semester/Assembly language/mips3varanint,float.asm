.data 
varaible: .word  2
varaiblefloat: .float 2.4
.text
  li $v0, 1  #1 for int variable
  lw $a0, varaible       #load wrod  in a0
  syscall
  
  li $v0, 2        #2 for float variable
  lwc1 $f12, varaiblefloat       #load wrod  in f12
  syscall
  
  
