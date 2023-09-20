#include<iostream>
using namespace std;

class parent {
protected:
int age;
string name;
public:
parent(){
age =0;
name="";
}
parent(int a,string n)
{
this->age=a;
this->name=n;
}
};

class child:parent{
string work;
public:
child (){
    work="";
}

child(int a,string n,string w):parent(a,n)

{
    this->work=w;
}

void show(){
cout<<"age of parent "<<age;
cout<<"\nname of parent "<<name;
cout<<"\nwork of parent "<<work;
}
};
main(){

child a(23,"Ali","farmer");

a.show();

}

