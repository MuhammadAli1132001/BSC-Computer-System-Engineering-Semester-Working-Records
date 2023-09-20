#include<iostream>
using namespace std;

class test {

int no;
string name;
public:
test(int a ,string n)
{
    this->no=a;
    this->name=n;
}

int getdg(){
     return no;

}
string getdj(){
     return name;
}
};
void display(test object){
      cout<<"salam"<<object.getdj();
}
main(){

test p(1,"ali");
display(p);       //call by value
cout<<p.getdg();

}





