#include<iostream>
using namespace std;
class B;
class A{
private:
    int num;
    string name;
public:
    A(){
        num =0;
        name="";
    }
   A(int o,string n){
    num=o;
    name=n;
   }
    int getr (){
     return num;

     }
     string getter (){
     return name;
     }

     friend void  frnd(A &obj);
};
  void frnd (A &obj){
      cout<<"num through friend: "<<obj.num<<endl;
             cout<<"name through friend: "<<obj.name;
      obj.num=1801;
      obj.name="obaid";
}

int main(){
A obj(124,"muhammaad ali");
frnd(obj);
      cout<<"\n\nchanged value of class functionc num: "<<obj.getr();
      cout<<"\nchanged value of class function name: "<<obj.getter();

return 0;

}
