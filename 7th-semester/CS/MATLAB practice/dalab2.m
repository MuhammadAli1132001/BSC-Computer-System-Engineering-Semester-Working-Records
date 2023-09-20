clc 
clear all
close all 

t=0:0.01:40;

%sinusiodal input
u = sin(t);

num = [100];
denum =[1 4 20];

sys = tf( num,denum);

y1 = lsim(sys,u ,t);
y2 = step(sys,t);
y3 = step(sys, 5:0.01:40);

temp = zeros(500,1);
y3 =[temp;y3];

y = y1+y2+y3;




t1 = 0:0.01:40; 
ysqr = 2*square(2*pi*0.01*t1);
y_sqr =lsim(sys, ysqr, t1);
com = y_sqr + y;
plot(t1,com);