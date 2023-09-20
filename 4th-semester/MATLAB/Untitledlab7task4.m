clc
close all
clear all
n=-1:1/1000:1; 
signal=5*exp(1*n*pi/4);
subplot(2,1,1);
plot(n,signal, 'g', 'linewidth',2); 
axis([-1 1 -10 10]); 
title('Original exponential wave'); 
grid;
subplot(2,1,2);
plot(-n,signal, 'r', 'linewidth',2); 
axis([-1 1 -10 10]); 
title('Flipped exponential wave'); 
grid;