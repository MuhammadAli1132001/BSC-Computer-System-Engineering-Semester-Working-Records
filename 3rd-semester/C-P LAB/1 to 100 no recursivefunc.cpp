#include<iostream>
using namespace std;
int sum(int x = 3, int y = 6);
main() {
	int a, b;
	cout<<"Entre a number";
	cin>>a;
	cout<<"Entre another  number: ";
	cin>>b;
	if((a==0)&&(b==0)) {
		cout<<sum();
	}else if((a==0) || (b==0)) {
		if(a==0) cout<<sum(b);
		else cout<<sum(a);
	}else {
		cout<<sum(a,b);
	}


}
int sum(int x, int y) {
	return x + y;
}
