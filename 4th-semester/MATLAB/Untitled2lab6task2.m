clc
clear all
close all
x=-1:0.0001:1;
for n=1:10;
   sign=sin(n*pi*x);
end
plot(x,sign, 'r','linewidth' ,3);
title('sin (npix) on the interval -1<=x<=1'); 