.text
t0: lw 2
t1: lw 1
t2: lw 4
t3: lw 3
t4: lw 5
t5: lw 2
t6: lw 7
t7: lw 8
s1: lw 8
s2: lw 8
.main
  li $t0, t0
    li $t1, t1
      li $t2, t2
        li $t3, t3
          li $t4, t4
            li $t5, t5
              li $t6, t6
                li $t7, t7
                  li $s1, s1
                    li $s2, s2
and $t1,$t2,$t3
xor $t4,$t5,$t6
or $t0,$t7,$t3
sub $t2,$s1,$s3
