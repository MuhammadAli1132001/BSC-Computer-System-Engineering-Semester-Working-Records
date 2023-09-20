function plotcircle(r,x,y)
th = 0:pi/100:2*pi;
f = r * exp(j*th) + x+j*y;
plot(real(f), imag(f));