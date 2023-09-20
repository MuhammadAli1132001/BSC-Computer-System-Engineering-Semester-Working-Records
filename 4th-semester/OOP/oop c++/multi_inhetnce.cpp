#include<iostream>
using namespace std;

class area{
int l,w;

public:

    int getarea(int l,int w){

     return (l*w);
    }
    void display(){

 cout<<"\nthis is area parent call";
 }

};

class paremeter{
int l,w;

 public:
     int getpare(int l,int w){

     return (2*l*w);
    }
    void display(){

 cout<<"\nthis is parameter parent call";
 }

};

class rectangle: public area, public paremeter{

int lenght,breath;
public:
rectangle(){
lenght=0;
breath=0;

}

rectangle(int l, int b){

  lenght=l;
  breath=b;
}

 int get_area(){

   return area::getarea(lenght,breath);
 }

 int get_pare(){

   return paremeter::getpare(lenght,breath);
 }
  void display(){

 cout<<"\nthis is rectangle child call";
 }

};

main(){

rectangle R(2,4);

cout<<R.get_area()<<endl;
cout<<R.get_pare();
R.area::display();//parent void type display function will call by this operater//
R.paremeter::display();
R.display();//child void type display function will call by this operater//
return 0;

}



