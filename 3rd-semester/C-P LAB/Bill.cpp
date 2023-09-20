#include<iostream>
using namespace std;

main()
{

int a,u,z;

  cout<<"ENTER YOUR ID :";
  cin>>a;


    cout<<"ENTER CONSUME UNIT :";
    cin>>u;

    if(u<=199)
    {
        cout<<"Amount charges @Rs.1.20 per unit :"<<u*1.20;
    }

    else if (u>=200 and u<400)
    {
        cout<<"Amount charges @Rs.1.50 per unit :"<<u*1.50;
    }
     else if (u>=400 and u<600)
    {
        cout<<"Amount charges @Rs.1.80 per unit :"<<u*1.80<<endl;
        cout<<"surcharge of 15% will be charge :"<<u*1.80*0.15<<endl;
        cout<<"Net Amount will be paid by customer :"<<u*2.00*0.15+u*2.00<<endl;
    }



 else
    {
        cout<<"Amount charges @Rs.2.00 per unit :"<<u*2.00<<endl;
        cout<<"surcharge of 15% will be charge :"<<u*2.00*0.15<<endl;
        cout<<"Net Amount will be paid by customer :"<<u*2.00*0.15+u*2.00<<endl;
    }

    return 0;
}
