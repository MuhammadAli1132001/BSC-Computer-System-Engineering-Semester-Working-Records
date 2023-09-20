clc 
clear all
close all 


%g1
num1 = [1];
denum1 =[1 1];
%g(2)
num2 = [1];
denum2 =[1 3];
%g(3)
num3 = [1 3];
denum3 =[1 5];

sys1 = tf( num1,denum1);    %three system g1,g2,g3
sys2 = tf( num2,denum2);
sys3 = tf( num3,denum3);

%series
%first two system in series
series1 = series(sys1,sys2);
%third system in series with two
eq1 = series(series1,sys3);

step(eq1);


