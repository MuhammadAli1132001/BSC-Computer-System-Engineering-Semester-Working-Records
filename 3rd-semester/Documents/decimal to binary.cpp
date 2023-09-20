#include<iostream>
using namespace std;
main(){

long num,decimal,reminder,base=1,binary=0;

cout<<"Enter a decimal num"<<endl;
cin>>num;

decimal=num;

  while (num>0)
{
    reminder=num%2;
    binary=binary+reminder*base;
    num=num/2;
    base=base*10;

}

    cout<<"Num in decimal form "<<decimal<<endl;
    cout<<"Num in binary form "<<binary<<endl;
 }












