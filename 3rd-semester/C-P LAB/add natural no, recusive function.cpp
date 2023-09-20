#include<iostream>
using namespace std;
 int add(int n);
 int main(){
         int n;
         cout<<"Enter no of natural number\n ";
          cin>>n;
           cout<<"\nSum of first "<<n<<" natural is ";
            cout<<add(n);


 return 0;
 }
int add(int n)
 {
       if (n!=0)
       return n +add(n-1);
return 0;

 }
