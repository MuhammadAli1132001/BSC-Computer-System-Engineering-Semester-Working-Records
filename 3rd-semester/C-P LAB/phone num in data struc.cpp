#include<iostream>
using namespace std;

struct phone{

int code;
int exchange;
int number;

};
main(){
phone x;
x={(071),243, 987};
x.code=(071);
x.exchange=243;
x.number=987;

phone y;
y.code;
y.exchange;
y.number;

cout<<"Enter code area :"<<endl;
cin>>y.code;
cout<<"Enter exchange :"<<endl;
cin>>y.exchange;
cout<<"Enter number :"<<endl;
cin>>y.number;

cout<<"My number is this one  : ";
cout<<x.code<<" "<<x.exchange<<" "<<x.number<<endl;

cout<<"Your number is this one  : ";
cout<<y.code<<" "<<y.exchange<<" "<<y.number<<endl;

}
