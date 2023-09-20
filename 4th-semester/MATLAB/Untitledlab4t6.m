clc
clear all
close all
T=-9:11;
sign1=zeros(21);
sign1(10)=1;
sign1(9)=3;
sign1(8)=2;
sign1(7)=6;
sign1(6)=4;
sign1(5)=7;
sign2=zeros(21)
sign2(10)=1;
sign2(9)=2;
sign2(8)=2;
sign2(7)=4;
sign2(6)=6;
sign2(5)=7;
stem(T,sign1);
figure;
stem(T,sign2);
figure;
sign3=sign1+sign2;
stem(T,sign3)

