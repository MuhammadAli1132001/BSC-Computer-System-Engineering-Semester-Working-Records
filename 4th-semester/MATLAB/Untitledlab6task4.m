clc;
clear all; 
close all; 
fs=1000; 
t=-3:1/fs:3; 
A=2; 
f=1;
phase=pi/2; 
subplot(2,1,1); 
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
title('Continuous-Time cos Wave: A cos(2*\pi*f*t + \phi)') 
xlabel('Time Index')
ylabel('Signal Amplitude')
axis([t(1) t(end) -A A]) 
grid