#include<iostream>
using namespace std;
main(){

int i,num1,num2,sum=0;
cout<<"ENTER TWO NUMBER as range\n";
cin>>num1>>num2;



   for (i=num1; i<num2; i++)
{
    if(i%2==0)
{
     sum+=i;
}


}
       cout<<"Sum of even number between "<<num1<<" and "<<num2<<" is ";
         cout<<sum;
      return 0;
}


