#include<iostream>
using namespace std;


class test{

float a;
int b;

test(){
a=b=0;
}
public:
test(float x ,int y){

a=x;
b=y;
}

void seta(float a1){a=a1;}
void setb(int b1){b=b1;}

test operator -(test &obj){

test result;

result.seta(a-obj.a);
result.setb(b-obj.b);

return result;
}

void display(){

cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;


}
};
int main(){

test t0(9.2, 4);
test t1(4.1,6);
test t2=t0-t1;
t2.display();
}
