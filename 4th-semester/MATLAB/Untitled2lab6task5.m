clc;
clear all; 
close all; 

t=-3:1/1000:3; 
A=5; 
f=3;
subplot(2,1,1); 
phase=pi/2; 
x=A * sin(2*pi*f*t + phase);
plot(t,x, 'linewidth', 2)
title('Continuous-Time Sine Wave: A sin(2*\pi*f*t + \phi/2)') 
xlabel('Time Index')
ylabel('Signal Amplitude') 
grid
subplot(2,1,2);
phase=0; 
x=A * cos(2*pi*f*t + phase);
plot(t,x, 'linewidth', 2)
title('Continuous-Time Cos Wave: A cos(2*\pi*f*t + \phi)') 
xlabel('Time Index')
ylabel('Signal Amplitude')
axis([t(1) t(end) -A A]) 
grid