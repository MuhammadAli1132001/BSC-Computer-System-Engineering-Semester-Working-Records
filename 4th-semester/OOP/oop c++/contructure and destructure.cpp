#include<iostream>
using namespace std;

class constr{
private:
int l;float h;
string n;

public:
 constr (){

 l=2;
  h=7.1;
  n="ali";
 }


 void display(){

 cout<<l<<"\n"<<h<<"\n"<<n;
 }

};

main(){

 constr d;
 d.display();//my

}
