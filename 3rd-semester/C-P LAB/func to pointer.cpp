#include<iostream>
using namespace std;
void show(int*,int);

main(){

int x;

int arry[6]={2,3,4,5,6,7};
cin>>x;
show(arry ,x);
}
void show(int* x,int y){            //x=array and  x=y

cout<<*(x+(y+1));

}
