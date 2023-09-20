#include<iostream>
using namespace std;
 main()
 {
  int I0=2;
  int I1=4;
  int I2=3;
  int I3=4;
  int I4=5;
  int I5=6;
  int I6=7;
  int I7=8;
                   //there are 8 condition in mux ,formula 2^n (n shows number of select lines in the mux)//
  int select0=1;
  int select1=0;
  int select2=1;
  int outputE;
                         //according to value in selected lines I5 will show//

 outputE=(select2==0 && select1==0 && select0==0)?I0:
                    (select2==0 && select1==0 && select0==1)?I1:
                        (select2==0 && select1==1 && select0==0)?I2:
                            (select2==0 && select1==1 && select0==1)?I3:
                                 (select2==1 && select1==0 && select0==0)?I4:
                                     (select2==1 && select1==0 && select0==1)?I5:
                                           (select2==1&& select1==1 && select0==0)?I6:I7;

 cout<<"output = "<<outputE;


 }








