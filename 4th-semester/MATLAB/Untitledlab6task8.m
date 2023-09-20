clc;
clear all; 
close all; 
t=-2:1/100:2; 
A=1; 
phase=0;
n=input('enter n no of sinusoid ');

    for i=1:n; 
f=input('enter frequency of sinusoid ');
x=cos(2*pi*f*t + phase);
subplot(n,1,i)
plot(t,x, 'linewidth', 2)
title('no Continuous-Time Cos Wave: A cos(2*\pi*f*t + \phi/2)') 
xlabel('Time Index')
ylabel('Signal Amplitude') 
grid
axis([t(1) t(end) -4 4])
    end
