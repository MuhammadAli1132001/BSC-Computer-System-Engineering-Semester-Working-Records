#include<iostream>
using namespace std;
class base{
protected:
    int ba;
public:
    int ba_input(){

    cout<<"enter base :";
    cin>>ba;
    }
    int show_base(){
    cout<<"base = "<<ba<<endl;
    }
    };
class exponent {

protected:
    int exp;
public:
    int exp_input(){
    cout<<"enter exponent :";
    cin>>exp;
    }
int show_exp(){
    cout<<"exponent = "<<exp<<endl;
    }
};
class power: public exponent,public base{

protected:
    int po;
public:
    power(){
    po=1;
    }

    int in1(){
       base:ba_input();
       exponent::exp_input();

    }

    int show1(){
         base::show_base();
         exponent::show_exp();

    cout<<"power is :";
    while (exp>0){
        po=ba*ba;
        --exp;
    }
    cout<<po;
    }


};

int main(){

power A;
A.in1();
A.show1();
return 0;
}
