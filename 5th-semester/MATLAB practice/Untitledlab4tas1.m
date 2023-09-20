%task 2
clc
clear all
close all
s1=[];
b=input('enter beta ');
s1=input('enter single ');
scalesig=b.*s1;
disp(scalesig);
disp('seprate figures')
stem(s1);
figure
stem(scalesig);
figure
disp('overlap figures')
stem(s1);
hold on
stem(scalesig);
hold on
disp('subplot figures')
subplot(2,1,1)
stem(s1);
subplot(2,1,2)
stem(scalesig);