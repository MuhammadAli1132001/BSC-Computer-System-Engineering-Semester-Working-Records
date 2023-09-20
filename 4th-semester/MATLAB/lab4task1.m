%task 1
%x1(4)=[2 5 8 4 3];
%x2(n)=[4 3 2];
function add(x1,x2)

x1=[2 5 8 4 3];
x2=[4 3 2 8 9 ];
add=x1+x2
mul=x1.*x2
sum=0;
for i=0:x1[4];
    
    sum=sum+i;
    disp(sum)
    end

