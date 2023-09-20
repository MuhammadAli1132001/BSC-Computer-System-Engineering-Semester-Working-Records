#include<iostream>
using namespace std;
main(){

int a,Number,ini=1;
cout<<"Enter  a number";
cin>>Number;

  for( a=1; a<=Number ;a++)
{
    ini=a*ini;
}
   {
      cout<<Number<<"! ="<<ini<<endl;
   }
return 0;

}
