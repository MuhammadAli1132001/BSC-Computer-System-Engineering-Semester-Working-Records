#include<iostream>

using namespace std;
#pragma once
class first{
protected:
    int f;
public:
    int f_input(){

    cout<<"enter first number :";
    cin>>f;
    }
    };
class second:public first{

protected:
    int s;
public:
    int s_input(){
     first ::f_input();
    cout<<"enter second number :";
    cin>>s;
    }

};
class third: public second{

protected:
    int t;
public:
    int t_input(){

    second::s_input();
    cout<<"enter third number :";
    cin>>t;

    }

    int show(){
    cout<<"\nfirst number is "<<f<<endl;
    cout<<"second number is "<<s<<endl;
    cout<<"third number is " <<t<<endl;
    }
  int max(){

  if (t >s && t>f){
    cout<<t<<" is the maximum number."<<endl;
  }
  else if (s>t && s>f){
    cout<<s<<" is the maximum number.";
  }
  else {
    cout<<f<<" is the maximum number.";
  }
  }


};

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
