clc 
clear all 
close all
t= -2:1/1000:10; 
x1 = sin(2*pi*2*t);
figure;
subplot(2,1,1);
plot(t,x1,'LineWidth',2);
xlabel('time'); 
ylabel('signal amplitude'); 
title('sin(2*\pi*f*t)');
u = (t<=0); 
x2 = x1.*u;
subplot(2,1,2);
plot(t,u, 'r','LineWidth',2); 
xlabel('time'); 
ylabel('Signal Amplitude'); 
title('Unit Step');
figure(2); 
plot(t,x2,'LineWidth',2); 
title('non causal version of sin(2*\pi*f*t)');