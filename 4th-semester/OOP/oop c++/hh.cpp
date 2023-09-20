#include<iostream>
using namespace std;
class complex{
	private:
		double re, im;
	public:
		complex();
		complex(double r, double i);
		complex addCom(complex c);
		void show();
		void input();
		complex subCom(complex c1);
		complex mulCom(complex c1);
};

complex::complex(double r, double i): re(r), im(i) {}

complex::complex(): re(0), im(0) {}

complex complex::addCom(complex c) {
	complex temp(re + c.re, im = c.im);
	return temp;
}

void complex::show() {
	cout<<re<<" + "<<im<<endl;
}

void complex::input() {
	cout<<"Real ";
	cin>>re;
	cout<<"Imag: ";
	cin>>im;
}

complex complex::subCom(complex c) {
	complex temp(re + c.re, im + c.im);
	return temp;
}

complex complex::mulCom(complex c) {
	complex temp(re * c.re - im * c.im, re * c.im + im * c.re);
	 return temp;
}
int main() {

	return 0;
}
