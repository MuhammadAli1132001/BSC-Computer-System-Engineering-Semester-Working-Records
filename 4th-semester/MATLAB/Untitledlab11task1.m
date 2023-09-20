clc
clear all
close all
% FS coefficients of periodic square wave
k = -50:50;
T = 1;
T1 = 0.25;
 % Manual correction for a0 ?> ak(51)
t = -1.5:0.005:1.5;
ak =sin(k*2*pi*(T1/T))./(k*pi);
ak(51)=2*T1/T;
w0 = 2*pi/T;
xt = zeros(1,length(t));
% t0 time shift

for k = -50:50
xt = xt + ak(k+51)*exp(j*k*w0*t);
end
x=fliplr(xt);
tr=fliplr(t);
a = zeros(1,length(t));
for k = -50:50
a =a+ak(k+51)*exp(j*k*w0*t);
end
bk=fliplr(a);
figure(1);
plot(tr,x,'lineWidth',2);
xlabel('t');
ylabel('x(-t)');
title('Periodic Square Wave with -ak’’s time reversal');
axis([-1.5 1.5 -1.2 1.2]);
grid;
figure(2);
plot(-tr,bk,'lineWidth',2);
xlabel('t');
ylabel('x(-t)');
title('FS coefficients -ak of time reversed signal');
axis([-1.5 1.5 -0.2 1.2]);
grid;
figure(3);
plot(t,real(-xt),'lineWidth',2);
xlabel('t');
ylabel('x(-t)=x(t?0.5)');
title('Reconstruction from ak''s with 101 terms');
axis([-1.5 1.5 -1.2 0.2]);
grid;