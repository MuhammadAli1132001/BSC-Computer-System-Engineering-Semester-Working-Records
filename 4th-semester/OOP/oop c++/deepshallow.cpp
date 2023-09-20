#include<iostream>
#include<cstring>
using namespace std;

class student{

char *name;
int age;
double salary ,period;

public :
    student ();
    student (char n[], double p);
    student (student & object);
    void show();


};
    student::student (){
    name="";
    age=0;



    }


   student::student (char n[], double p){
   this->name=n;
   this->age=p;
   }
   student::student (student & object){

       int len=strlen(object.name);
       name= new char [len +1];
       strcpy (name,object.name);

       age=object.age;


     }

   void student ::show(){
  cout<<"name " <<name<<endl;
  cout<<"age " <<age<<endl;

   }

main(){

student s("ali",19);
s.show();

student s2;
s2=s;
s2.show();

student s3(s);
s3.show();


}
