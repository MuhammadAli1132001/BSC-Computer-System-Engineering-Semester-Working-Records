#include<iostream>
using namespace std;
main()
{
   int I0=1;
     int I1=2;
      int I2=3;
       int I3=4;
        int I4=5;
         int I5=6;
          int I6=7;
           int I7=8;
    int s0,s1,s2;
     s0=0;
     s1=1;
     s2=1;


      if (s0==0 && s1==0 && s2==0)
        {
        cout<<I0;
        }
  else if(s0==1 && s1==0 && s2==0)
        {
        cout<<I1;
        }
  else if (s0==0 && s1==1 && s2==0)
        {
        cout<<I2;
        }
   else if(s0==1 && s1==1 && s2==0)
        {
        cout<<I3;
        }
  else if(s0==0 && s1==0 && s2==1)
        {
        cout<<I4;
        }
  else if (s0==1 && s1==0 && s2==1)
        {
        cout<<I5;
        }

  else if (s0==0 && s1==1 && s2==1)
        {
        cout<<I6;
        }
  else  {

    cout<<I7;
  }


  return 0;


}
