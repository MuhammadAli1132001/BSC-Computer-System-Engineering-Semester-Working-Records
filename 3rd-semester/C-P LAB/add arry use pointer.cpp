#include<iostream>
using namespace std;
main(){

int arry[5];
int *ptr;
int sumarry=0;
cout<<"Enter 5 element array .."<<endl;
for (int i=0; i<5; i++)
{
     cin>>*(arry+i);
}


cout<<"The sum of Enter array is ..."<<endl;
 for (int i=0; i<5; i++)
 {
     sumarry=sumarry+*(arry+i);
 }

 cout<<sumarry;
 return 0;
}
