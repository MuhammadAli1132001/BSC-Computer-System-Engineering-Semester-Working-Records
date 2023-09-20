    clc
    clear all
    
    % code for sinusiod of frequency 10 and its fourier transform

    A=1;
    Fs= 1000;
    f = 150;
    t=0:1/Fs:50
    signal = A*sin(2*pi*f*t);
    subplot(311); 
    plot(t,signal);
    title('sinusiod of frequency 10Hz in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
   
    
    %fourier transform of composite signal
       subplot(212);
      ft= fft(signal,length(signal));
      signalshift=(fftshift(ft));
      n=length(signal);
       ftshift=(-n/2:n/2-1)*(1000/n);
    abvalue=abs(signalshift);
    plot(ftshift,10*log10(abvalue));

     
    plot(ftshift,abvalue);
    title('default frequency-domain');
    xlabel('frequency');
    ylabel('power specrum');
    
 