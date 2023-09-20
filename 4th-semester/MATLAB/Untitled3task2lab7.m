clc
clear all
close all
t=-10:10;
sign=ones(1,21);
sign(1,1:21)=1;
subplot(2,1,1);
usign=stem(t,sign);
title(' u[n]'); 
subplot(2,1,2);
shiftusign=stem(t-1,sign);
title(' u[n-1]'); 
figure;
sigma=usign-shiftusign;
stem(sigma);
title(' u[n]-u[n-1] '); 