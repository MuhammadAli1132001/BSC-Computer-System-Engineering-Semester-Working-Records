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
    employee (const employee & object);
     ~employee();
    void show();
    void input();



};
    employee::employee ():name(), dept(),salary(0.0),period(0.0){ }


   employee::employee (char n[],char d[], double s, double p){
   name=n;
   dept=d;
   salary=s;
   period=p;
   }
   employee::employee (const employee & object){

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
          name= new char [strlen(&nme[0])];
        strcpy( name, &nme[0]);
        cout<<"name ";
         cin>>name;
         dept= new char [strlen(&deprt[0])];
        strcpy(dept, &deprt[0]);
         cout<<"dept ";
         cin>>dept;
        cout<<"saiary ";
        cin>>salary;
        cout<<"period ";
         cin>>period;

     }

   void employee ::show(){
  cout<<"\nname = " <<name<<endl;
  cout<<"Department = " <<dept<<endl;
  cout<<"salary = " <<salary<<endl;
  cout<<"period = " <<period<<endl;


   }
   employee::~employee(){
       cout<<"destructed............\n";
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
