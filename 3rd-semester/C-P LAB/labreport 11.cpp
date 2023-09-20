#include <iostream>
using namespace std;
class test {
public:
int y, z,b,c;
test()
{
b=1;
c=4;
}
~test(){
b=2;
c=4;
}
};
int main()
{
test a;
cout <<"the sum is: "<< a.b+a.c;
return 1;
}
