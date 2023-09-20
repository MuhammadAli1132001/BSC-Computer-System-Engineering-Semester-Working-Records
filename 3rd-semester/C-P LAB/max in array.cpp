#include<iostream>
using namespace std;
main(){


int z[5];

int maxi=z[5];

cout<<"ENTER ARAY OF 5 ELEMENT:"<<endl;

for (int i=0; i<5; i++)
{
cin>>z[i];
 if(z[i]>maxi)

 {
     maxi=z[i];
 }
}
cout<<"   \nGreater number in array is : ";
cout<<maxi;


return 0;

}
