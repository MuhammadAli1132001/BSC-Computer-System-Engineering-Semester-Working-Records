#include<iostream>
using namespace std;
main()
{

  int I0=0;
  int I1=1;
  int I2=1;
  int I3=0;
  int I4=0;
  int I5=1;
  int I6=0;
  int I7=1;

   int select0=1;
   int select1=1;
   int select2=1;

int outputZ=0;


      outputZ=(I0&(~select0)&(~select1)&(~select2))|(I1&(select0)&(~select1)&(~select2))|
      (I2&(~select0)&(select1)&(~select2))|(I3&(select0)&(select1)&(~select2))|
      (I4&(~select0)&(~select1)&(select2))|(I5&(select0)&(~select1)&(select2))|
       (I6&(~select0)&(select1)&(select2))|(I7&(select0)&(select1)&(select2));


//I7 will shows//

   cout<<outputZ;


}
