#include<iostream>
using namespace std;
main(){

  int a, n1=1,n2=300,result;

  cout<<"Prime numbers b/w 1 and 300 are :";


while(n1<n2)
{
    result=0;
    for (a=2; a <= n1/2; a++)
{

   if (n1%a==0)
   {
       result==1;
       break;
}
}
   if(result==0)

      cout<<n1<<" ";
      ++n1;

  }
 return 0;
 }





