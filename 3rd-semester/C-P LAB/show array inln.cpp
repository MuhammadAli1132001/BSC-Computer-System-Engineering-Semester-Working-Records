#include<iostream>
using namespace std;
main(){


int z[13];

 for (int i=1; i<13; i++)
 {
     cin>>z[i];

}


         cout<<"      VALUE OF ENTER ARRAY IN FOUR LINES:       \n"<<endl;


for (int i=1; i<4; i++){

  cout<<"value "<<i<<" = "<<z[i]<<"   ";
}
  cout<<"\n\n\n";



for (int i=4; i<7; i++)
    {

  cout<<"value "<<i<<" = "<<z[i]<<"   ";
}
cout<<"\n\n\n";


for (int i=7; i<10; i++)
    {

  cout<<"value "<<i<<" = "<<z[i]<<"   ";
}
cout<<"\n\n\n";


for (int i=10; i<13; i++)
    {

  cout<<"value "<<i<<" = "<<z[i]<<"   ";
}
cout<<"\n";


    return 0;
    }
