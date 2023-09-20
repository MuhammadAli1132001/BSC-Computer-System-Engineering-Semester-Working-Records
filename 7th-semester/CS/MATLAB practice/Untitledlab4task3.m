clc
clear all
close all
x1=[1 2 3 1 1];
x2=[2 3 0 1 2];

t=[0:4];
s=[];
y=1;
for x=1:5
    if x1(1,x)<x2(1,x)
        s(1,y)=x-1;
        y=y+1;
    end
end
disp('X1 sampal has smaller amplitude on compare to sampal x2');
disp(s);
sigplot3(x1,x2,t)
