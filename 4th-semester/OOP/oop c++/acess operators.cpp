#include<iostream>
using namespace std;

class operatr {
int age;
string name;
public:
operatr (int a,string n){
       this->name=n;
       this->age=a;
}
void access(){
         cout<<name<<"  "<<age<<endl;
         cout<<endl;
}

};
main(){

operatr p(12,"Ali");
cout<<"data shown by dot operator\nName age\n";
p.access();
 operatr *pt;
 pt=&p;
 cout<<"data shown by (->) operator\nName age\n";
pt->access();


}
