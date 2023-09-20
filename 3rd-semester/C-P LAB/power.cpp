#include<iostream>
using namespace std;
main()
{
    int i,exponent,result=1;
    float base;

    cout<<"Enter base of a number :"<<endl;
    cin>>base;
        cout<<"Enter exponent :"<<endl;
        cin>>exponent;

        for( i=1; i<=exponent; i++)
        {
            result=result*base;
        }
{
    cout<<"RESULT"<<endl;
    cout<<base<<"^"<<exponent<<"="<<result<<endl;
    }

 return 0;


     }
