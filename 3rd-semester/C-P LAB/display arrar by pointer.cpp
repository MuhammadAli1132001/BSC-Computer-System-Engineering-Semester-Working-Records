#include<iostream>
using namespace std;
main(){

int a[10];
int *ptr;

cout<<"Enter 10 element array .."<<endl;
for (int i=0; i<10; i++)
{
     cin>>*(a+i);
}


cout<<"Enter array is ...1st pointer method..."<<endl;
 for (int i=0; i<10; i++)
 {
     cout<<*(a+i)<<" \t ";
 }
cout<<"Enter array is ...1st pointer method..."<<endl;
 for (int i=0; i<10; i++)
 {
     cout<<*a<<" \t ";
     a++;
 }
 return 0;
}
