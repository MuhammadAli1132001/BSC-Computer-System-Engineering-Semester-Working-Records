#include<iostream>
using namespace std;
main(){

int x[5];



 cout<<"ENTER array"<<endl;

    for(int a=0; a<5; a++)
        cin>>x[a];

 cout<<"Array in  order "<<endl;

  for (int i=0; i<5; i++)
  {
      cout<<x[i]<<"  ";

  }

  cout<<"\nArray in reverse order "<<endl;
  for (int j=4; j>=0; j--)
  {
      cout<<x[j]<<"  ";

  }

return 0;



}
