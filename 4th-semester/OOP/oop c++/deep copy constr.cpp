#include<iostream>
#include<cstring>
using namespace std;

class employee{

char *name;
char *dept;
double salary ,period;

public :
    employee ();
    employee (char n[],char d[], double s, double p);
    employee (employee & object);
    void show();
    void input();
    ~employee();


};
    employee::employee (){
    name="";
    salary=0;
    period=0;


    }


   employee::employee (char n[],char d[], double s, double p){
   this->name=n;
   this->dept=d;
   this->salary=s;
   this->period=p;
   }
   employee::employee (employee & object){

       int len=strlen(object.name);
       name= new char [len +1];
       strcpy (name,object.name);

       int len1=strlen(object.dept);
       dept= new char [len1 +1];
       strcpy (dept,object.dept);

       salary=object.salary;
       period=object.salary;


     }

     void employee::input(){
         string nme,deprt;
         name= new char [56];
         cout<<"name ";
         cin>>name;
        cin. getline( name, 56);
         dept= new char [56];
         cout<<"dept ";
         cin>>dept;
        cout<<"saiary ";
        cin>>salary;
        cout<<"period ";
         cin>>period;

     }

   void employee ::show(){
  cout<<"name =" <<name<<endl;
  cout<<"Department =" <<dept<<endl;
  cout<<"salary =" <<salary<<endl;
  cout<<"period =" <<period<<endl;


   }
   employee::~employee(){
       delete []name;
       delete []dept;
   }

main(){

employee s;
s.input();
s.show();

employee s2;
s2=s;
s2.show();

employee s3(s);
s3.show();


}
