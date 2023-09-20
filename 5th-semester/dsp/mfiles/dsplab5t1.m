
clear all 
close all
% first part of the task is to simply plot composite sinusiods over the time t.

t=0:1/1000:0.25;
x= sin(2*pi*50*t) + sin(2*pi*120*t);
subplot(211);
plot(t,x);
title('composite signal in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
% second part of the task is to add 2 division random signal to composite sinusiods over the time t.

y=x + 2*randn(size(t));
subplot(212);
plot(t,y);
title('composite + random signal in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
 % third part of the task is to find fast fourier transform of resultant
 % signal.
 
 figure;
 n=length(y);
 ft=fft(y,n);
 shiftf=(fftshift(ft));
 absvalue=abs(shiftf);
 fshift=(-n/2:n/2-1)*(1000/n);
 plot(fshift,absvalue);
 title('coomposite + random signal in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
  
 % fourth part of the task is to find the actual result, density of fft
 % signal anda plot its graph against shifted frequency
 % 

 figure;
 density=shiftf.*conj(shiftf)/n; % power of signal shiftf
 plot(fshift,density);
 title('density of signal in time-domain');
 figure;
 [p,w]=periodogram(y,rectwin(n));
 plot(w,10*log10(p));
 title('coomposite + random signal in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
 
 
 
 

 