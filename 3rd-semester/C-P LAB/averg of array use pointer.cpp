#include<iostream>
using namespace std;
int averg(int *, int);
int main (){

    int arry [5]={2,4,6,8,10};
    int x;

    averg(arry,x);
    return 0;
}
int averg(int *arry,int siz){
    int sum =0;
    for (int i=0; i<5; i++)
    {
        sum=*(arry+i)+sum;
    }

   cout<<sum/5;
}
