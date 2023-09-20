#include<iostream>
using namespace std;
int pointer(int *, int *);

int main()
{
int a=4;
int b=5;

pointer (&a, &b);

}
int pointer (int * x, int* y){


 *x=*x+ *y;
 cout<<*x;
}
