clc
close all
clear all

fs = 1000; 
fc=200;
t=0:1/fs:0.2;
fd=50;

%making some composite baseband signal 
x= sin (2*pi*30*t) + 2*sin (2*pi*60*t) ;


%using fmmod function for frequency modulation 
y= fmmod (x,fc,fs,fd);
plot(t,x,'g',t,y,'r--');
title('baseband and carrier signals in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
% frequency modulation with more deviation
fd=100;
figure;
out= fmmod (x,fc,fs,fd);
plot(t,x,'g',t,out,'r--');
title('baseband and carrier signals in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
%using fmdemod function for frequency demodulation 
figure;
demodu= fmdemod(out,fc,fs,fd);
plot(t,x,'g',t,demodu,'r--');
title('demodulated signal in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    