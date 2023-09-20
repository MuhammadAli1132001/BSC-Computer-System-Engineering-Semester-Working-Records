.data
info: .asciiz" Name:Muhammad Ali---- Reg.no:19pwcse1801"
msg: .asciiz"enter a small alphabet\n"
space: .asciiz"\ncapatital alphabet is \n"

.text
#for information name and registration number    
     li $v0 ,4
     la $a0 ,info
      syscall

    #for integer     
     li $v0 ,4
     la $a0 ,msg
      syscall
    
    
         #enter ascii
     li $v0 ,12
     syscall
     move $t1,$v0
     
    
    #space
      li $v0 ,4
        la $a0 ,space
         syscall
         
         
          sub $t0, $t1, 32
      move $a0 ,$t0
      
     li $v0 ,11
     syscall
     
     
     li $v0 ,10
     syscall
