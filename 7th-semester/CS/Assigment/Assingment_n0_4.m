clc
clear all

K = 181.17 
s= tf('s');

%Given Transfer Function
TF = (15000000*K)/(s^3 + 3408.3*s^2+ 0*s + 1204000); 
step(TF/s); %Ramp response
pidTuner(TF,'PD')