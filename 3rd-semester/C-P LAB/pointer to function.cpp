#include<iostream>
using namespace std;
int first(int, int);
int second(int,int);
int third(int ,int ,int(*)(int ,int));

main(){

int x ,y ,a;
cin>>x>>y;

a=third (x,y,first);
cout<<a;


}
int third(int x,int y, int(*func)(int ,int )){

return (*func)(x,y);


}
int first(int a, int b){

return a+b;
}
int second(int c,int b){

return c-b;
}
