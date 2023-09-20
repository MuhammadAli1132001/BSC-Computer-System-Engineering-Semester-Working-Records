#include<iostream>
using namespace std;
void myswap(int *x,int *y);

int main(){

int x,y;
        cout<<"Enter the value of x and y :"<<endl;
        cin>>x>>y;

cout<<"Before swaping x = "<<x<<endl;
         cout<<"Before swaping y = "<<y<<endl;

         myswap( &x ,&y);
         return 0;


}

void myswap(int *x, int *y){

 int temp=*x;
        *x=*y;
        *y=temp;
        cout<<"\nAfter swaping x = "<<*x<<endl;
         cout<<"After swaping y = "<<*y<<endl;


}
