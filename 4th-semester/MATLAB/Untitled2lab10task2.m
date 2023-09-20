clc 
clear all 
close all
t = -3:0.1:3; 

a0 = 1; 

a2 =exp(j*2*pi/4*t)+exp(j*(2)*pi/4*t);
y1 = a0 + a2; 
a3 =exp(j*(-4)*pi/4*t)+exp(j*(4)*pi/4*t);
x = a0 + a2 + a3;
figure;
subplot(3,2,1);
stem(t,a2); 
axis([-3 3 -2 2]); 
title('x2(t)');
subplot(3,2,2);
stem(t,y1); 
title('y1(t)');
subplot(3,2,3);
stem(t,a3);
title('x3(t)');
subplot(3,2,4);
stem(t,x);
title('x(t)=x0(t)+x2(t)+x3(t)');