#include<iostream>
using namespace std;

class product{

int product_id;
string name;
int price;
public:
void display(){

   cout<<"\n\n\n"<<name<<endl;
   cout<<product_id<<endl;
   cout<<price<<endl;
}
void setproduct_id(int n){
  if(product_id>0){
     product_id=n;

}
}
void setprice(int m){

if (price>3000){
    price=m;
}
}
void setname( string w){
             name=w;
}
};

main(){

product p;
int price;
cout<<"enter price "<<endl;
cin>>price;
p.setprice(price);
int product_id;

cout<<"enter product_id "<<endl;
cin>>product_id;
p.setproduct_id(product_id);
string name;
cout<<"enter name "<<endl;
cin>>name;
p.setname(name);

p.display();
return 0;
}


