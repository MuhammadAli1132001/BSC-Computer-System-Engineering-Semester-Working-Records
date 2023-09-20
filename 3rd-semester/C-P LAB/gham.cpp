#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int a = 1, b, coffee = 0, tea = 0, cock = 0, orange_juice = 0;
	cout<<"1. Coffee\t2. Tea\t3. Cock\t4. Orange juice\n\n";
	do {
		cout<<"Please input the favorite beverage of person #"<<a<<": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program: ";
		cin>>b;
		a++;
		switch(b) {
			case 1:
				coffee++;
				break;
			case 2:
				tea++;
				break;
			case 3:
				cock++;
				break;
			case 4:
				orange_juice++;
			default:
				break;
		}

	}
	while(b!=-1); //-1 willterminate the program//


	cout<<"\n                 votes\n";
	cout<<"Coffee   \t\t"<<coffee<<endl;
	cout<<"Tea       \t\t"<<tea<<endl;
	cout<<"Cock      \t\t"<<cock<<endl;
	cout<<"Orange Juice\t\t"<<orange_juice;
	getch();
	return 0;
}
