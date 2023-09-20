#include<iostream>
using namespace std;
int main (){

int *ptr;
int arry[6];

ptr=arry;
*ptr =1;
ptr=&arry[1];
*ptr=3;
ptr=&arry[2];
*ptr=5;
ptr=&arry[3];
*ptr=7;
ptr=&arry[4];
*ptr=9;
ptr=&arry[5];
*ptr=11;

for(int i=0; i<6; i++)
{
    cout<<"  "<<arry[i];
}
}
