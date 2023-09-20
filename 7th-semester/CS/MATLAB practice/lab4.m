clc 
clear all
close all 

t=0:1:50;

%sinusiodal input

%g1
num1 = [1];
denum1 =[1 1];
%g(2)
num2 = [1];
denum2 =[1 3];
%g(3)
num3 = [1 3];
denum3 =[1 5];

sys1 = tf( num1,denum1);
sys2 = tf( num2,denum2);
sys3 = tf( num3,denum3);



series1 = series(sys1,sys2);
parellel1 = parallel(sys3,sys1);
series2 = series(series1,parellel1);


series_eq = series(sys2,sys3);
feedbk = feedback(series_eq,sys3);

eq = parallel(series2,feedbk);
step(eq);
