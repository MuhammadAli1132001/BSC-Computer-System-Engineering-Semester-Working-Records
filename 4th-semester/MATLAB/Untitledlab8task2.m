clc 
clear all 
close all
t= -5:1/1000:5;
x1 = sin(2*pi*2*t);
subplot(3,1,1);
plot(t,x1,'LineWidth',2);
title('sin(2*\pi*f*t)');
u = (t<0); 
x2 = x1.*u;
subplot(3,1,2);
plot(t,u, 'r','LineWidth',2); 
title('Unit Step');
subplot(3,1,3);
plot(t,x2, 'k','LineWidth',2); 
title('anti-causal version of sin(2*\pi*f*t)');
figure; 
plot(t,x1,t,u,t,x2,'LineWidth',2); 
text(0,1.2,'unit signal u(t)','FontSize',16); 
text(-3.2,-1.1,'anti causal signal x(t)','FontSize',16); 
text(0.8,-1.1,' causal x(t)*u(t)','FontSize',16); 
axis([-5 5 -1.5 1.5]);