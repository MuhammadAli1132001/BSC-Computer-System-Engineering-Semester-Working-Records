clc 
clear all
close all
x=[0 0 -1 0 0 0 2 3];
h=[0 0 1 0 0 -2 4];
y=conv(x,h);
title('input x');
xlabel('index, n');
stem(y);
title('convolution of x');
xlabel('index, n');
axis([-4 15 -6 12]);