clc
clear all
close all

sign1(1,1:5)=1;
sign2(1,2:5)=1;
sign=sign1-sign2;
stem(sign);