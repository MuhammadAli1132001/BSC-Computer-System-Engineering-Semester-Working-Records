clc
clear all

% gain and calculated values
K = 181.17 
Kp = 1; 
Kd = 0.0017; 
Ki = 0; 
s= tf('s');

% Given Transfer Function
TF = (4500*K)/(s^2 + 361.2*s+0); 
step(TF/s); %Ramp response
t = 0:0.1:10;
controller = pid(Kp,Ki,Kd)               %pid controller
UNIT_FD = feedback(controller*TF,1)      %unity feedback
linearSystemAnalyzer(UNIT_FD)              %analyzer to examine required specification
