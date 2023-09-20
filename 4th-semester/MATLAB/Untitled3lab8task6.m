clc 
clear all
close all
x=[1 3 2 1];
h=[1 1 2 0];

lhs=x.*h;
rhs=h.*x;
subplot(2,1,1);
stem(lhs);
title('left side of commutative convolution formula');
xlabel('index, n');
axis([0 4 0 5]);
subplot(2,1,2);
stem(rhs);
title('Right side of commutative convolution formula');
xlabel('index, n');
axis([0 4 0 5]);