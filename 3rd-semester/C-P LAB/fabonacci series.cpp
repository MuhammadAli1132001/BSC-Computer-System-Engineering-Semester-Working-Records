#include<iostream>
using namespace std;
main(){


  int first=0,second=1 ,third, n=13;

  //there are 13 terms in f.series upto 200//

  for(int i=0 ;i<n; i++)
{

    if (i==0)
  {
      cout<<"Fabonacci series upto 200:"<<endl;
      cout<<first<<" "<<second<<" ";

  }
 else
{
      third=first+second;
    first=second;
    second=third;
    cout<<third<<" ";
}

    }
    return 0;
}




