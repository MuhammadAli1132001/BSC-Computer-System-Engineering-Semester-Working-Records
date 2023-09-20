clc
clear all
close all
t=0:0.003:5;
subplot(2,1,1);
sign=sin(t*2*pi);
plot(t,sign);
title(' original signal '); 
axis([-2 4 -1 1]);
subplot(2,1,2);
plot(t-1,sign);
title(' Advance signal (one sec shift to left) '); 
axis([-2 4 -1 1]);