#include<iostream>
using namespace std;
main(){

int x[5]={2,4,5,7,8};
int sum=0;
x[2]=1;
for (int i=0; i<5; i++)

 sum=sum+x[i];
   cout<<"sum array is "<<sum;

return 0;



}
