#include<iostream>
using namespace std;
 int prime(int);
 int main(){
         int n,flag;
         cout<<"Enter a number\n ";
          cin>>n;

          flag=prime(n);
          if(flag==false){
            cout<<n<<" is not a prime number";
          }
      else {
        cout<<n<<" is prime";
      }





 return 0;
 }
int prime(int n)
 {
       int flag=true;
     for(int i=2; i<n/2; i++)

     if (n%i==0){
           flag=false;
           break;
     }

return flag;
     }

