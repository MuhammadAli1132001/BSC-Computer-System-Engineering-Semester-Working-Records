#include<iostream>
using namespace std;

class complex{

double real ,imag;

public :
    complex (){
    real=0;
    imag=0;
    }


   complex (double re, double im){
   real=re;
   imag=im;
   }
   complex (complex & object){
         real=object.real;
         imag=object.imag;
     }

   void show(){

   cout<<real<<"+"<<imag<<endl;

   }

};

main(){

complex s(3,3);
s.show();

complex s2;
s2=s;
s2.show();

complex s3(s);
s3.show();


}
