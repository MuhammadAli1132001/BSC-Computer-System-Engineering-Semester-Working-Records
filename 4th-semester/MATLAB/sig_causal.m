function sig_causal(s,p,x,t)
subplot(3,1,1);
stem(t,s);
subplot(3,1,2);
stem(t,p);
subplot(3,1,3);
stem(t,x);