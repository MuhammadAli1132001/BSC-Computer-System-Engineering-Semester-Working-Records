#include<iostream>
using namespace std;
int add(int, int);
int sub(int, int);
int multi(int, int);
int divi(int,int);
int calculator(int ,int ,int(*)(int ,int));

main(){

int x ,y,a;

cout<<"Enter two values :"<<endl;
cin>>x>>y;

cout<<"Value after executing a function : ";
a=calculator(x,y,multi);         //3rd function will executed(multiplication of two number)//
cout<<a;


}
int calculator(int x,int y, int(*func)(int ,int )){

return (*func)(x,y);


}
int add(int a, int b){

return a+b;
}

int multi(int c,int b){

return c*b;
}
int divi(int c,int b){

return c/b;
}
