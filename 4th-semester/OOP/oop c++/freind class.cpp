#include<iostream>
using namespace std;
class B;
class A{
private:
    int num;
public:
    A(){num =8;}
     friend int frnd(A,B);
};
class B{
private:
    int n;
public:
    B(){n =2;}
     friend int frnd(A,B);
};

  int frnd (A a,B b){

return (a.num+b.n);

}

int main(){
A obj1;
B obj2;
cout<<"addition through fried function: "<<frnd(obj1, obj2);
return 0;

}
