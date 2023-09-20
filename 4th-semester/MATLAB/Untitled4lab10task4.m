clc
clear all
close all
k = -15:15; 
T = 1; 
T1 = 1/16; %duty cycle of square wave
ak1 = sin(k*2*pi*(T1/T))./(k*pi); 
ak1(16) = 2*T1/T;
figure;
subplot(3,1,1);
stem(k,ak1,'filled');
ylabel('ak');
title('FS Coefficients for Periodic Square Wave (T=1, T1=1/16)');
T1 = 1/32;
ak2 = sin(k*2*pi*(T1/T))./(k*pi);
ak2(16) = 2*T1/T; % Manual correction for a0 ?> ak2(16)
subplot(3,1,2);
stem(k,ak2,'filled');
ylabel('ak');
title('FS Coefficients for Periodic Square Wave... (T=1, T1=1/32)');
T1 = 1/64;
ak3 = sin(k*2*pi*(T1/T))./(k*pi);
ak3(16) = 2*T1/T; 
subplot(3,1,3);
stem(k,ak3,'filled');
xlabel('k');
ylabel('ak');
title('FS Coefficients for Periodic Square Wave (T=1, T1=1/64)')