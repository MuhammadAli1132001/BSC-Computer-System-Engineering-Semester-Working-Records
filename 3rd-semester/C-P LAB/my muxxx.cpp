#include<iostream>
using namespace std;
 main()
 {

  int I0=2;
  int I1=3;
  int I2=4;
  int I3=5;
  int I4=6;
  int I5=7;
  int I6=8;
  int I7=9;




  int select0=0;
  int select1=0;
  int select2=1;

  int outputE=0;




 outputE=(select2==0)?(select1==0)?(select0==0?I0:I1) : (select1==0)?(select0==0?I2:I3) : (select0==0? I4:I5):I6:I7);




 cout<<"output = "<<outputE;




 }
