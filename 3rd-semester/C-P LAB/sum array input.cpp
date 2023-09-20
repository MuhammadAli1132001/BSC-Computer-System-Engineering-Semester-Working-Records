#include<iostream>
using namespace std;
main(){

int x[10];
int y[10];
int sum[10];

    cout<<"\nEnter first array"<<endl;
 for (int i=0; i<10; i++)

     cin>>x[i];

    cout<<"\nEnter second array"<<endl;
 for (int i=0; i<10; i++)

         cin>>y[i];


    cout<<"\nSum of both the array is "<<endl;
 for (int i=0; i<10; i++)
         {

     sum[i]=x[i]+y[i];
     cout<<"\t"<<sum[i]<<endl;
         }
return 0;
}
