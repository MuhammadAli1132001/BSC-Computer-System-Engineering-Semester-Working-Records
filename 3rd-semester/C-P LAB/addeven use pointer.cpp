
#include<iostream>
using namespace std;
main() {
	int a, b = 2, *c = &b, s = 0, *p = &s;
	cout<<"Enter a number: ";
	cin>>a;
	while(*c <= a) {
		*p += *c;
		*c += 2;
}
cout<<*p;
}
