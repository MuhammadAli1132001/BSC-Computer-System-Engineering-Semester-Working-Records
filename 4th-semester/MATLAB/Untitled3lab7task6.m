clc
clear all
close all
t=0:0.0002:2;
subplot(2,1,1);
sign=sin(t*2*pi);
plot(t,sign);
title(' continuous-time sinusoid signal '); 
axis([-2 4 -1 1]);
subplot(2,1,2);
plot(t,sign);
title(' shifted by factor 2 '); 
axis([-2 4 -1 1]);