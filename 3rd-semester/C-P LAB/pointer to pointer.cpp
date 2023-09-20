#include <iostream>
using namespace std;
main(){


int var =  10;
  int* ptr1 = &var;
    int** ptr2 = &ptr1;
       cout<<*ptr1<<endl<<**ptr2<<endl;

       cout<<*ptr2;  //show address of ptr1 ,ggarbej value:



}
