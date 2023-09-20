clc 
clear all
close all
x=[2 3 4 1];
h1=[1 3 2 1];
h2=[1 1 2];
y1=conv(x,h1);
y2=conv(y1,h2);
subplot(3,1,1);
stem(x);
title('input x');
xlabel('index, n');
axis([-4 8 0 5]);
subplot(3,1,2);
stem(y1);
title('convolution of x[n] by first system as y1[n]');
xlabel('index, n');
axis([-4 10 -5 30]);
subplot(3,1,3);
stem(y2);
title('convolution of x[n] by both systems as y[n]');
xlabel('index, n');
axis([-4 10 -5 80]);