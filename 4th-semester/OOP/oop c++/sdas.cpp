#include<iostream>
using namespace std;

class RationalNumber {
	private:
		int numerator, denomerator;
	public:
		RationalNumber() {
	numerator = 0;
	denomerator = 1;
}
RationalNumber(int a, int b) {
	numerator = a;
	denomerator = b;
}
		void showRN() {
	cout<<numerator <<"/"<<denomerator<<endl;
}
		friend bool operator>=(RationalNumber, RationalNumber);
		friend bool operator<=(RationalNumber, RationalNumber);
		friend bool operator==(RationalNumber, RationalNumber);
		friend RationalNumber operator+(RationalNumber, RationalNumber);
		friend RationalNumber operator/(RationalNumber, RationalNumber);
		friend bool operator>(RationalNumber, RationalNumber);
		friend bool operator<(RationalNumber, RationalNumber);
		friend RationalNumber operator-(RationalNumber, RationalNumber);
		friend RationalNumber operator*(RationalNumber, RationalNumber);
		friend bool operator!=(RationalNumber, RationalNumber);
};

RationalNumber operator+(RationalNumber a, RationalNumber b) {
	RationalNumber returnvalue(a.numerator * b.denomerator + a.denomerator * b.numerator,a.denomerator * b.denomerator);
	return returnvalue;
}

RationalNumber operator-(RationalNumber a, RationalNumber b) {
	RationalNumber returnvalue(a.numerator * b.denomerator - a.denomerator * b.numerator,a.denomerator * b.denomerator);
	return returnvalue;
}

RationalNumber operator*(RationalNumber a, RationalNumber b) {
	RationalNumber returnvalue(a.numerator * b.denomerator, a.denomerator * b.denomerator);
	return returnvalue;
}

RationalNumber operator/(RationalNumber a, RationalNumber b) {
	RationalNumber returnvalue(a.numerator * b.denomerator, a.denomerator * b.numerator);
	return returnvalue;
}

bool operator>(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator/a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3>n4) return true;
	return false;
}

bool operator<(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator / a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3 < n4) return true;
	return false;
}

bool operator<=(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator / a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3 <= n4) return true;
	return false;
}

bool operator>=(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator / a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3 >= n4) return true;
	return false;
}

bool operator==(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator / a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3 == n4) return true;
	return false;
}

bool operator!=(RationalNumber a, RationalNumber b) {
	float n3 = a.numerator / a.denomerator, n4 = b.numerator/b.denomerator;
	if(n3!= n4) return true;
	return false;
}

int main() {
	RationalNumber a(2, 4), b(3, 9);
	cout<<"A + B is ";
	RationalNumber n = a + b;
	n = a + b;
	n.showRN();
	a = a - b;
	a.showRN();
	a = a * b;
	a.showRN();
	a = a / b;
	a.showRN();
	bool gr = a > b;
	cout<<gr;
	return 0;
}




