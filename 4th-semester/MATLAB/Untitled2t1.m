clc
clear all
close all

x=input('enter real part ');
y=input('enter img part ');
zprint(A)
function [re im conj]=zprint(A);
re=real(A)
im=img(A)
conj=conj(A)
