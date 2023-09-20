
#include<iostream>
using namespace std;
main(){


int x[3][3]={{1,2,3},{4,6,8},{9,11,13}};

for( int i=0; i<3; i++){

    for (int j=0; j<3; j++)
{
    cout<<"The value array at ["<<i<<"]["<<j<<"] :"<<x[i][j]<<endl;

  }

}
  return 0;
}
