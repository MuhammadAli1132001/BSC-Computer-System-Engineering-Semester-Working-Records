clc
clear all 
close all 

Amp=6;
wp=Amp/1.4;

for n=1:3;
w=0:1/1000:12;
d=1+(w./wp).^2*n;
butter = Amp./sqrt(d);
hold on;
plot(w,butter);
end
title(' butterworth filter magnitude response ');
ylabel(' response ');
xlabel('frequensy ');