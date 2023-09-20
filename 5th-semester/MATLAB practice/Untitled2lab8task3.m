clc 
clear all
close all
t=-10:1:10;
sign=sin(0.2*t);
position=(t>=0);
x1=sign.*position;
sig_causal(sign,position,x1,t)