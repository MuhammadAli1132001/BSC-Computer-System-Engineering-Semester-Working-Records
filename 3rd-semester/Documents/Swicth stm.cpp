#include<iostream>
using namespace std;
int main(){

char grade;
cout<<"Enter your grade :"<<endl;
cin>>grade;

 switch (grade){
 case 'A':
 cout<<"OURSTANDING";
 break;
 case 'B':
 cout<<"EXCELLENT";
 break;
 case 'C':
 cout<<"WELL DONE";
 break;
 case 'D':
 cout<<"YOU ARE PASSED";
 break;
 case 'E':
 cout<<"TRY AGAIN";
 break;

 default :
 cout<<"NOT EXIST";

 }
 return 0;
}
