clc 
clear all 
close all
t= -2:1/10:10;
x1 = sin(0.8*pi*2*t);
subplot(3,1,1);
stem(t,x1,'LineWidth',2);
title('discret time 10 sample per sec');
u = (t>=0); 
x2 = x1.*u;
subplot(3,1,2);
stem(t,u, 'r','LineWidth',2); 
title('Unit Step');
subplot(3,1,3);
stem(t,x2, 'k','LineWidth',2); 
title('resultant singal causal version'); 
axis([-3 3 -1.5 1.5]);