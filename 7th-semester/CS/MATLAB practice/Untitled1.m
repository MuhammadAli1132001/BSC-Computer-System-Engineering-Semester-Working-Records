clc
clear all
close all

alpha=input ('enter alpha value ');
beta=input ('enter beta value ');
disp(' ***fisrt formula prove*** ');
lhs=sin(alpha+beta);
disp('lhs value is ');
disp(lhs);
rhs=sin(alpha)*cos(beta)+cos(alpha)*sin(beta);
disp('rhs value is ');
disp(rhs);

disp(' ***2nd formula prove*** ');
lhs=sin(alpha-beta);
disp('lhs value is ');
disp(lhs);
rhs=sin(alpha)*cos(beta)-cos(alpha)*sin(beta);
disp('rhs value is ');
disp(rhs);

disp(' ***3rd formula prove*** ');

lhs=tan(alpha+beta);
disp('lhs value is ');
disp(lhs);
rhs=(tan(alpha)+tan(beta))/(1-tan(alpha)*tan(beta));
disp('rhs value is ');
disp(rhs);

disp(' ***4th formula prove*** ');

lhs=sin(alpha)-sin(beta);
disp('lhs value is ');
disp(lhs);
rhs=2*(cos((alpha+beta)/2)*sin((alpha-beta)/2));
disp('rhs value is ');
disp(rhs);

disp(' ***5th formula prove*** ');
lhs=sin(alpha)*cos(beta);
disp('lhs value is ');
disp(lhs);
rhs=1/2*(sin(alpha+beta)+sin(alpha-beta));
disp('rhs value is ');
disp(rhs);