#include<iostream>
using namespace std;
void add(int a, int b, int *c);

int main(){

int a,b,c;

cout<<"Enter a number :"<<endl;
cin>>a;
cout<<"Enter another number :"<<endl;
cin>>b;

add ( a,b,&c);
return 0;
}

void add(int a,int b,int *c){

*c=a+b;
cout<<*c;


}

