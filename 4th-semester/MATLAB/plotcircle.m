function plotcircle(x,y,r)
theta=[0:1/100:2*pi];
px=(r*cos(theta))+x;
py=(r*sin(theta))+y;
figure
plot(px,py)