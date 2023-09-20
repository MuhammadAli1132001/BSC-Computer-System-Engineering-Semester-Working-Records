clc
clear all
close all
t=-10:1/100:10;
x=sin(t);
x1=decimate(x,4);
x2=interp(x,4);
subplot(3,1,1);
stem(x);
axis([0 500 -2 2]);
title('Original signal');
subplot(3,1,2);
stem(x1);
title('upsampling signal');
axis([0 500 -2 2]);
subplot(3,1,3);
stem(x2);
title('downsampling signal');
axis([0 500 -2 2]);