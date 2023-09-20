clc
clear all
close all

alpha=input ('enter alpha value ');
beta=input ('enter beta value ');
lhs=sin(alpha+beta);
disp('lhs value is ');
disp(lhs);
rhs=sin(alpha)*cos(beta)+cos(alpha)*sin(beta);
disp('rhs value is ');
disp(rhs);