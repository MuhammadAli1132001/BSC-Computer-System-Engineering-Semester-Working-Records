#include<iostream>
using namespace std;

class constr{

int l;
float h;
string n;

public:
 constr (){

 l=2;
  h=7.1;
  n="ali";
 }
  constr (int lenght,string name, float height){
     this ->l=lenght;
     this->n=name;
     this->h=height;
 }


 void display(){

 cout<<l<<"\n"<<h<<"\n"<<n;
 }



 ~constr(){

  cout<<"\n destructor of name "<<n;

 }
};

main(){

 constr d(2,"Ali",3.2);
 d.display();

}
