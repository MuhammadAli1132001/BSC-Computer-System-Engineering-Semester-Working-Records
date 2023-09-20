#include<iostream>
using namespace std;
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

int main(){

third A;
A.t_input();
A.show();

A.max();

}
