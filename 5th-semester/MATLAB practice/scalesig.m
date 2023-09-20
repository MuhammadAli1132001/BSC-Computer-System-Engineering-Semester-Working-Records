function sigplot(s1,s2,x)
figure 
stem(x,s1);
figure
stem(x,s2);
figure
stem(x,s1);
hold on
stem(x,s2);
hold on
figure 
subplot(2,1,1);
stem(x,s1);
hold on
subplot(2,1,2);
stem(x,s2);
hold on

