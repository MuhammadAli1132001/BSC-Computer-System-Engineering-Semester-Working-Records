clc;
clear all;
close all
x=input('Enter Number of samples of your signal: ');
for i=1:x
    samp(1,i)=input(['enter element no' i 'of sample']);
end
beta=input('Enter Scaling factor value beta: ')
sigplot(samp,scalesig(samp,beta))

