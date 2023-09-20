#include<iostream>
using namespace std;
 int pow(int n ,int x);
 int main(){
         int n,x;
         cout<<"Enter a number\n ";
          cin>>n;
cout<<"Enter a number\n ";
cin>>x;
cout<<n<<"^"<<x<<" = ";
        cout<<pow(n,x);


 return 0;
 }
int pow(int n ,int x)
 {

     if (x==0)
return (1);

     else

         return n*pow(n,x-1);
 }
