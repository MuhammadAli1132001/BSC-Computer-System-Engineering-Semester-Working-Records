clc 
clear all
rand(4,2,3)

hilb(4)

t=magic(4)
x=[2 2 3 4;4 3 5 8; 3 5 9 3]

row1=t(1,:)
row3=t(3,:)
colunm1=t(:,1)
diagnal=diag(t)
halft=t(1:3,1:3)
fclext=t(1:4,2:4)
lastrowdeleted=t(1:3,1:4)
col=[3;3;3];
addclm=[x col]
row=[1 1 1 2];
addrw=[x;row]
[1 1 2 2]./row
find (x>2)
find(x>5)
range=2:1:20;
sum(x,2)