#include<iostream>
using namespace std;

class complex {

double real ,imag;
public:

    complex();
    complex(double real ,double imag);
    void input();
    void addcomplex(complex s1 ,complex s2);
    void subcomplex(complex s1 ,complex s2);
    void mulcomplex(complex s1 ,complex s2);
    void show();
};
complex::complex():real(0),imag(0){}
complex::complex(double r,double i){
    real=r;
    imag=i;
}

void complex::input(){
cout<<"enter real part :";
cin>>real;
cout<<"\nenter imaginary part :";
cin>>imag;
}
void complex::addcomplex( complex c1,complex c2){
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;

}
void complex::subcomplex( complex c1,complex c2){
    real=c1.real-c2.real;
    imag=c1.imag-c2.imag;
}
void complex::mulcomplex( complex c1,complex c2){
    real=c1.real*c2.real-c1.imag*c2.imag;
    imag=c1.real*c2.imag+c2.real*c1.imag;
}
void complex::show(){
if(imag>0)
cout<<real<<"+"<<imag<<"i"<<endl;
else
cout<<real<<imag<<"i"<<endl;
}

main(){

complex c1(0,0),c2(0,0),c;

cout;c1.input();
cout;c2.input();
cout<<"\nfirst complex number is ";c1.show();
cout<<"second complex number is ";c2.show();
c.addcomplex(c1,c2);
cout<<"sum of complex number is ";c.show();
c.subcomplex(c1,c2);
cout<<"difference of complex number is ";c.show();
c.mulcomplex(c1,c2);
cout<<"multiplication of complex number is ";c.show();
return 0;

}









