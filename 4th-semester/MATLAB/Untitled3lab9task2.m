clc 
clear all 
close all
t=0:0.0001:10;
ff=0.15;
A = (4/pi);
s=sin(2*pi*ff*t);
y=A*s;
% COMPLEX AMPLITUDE = (4/(j*pi*k)) 
for k = 1:2:34
fh=k*ff;
x = (4/(k*pi))*sin(2*pi*fh*t); 
y=y+x;
end
plot(t,y,'linewidth',1.5);
title('A square wave with harmonics 1st, 3rd, 5th, upto 17');
xlabel('Time');
ylabel('Amplitude')
figure;
for k = 1:2:54
f=k*ff;
x = (4/(k*pi))*sin(2*pi*f*t); 
y=y+x;
end
plot(t,y,'linewidth',1.5);
title('A square wave with harmonics 1st, 3rd, 5th, upto 27');
xlabel('Time');
ylabel('Amplitude')