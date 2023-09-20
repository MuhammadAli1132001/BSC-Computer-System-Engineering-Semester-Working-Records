#include <iostream>
 using namespace std;
a#include <conio.h>
 class employee
 {
int empl_no;
 float salary;
 public:
 employee() //default constructor
 {}
 employee(int empno,float s)//constructor with arguments
 {
 empl_no=empno;
 salary=s;
 }
 employee (employee &emp)//copy constructor
 {
 cout<<"\ncopy constructor working\n"<<endl;
 empl_no=emp.empl_no;
 salary=emp.salary;
 }
void display (void)
 {
 cout<<"\nEmp.No:”<<empl_no<<”salary:"<<salary<<endl;
 }
 };
int main()
 {
 int eno;
 float sal;
//clrscr();
 cout<<"Enter the employee number and salary\n";
 cin>>eno>>sal;
 employee obj1(eno,sal);//dynamic initialization of object
 cout<<"\nEnter the employee number and salary\n";
 cin>>eno>>sal;
 employee obj2(eno,sal); //dynamic initialization of object
 obj1.display(); //function called
 employee obj3=obj2; //copy constructor called
 obj3.display();
 getch();
 }
