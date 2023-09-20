#include<iostream>
using namespace std;
main(){

int arry[12];
int *ptr;

cout<<"Enter 12 element array .."<<endl;
for (int i=0; i<12; i++)
{
     cin>>*(arry+i);
}


cout<<"Enter array (three in line) is ..."<<endl;
 for (int i=0; i<3; i++)
 {
     cout<<*(arry+i)<<" \t ";
 }
cout<<endl;
 for (int i=3; i<6; i++)
 {
     cout<<*(arry+i)<<" \t ";
 }
cout<<endl;
 for (int i=6; i<9; i++)
 {
     cout<<*(arry+i)<<" \t ";
 }
 cout<<endl;
 for (int i=9; i<12; i++)
 {
     cout<<*(arry+i)<<" \t ";
 }


 return 0;
}
