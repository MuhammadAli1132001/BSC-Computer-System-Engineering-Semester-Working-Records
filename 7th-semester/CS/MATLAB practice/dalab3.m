clc
clear all
close all

%initial values for d/f function
p=[1 2 5];

%unstable system 
den = [-1 2 1]; nom = [1 2 5];

%stable systemden = [5 4 2]; nom = [1 2 5];
%marginally stable system den = [1 0 1]; nom = [1 2 4];


%finding roots
r=roots(p);

%finding poly
p=poly(r);


%finding transfer function
transfer_fuc = tf(nom,den);

%finding pzmap
pzmap(transfer_fuc);


%finding step step(transfer_fuc);



