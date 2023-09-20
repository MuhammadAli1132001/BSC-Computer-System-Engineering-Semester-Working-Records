    % code for sinusiod of frequency 10,30,50 and its fourier transform

    t=0:1/1000:1;
    A=1;
    signal1 = A*sin(2*pi*10*t);
    subplot(311); 
    plot(t,signal1);
    title('sinusiod of frequency 10Hz in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
    signal2 = A*sin(2*pi*30*t)
    subplot(312); 
    plot(t,signal2);
    title('sinusiod of frequency 20Hz in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
    signal3 = A*sin(2*pi*50*t);
    subplot(313); 
    plot(t,signal3);
    title('sinusiod of frequency 50Hz in time-domain');
   xlabel('time');
    ylabel('Amplitude');
    
    % fourier transform of above signals  having frequency 10,30,50
   figure;
    fouriertransform=fft(signal2,length(signal1));
    n=length(fouriertransform);
     ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(311);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 10Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    
    fouriertransform=fft(signal2,length(signal2));
     n=length(fouriertransform);
     ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(312);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 30Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    
    fouriertransform=fft(signal3,length(signal3));
    n=length(fouriertransform);
        signalshift=(fftshift(fouriertransform));
     ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(313);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 50Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    
     % code for sinusiods of frequency 20,40,60 and its fourier transform
    figure;
    t=0:1/1000:1;
    A=1;
    signal1 = A*sin(2*pi*20*t);
    subplot(311); 
    plot(t,signal1);
    title('sinusiod of frequency 20Hz in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
    signal2 = A*sin(2*pi*40*t)
    subplot(312); 
    plot(t,signal2);
    title('sinusiod of frequency 40Hz in time-domain');
    xlabel('time');
    ylabel('Amplitude');
    
    signal3 = A*sin(2*pi*60*t);
    subplot(313); 
    plot(t,signal3);
    title('sinusiod of frequency 60Hz in time-domain');
   xlabel('time');
    ylabel('Amplitude');
    
    % fourier transform of above signals having frequency 20,40,60
   figure;
    fouriertransform=fft(signal2,length(signal1));
    n=length(signal1);
         ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(311);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 20Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    
    fouriertransform=fft(signal2,length(signal2));
    n=length(signal2);
         ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(312);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 40Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    
    fouriertransform=fft(signal3,length(signal3));
    n=length(signal3);
         ftshift=(-n/2:n/2-1)*(1000/n);
    signalshift=(fftshift(fouriertransform));
    absvalue=abs(signalshift);
    subplot(313);
    plot(ftshift,absvalue); 
    title('sinusiod of frequency 60Hz in frequency-domain');
    xlabel('frequency');
    ylabel('Amplitude');
    