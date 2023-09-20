#include<iostream>
#include<conio.h>
using namespace std;

class product{

int product_id;
string name;
int price;
public:
void display(){

   cout<<"\n\n\nname="<<name<<endl;
   cout<<"price"<<price<<endl;
}
void setprice(int m){

    price=m;

}
void setname( string w){
             name=w;
}
};

main(){

product p,p1;
int po;
cout<<"enter price "<<endl;
cin>>po;
p.setprice(po);

string name;
cout<<"enter name "<<endl;
cin>>name;
p.setname(name);

p.display();
getch();
return 0;
}


