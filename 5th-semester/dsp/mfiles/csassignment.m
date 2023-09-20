clc
clear all 
close all 

% first order butterworth filter
order=1;
Amplitude=5;
cutoff=Amplitude/1.4142;
freq=0:0.00001:10;
denomirator=1+(freq./cutoff).^2*order;
butterworth = Amplitude./sqrt(denomirator);
hold on;
plot(freq,butterworth,'g');
text(3,4,' first order butterworth filter');
% second order butterworth filter

order=2;
Amplitude=5;
cutoff=Amplitude/1.4142;
freq=0:0.00001:10;
denomirator=1+(freq./cutoff).^2*order;
butterworth = Amplitude./sqrt(denomirator);
hold on;
plot(freq,butterworth,'b');
text(2.7,3.5,' second order butterworth filter');

% third order butterworth filter
order=3;
Amplitude=5;
cutoff=Amplitude/1.4142;
freq=0:0.00001:10;
denomirator=1+(freq./cutoff).^2*order;
butterworth = Amplitude./sqrt(denomirator);
hold on;
plot(freq,butterworth,'r');
text(0.5,2.3,' third order butterworth filter');
title(' butterworth filter magnitude response ');
ylabel(' | H(wa)|  ');
xlabel(' w ');