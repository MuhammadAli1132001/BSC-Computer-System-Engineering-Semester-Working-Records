#include<iostream>
using namespace std;
main()
{
   int a,b,c,hcf,lcm;

   cout<<"Enter two number"<<endl;
   cin>>a>>b;
       c=b;
   for( int i=1; i<=a && i<=b; i++ )
{
    if(a%i==0 && b%i==0)
     hcf=i;


    while (1)
    {
         if (b%a==0)
        lcm=b;
        break;

    }
    b+=i;
}

          cout<<"HCF of "<<a<<" and "<<c<<" is " <<hcf<<endl;
          cout<<"lcm of"<<a<<" and "<<c<<" is "<<lcm;


      return 0;
}
