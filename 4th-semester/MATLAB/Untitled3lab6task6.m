clc;
clear all; 
close all; 
t=-3:1/1000:3; 
A=1; 
f=0.5;
phase=0;
x=A * sin(2*pi*f*t + phase);
n=input('enter n no of sinusoid ');
for i=1:n;
subplot(n,1,i)
plot(t,x, 'linewidth', 2)
title('no Continuous-Time Cos Wave: A cos(2*\pi*f*t + \phi/2)') 
xlabel('Time Index')
ylabel('Signal Amplitude') 
grid
end
axis([t(1) t(end) -A A])