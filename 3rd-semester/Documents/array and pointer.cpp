#include<iostream>
using namespace std;
main(){

int *ptr;
int arr[7]={3,4,5,6,7,8,9};

cout<<"\n\n\nArray display using pointer :";
 for(int i=0; i<7; i++)
 {
     cout<<*(arr+i);
     cout<<"  ";
 }
return 0;
}
