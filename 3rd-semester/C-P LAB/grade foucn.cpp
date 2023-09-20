#include<iostream>
using namespace std;

int  Getgrade( int );

main(){

 int marks;

cout<<"Enter total number out of 100"<<endl;
 cin>>marks;
Getgrade(marks);
return 0;
}
       int Getgrade(int num )
       {

char grade;


    if(num>=90 && num<=100)
    {
    grade = 'A';

}

    else if(num>=70 && num<90){
         grade = 'B';
    }


   else if(num>=60&& num<70){
   grade = 'C';
   }


   else if(num>=50 && num<60){
    grade = 'D';
   }



  else if (num>=40 && num<50){
    grade = 'E';
  }


    else if(num<40){
         grade='f';
    }



cout<<"Grade = "<<grade;



}



