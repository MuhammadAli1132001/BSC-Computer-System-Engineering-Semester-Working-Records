.data 
msg: .asciiz "this is muhammad ali \n"

.text 
main:

  
  jal displaymsg   #function calling 
    
  li $v0 10       # tell the system that code done
  syscall
  
 displaymsg:
        li $v0, 4          #  tell the system diplay string
        la $a0, msg
        syscall
        
        jr $ra   
      
