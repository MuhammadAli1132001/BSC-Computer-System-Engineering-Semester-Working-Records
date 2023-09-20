#include<iostream>
using namespace std;
main(){

  int marks;


  cout<<"ENTER YOUR MARKS out of 100 \n";
  cin>>marks;


  if( marks>=90 && marks<100 )
{

   cout<<"your grade is : A+";
}

   else if (marks>=70 && marks<90)

  {

  cout<<"your grade is: A";
  }

   else if( marks>=50 && marks<70)
{
       cout<<"your grade is : B";

}

else if( marks<50)
{
       cout<<"your grade is : F";

}
   else
{
       cout<<"invalid";

}

return 0;
      }





