#include<iostream>
using namespace std;
void pt(int ,int *);
int main(){

 int arr[4]={2,4,6,8};
 int x;
 cout<<"enter element number "<<endl;
 cin>>x;
 pt (x,arr);
 return 0;
}
 void pt(int x, int *a){

 cout<<"element no "<<x<<" in the array is "<<*(a+(x-1));
 }
