#include<iostream>
#include<string.h>
using namespace std;
main() {
	string a, *pointer = &a, b = "Ali";
	cout<<"First name: ";
	cin>>a;
	*pointer = b;
	cout<<"value stored in a = "<<a;
	}











