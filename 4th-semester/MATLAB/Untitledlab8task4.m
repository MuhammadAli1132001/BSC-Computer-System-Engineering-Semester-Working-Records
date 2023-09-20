clc 
clear all
close all
t=-10:1:10;
x=[2 4 6 4 2];
h=[3 -1 2 1];
y=conv(x,h);
subplot(2,1,1);
stem(x);
title('Discrete Input x');
xlabel('index, n');
subplot(2,1,2);
stem(y);
title('Discrete  convolution output y');
xlabel('index, n');

