#include<iostream>
using namespace std;
 int addodd(int n);
 int main(){
         int n;
         cout<<"Enter number of terms in odd number series\n ";
          cin>>n;
               cout<<"\nSum of first "<<n<<" odd numbers is ";

        cout<<addodd(n);

 return 0;
 }
int addodd(int n)
 {
     if (n==1)

       return (1);
     else
return (addodd(n-1)+(2*n-1));

 }
