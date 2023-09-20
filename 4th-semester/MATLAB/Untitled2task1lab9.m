clc 
clear all 
close all
t = 0:19;
xt = cos(2*pi*t/2); 
stem(t, xt); % plot signal
xlabel('time, t');
ylabel('Amplitude, A');
title('descret Time Cosine');
abs_xt_2 = abs(xt).^2; % take absolute square of signal
T = 20; 
pxt = sum(abs_xt_2)/T % power of given signal