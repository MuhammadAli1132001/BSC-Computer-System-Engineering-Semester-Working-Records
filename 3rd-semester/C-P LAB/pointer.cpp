#include<iostream>
using namespace std;
void myswap(int*,int*);

main(){

int x;
int y;
cout<<"Enter two number for swaping"<<endl;
cin>>x>>y;
cout<<" Before swaping"<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
myswap( &x,&y);
return 0;
}

void myswap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
cout<<" After swaping"<<endl;
cout<<"x = "<<*a<<endl;
cout<<"y = "<<*b<<endl;


}
