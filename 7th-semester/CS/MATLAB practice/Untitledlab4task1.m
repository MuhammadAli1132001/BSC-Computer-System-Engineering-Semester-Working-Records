% task 1,a part
clc
clear all
close all
tic;
x1=[2 5 8 4 3];
x2=[4 3 2 0 0];    
add=x1+x2
mul=x1.*x2
sigplot1(x1,x2,add,mul);
% b part
x1=[2 5 8 4 3];
x2=[4 3 2 1 1]; 

for n=1:5
    add(1,n)=x1(1,n)+x2(1,n);
end
add
for n=1:5
    mul(1,n)=x1(1,n)*x2(1,n);
end
mul
