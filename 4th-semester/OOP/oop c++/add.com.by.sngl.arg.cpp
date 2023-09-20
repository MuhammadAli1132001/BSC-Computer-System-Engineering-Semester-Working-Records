#include<iostream>
using namespace std;

class complex {

double real ,imag;
public:

    complex();
    complex(double real ,double imag);
    void input();
    complex addcomplex(complex s1);
    complex subcomplex(complex s1);
    complex mulcomplex(complex s1);

    void show();

};



complex::complex():real(0),imag(0){}

complex::complex(double r,double i){
    real=r;
    imag=i;

}



void complex::input(){
cout<<"enter real part complex number :\n";
cin>>real;
cout<<"\nenter imaginary part complex number :\n";
cin>>imag;


}

complex complex::addcomplex( complex c1){
    complex one(c1.real+real,c1.imag+imag);
    return one;

}
complex  complex::subcomplex( complex c1)
{
    complex one(c1.real-real,c1.imag-imag);
      return one;
}
 complex complex::mulcomplex( complex c1){
    complex one(c1.real*real-c1.imag*imag,c1.real*imag+real*c1.imag);
    return one;

}

void complex::show(){
if(imag>0)
cout<<real<<"+"<<imag<<"i"<<endl;
else
cout<<real<<imag<<"i"<<endl;

}

main(){

complex c,c1,c2;

cout;c1.input();
cout;c2.input();
cout<<"\nfirst complex number is ";c1.show();
cout<<"second complex number is ";c2.show();
c=c2.addcomplex(c1);
cout<<"sum of complex number is ";c.show();
c=c2.subcomplex(c1);
cout<<"difference of complex number is ";c.show();
c=c2.mulcomplex(c1);
cout<<"multiplication of complex number is ";c.show();
return 0;

}









