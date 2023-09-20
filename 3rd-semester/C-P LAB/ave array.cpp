#include<iostream>
using namespace std;
main(){


int x[10];

int sum=0;
int averg;

cout<<"ENTER an array consist of 10 element :";

for (int i=0; i<10; i++)
{
     cin>>x[i];
     sum=sum+x[i];
}

{
 cout<<"Average of array is "<<sum<<" /10 = "<<sum/10<<endl;

}

 return 0;
}
