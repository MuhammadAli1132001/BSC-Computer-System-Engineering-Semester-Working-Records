#include<iostream>
using namespace std;
main(){

float a,b,c,ave,per,obt;


 cout<<"ENTER PHYSICS MARKS\n";
   cin>>a;

  cout<<"ENTER MATHS MARKS\n";
    cin>>b;

   cout<<"ENTER COMPUTER MARKS\n";
     cin>>c;

   cout<<"TOTAL MARKS OUT OF 300 ="<<a+b+c<<endl;
    obt=a+b+c;

    if(obt>=200)
        cout<<"GRADE :A\n";

    else   if (obt>=100)
    cout<<"GRADE :B\n";

    else
        cout<<"GRATE :C\n";

   cout<<"YOUR PERCENTAGE IS :"<<obt/300*100;



}
