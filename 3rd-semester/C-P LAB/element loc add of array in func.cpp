#include<iostream>
using namespace std;
int addarryelement(int *,int ,int);

int main(){

   int arry[5];
   int loc1,loc2;
   cout<<"Enter 5 element array :\n";
   for (int i=0; i<5; i++){
    cin>>*(arry+i);
   }
   cout<<"Enter location of an element "<<endl;
   cin>>loc1;
   cout<<"Enter location of another an element "<<endl;
   cin>>loc2;
         cout<<"THE SUM OF TWO ELEMENT IS :";
   addarryelement(arry,loc1,loc2);


}

int addarryelement(int *x,int loc1,int loc2){

     cout<<*(x+(loc1-1))+*(x+(loc2-1));

}
