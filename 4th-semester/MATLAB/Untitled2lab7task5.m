clc
clear all
close all
t=-2:2;
sigma=[1,1,2,2,3];  %let sigma be a siganl
subplot(5,1,1);
usign=stem(t,2*sigma);
title(' 2u[n]'); 
subplot(5,1,2);
u2sign=stem(t-1,5*sigma);
title(' 5u[n-1]'); 
subplot(5,1,3);
u3sign=stem(t-2,8*sigma);
title(' 8u[n-2]'); 
subplot(5,1,4);
u4sign=stem(t-3,4*sigma);
title(' 4u[n-3]'); 
subplot(5,1,5);
u5sign=stem(t-4,3*sigma);
title(' 3u[n-4]'); 
figure;
x=usign+u2sign+u3sign+u4sign+u5sign;
stem(x);
title(' x[n] '); 