#include<iostream>
using namespace std;
main(){

int a=10;
float b=11.4;
void *ptr;

ptr=&a;

cout<<"\n\nint pointed by void .."<<*( int *)ptr;
}
