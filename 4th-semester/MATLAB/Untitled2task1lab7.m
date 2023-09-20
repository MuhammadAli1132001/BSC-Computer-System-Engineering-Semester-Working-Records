clc
clear all
close all

sign=ones(1,21);
sign(1,1:10)=-1;
sign(1,12:21)=1;
sign(1,11)=0;
stem(sign);
title('-10=<n=<10'); 
axis([-10 30 -1 1]);