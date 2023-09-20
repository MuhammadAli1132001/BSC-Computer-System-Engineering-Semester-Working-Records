clc 
clear all 
close all
t = 0:0.1:4; 
n=1;
s = sin(2*pi*n*t); % generate signal
for n = 3:2:9
nt=n*t;
x=(sin(2*pi*nt))/n;
x=x+s;
end
plot(t,x); % plot signal
xlabel('time, t');
ylabel('Amplitude, A');
title('s(t)');