clc 
clear all
close all 

deltap=0.01;
deltas=0.005;
%passband and stopband ribble in dB
ap=-20*log10(1-deltap);
as=-20*log10(deltas);
op=0.2*pi; %normalized passband and stopband edges freq 
os=0.3*pi;

[n,o]=buttord(op/pi,os/pi,ap,as); %order to the filter
[b,a]=butter(n,o);  %find co-efficeint with cutoff freq o
[f,o]=freqz(b,a,2050); 
dataIn = randn(size(f));
dataOut= filter(b,a,dataIn);
subplot(2,1,1);
plot(o/pi,abs(f));
xlabel('frequency ');
ylabel('gain magnitude');
title('butterworth filter  ');
subplot(2,1,2);
plot(o/pi,20*log10(abs(f)));
xlabel('frequency ');
ylabel('in dB');
title('butterworth filter  ');
ylim([-80 5]);
xlim([0 1]);
figure(2);
%passband filter specification
subplot(2,1,1);
plot(o/pi,abs(f));
xlabel('frequency ');
ylabel('gain');
title('butterworth filter passband');
xlim([0 op/pi]);
ylim([1-deltap 1+deltap]);
%stopband filter specification
subplot(2,1,2);
plot(o/pi,abs(f));
xlabel('frequency ');
ylabel('gain');
title('butterworth filter stopband');
xlim([os/pi 1]);
ylim([0 deltas]);
%butterworth filter apply on a random noised signle
figure(3);
subplot(3,1,1);
plot(o/pi,dataIn)
subplot(2,1,2);
plot(o/pi,dataOut)
subplot(3,1,3);
plot(o/pi,abs(f))