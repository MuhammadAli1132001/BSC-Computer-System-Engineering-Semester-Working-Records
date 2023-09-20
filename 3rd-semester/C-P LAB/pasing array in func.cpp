#include<iostream>
#define myarray 5
using namespace std;
void printarray(int[]);
int main(){

int a[myarray]={0};
cout<<"Enter array ..."<<endl;
for (int i=0; i<myarray; i++)
         cin>>a[i];

  printarray(a);
  return 0;
}
void printarray(int a[myarray]){

 for (int i=0; i<myarray; i++)
 {
      cout<<"Array value at "<<i<<" is "<<a[i]<<endl;


 }
}
