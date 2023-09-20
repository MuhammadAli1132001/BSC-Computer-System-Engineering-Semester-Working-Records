clc
clear all
close all
x=0:pi/16:2*pi;
a=8;
subplot(2,1,1);
sign=sin(a*x).*exp(-x);
plot(x,sign, 'g','linewidth' ,2);
title('continuous-time '); 
subplot(2,1,2);
stem(x,sign, 'g','linewidth' ,2);
title('discrete-time'); 