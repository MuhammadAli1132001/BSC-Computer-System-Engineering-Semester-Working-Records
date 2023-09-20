#include<iostream>
using namespace std;
void myswap(int *x);

int main(){

int x;
        cout<<"Enter the value of x and y :"<<endl;
        cin>>x;

         myswap( &x);
         return 0;


}

void myswap(int *x){


       if( *x>0){
        return myswap(&x);

}
}
#include<iostream>
using namespace std;
main() {
	int a, n = 1, *b = &n;
	cout<<"Input: ";
	cin>>a;
	while(*b <= a) {
		cout<<*c<<" ";
		(*c)++;
	}
}
