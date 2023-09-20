.data 
mysalam: .asciiz "assalamoalaikom\n Muhammad Ali"
mychar: .byte 'a'
.text
  li $v0, 4
  la $a0, mysalam
  syscall
  
  li $v0, 4
  la $a0, mychar
  syscall
