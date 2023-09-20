#include<iostream>
using namespace std;
main(){

int x[5]={2,4,5,7,8};
int sumx=0;
int y[6]={1,3,5,7,9,11};
int sumy=0;
int sum;

for (int i=0; i<5; i++)
    {
    sumx=sumx+x[i];
}
     cout<<"sum of array no 1 is "<<sumx<<endl;

   for (int j=0; j<6; j++)
    {
     sumy=sumy+y[j];
 }
     cout<<"sum of array no 2 is "<<sumy<<endl;


   sum=sumx+sumy;
   cout<<"sum of both the array is "<<sum;

return 0;
}
