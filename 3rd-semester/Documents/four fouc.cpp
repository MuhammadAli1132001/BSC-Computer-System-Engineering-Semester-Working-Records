
#include<iostream>
using namespace std;
int main() {
	float num1, num2;
	char operatore, decision='Y';
	while(decision=='Y') {
	cout<<"Enter number: ";
	cin>>num1;
	cout<<"Enter number: ";
	cin>>num2;
	cout<<"Enter operation symbol: ";
	cin>>operatore;
	switch(operatore) {
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
		default:
			cout<<"Invalid";
	}
	cout<<"\nDo you want to do one more? Y or N ";
	cin>>decision;
}
	return 0;
}
