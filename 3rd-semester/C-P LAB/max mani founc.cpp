#include<iostream>
using namespace std;
void findmaximani(int,int,int,int);
main(){

int n1,n2,n3,n4;
cout<<"Enter four number ";
cin>>n1>>n2>>n3>>n4;
findmaximani(n1,n2,n3,n4);

return 0;
}
 void findmaximani(int a,int b,int c,int d){
int maxi=a,mani=a;

 int maximani[4]={a,b,c,d};

  for (int i=0; i<4; i++){
    if (maximani[i]>maxi)
   maxi =maximani[i];

    if(maximani[i]<mani)
       mani =maximani[i];
  }
    cout<<"Maximum number is :"<<maxi;
    cout<<"\nMinimum number is :"<<mani;
 }
