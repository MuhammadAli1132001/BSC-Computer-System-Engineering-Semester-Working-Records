clc 
clear all
close all
x1=[3 1 1];
x2=[4 2 1];
x3=[3 2 1];
lhs=(x1.*x2).*x3;
rhs=x1.*(x2.*x3);
subplot(2,1,1);
stem(lhs);
title('left side of associative convolution formula');
xlabel('index, n');
axis([0 4 0 40]);
subplot(2,1,2);
stem(rhs);
title('Right side of associative convolution formula');
xlabel('index, n');
axis([0 4 0 40]);