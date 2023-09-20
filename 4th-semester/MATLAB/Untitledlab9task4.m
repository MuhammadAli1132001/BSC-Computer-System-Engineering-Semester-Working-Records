clc; 
clear all; 
close all 
t=0:0.001:7;
x=(-8/(pi*pi))*exp(i*(2*pi*0.5*t)); 
for N=1:2:11
y=(-8/(9*pi*pi))*exp(i*(2*pi*0.5*N*t));
s=x+y;
end;
plot(t,real(s),'linewidth',1); 
title('Triangular Wave with N=11'); 
ylabel('Amplitude'); 
xlabel('Time');