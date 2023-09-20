#include<iostream>
using namespace std;

class product{

static int product_id;
public:

 product(){
 product_id++;

}
int  setproduct_id(){
    return product_id;

}
};

int product::product_id=1;

main(){

product p;                 //static variable inside the class can also used to find number of object declared.
product p1;
product p2;
product p3;
cout<<"number of object declare: "<<p1.setproduct_id();

}


