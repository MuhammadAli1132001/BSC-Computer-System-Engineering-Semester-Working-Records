clc
clear all
close all

filename = 'amir.OPUS';
[y,fs,bits] = wavread(filename);
firstpart= y(1:5);
secondpart= y(5:end);

sound(firstpart,fs);
sound(secondpart,fs)

