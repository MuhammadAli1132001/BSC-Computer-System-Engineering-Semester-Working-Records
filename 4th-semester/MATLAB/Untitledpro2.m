clc 
clear all
close all 
format compact
%here is the simple tempreture vs viscosity interpolation
%t is tempreture sw is specific weight v is viscosity and kv in kelvin
t=[10 12 15 17 20 22 25 28 30 35 40 45 50 60 70 80 110];
sw=[41.8 41.5  41.4 41.3 41.2 41.1 41.0 40.6 40.4 40.2 40.1 39.9 39.6 39.4 39.3 39.2 39.12];
v=[4.8 4.5 4.4 4.3 4.2 4.1 4.0 4.06 4.04 4.02 3.7 3.5 3.4 3.2 3.15 3.1 3.0];
kv=[1.8 1.5 1.4 1.32 1.02 1.0 0.7 0.6 0.4 0.2 0.1 0.9 0.7 0.5 0.4 0.2 0.1]; 

sw_17=interp1(t,sw,17) %specific weight at 17
v_17=interp1(t,v,17)  %viscosity at 17
kv_17=interp1(t,kv,17) %specific weight at 17

x=0:1:56;
y=interp1(t,sw,x,'spline');
subplot(2,1,1);
plot(t,sw,x,y); 
xlabel('tempreture ');
ylabel('specific weight ');
title( 'specific weight---tempreture interpolation');
subplot(2,1,2);
plot(t,sw);
xlabel('tempreture ');
ylabel('specific weight ');
title( 'specific weight---tempreture ');