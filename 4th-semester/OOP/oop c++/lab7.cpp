#include <iostream>
using namespace std;
class shape{
protected:
    int area,volume;
public:

    //function of child class is executed through these virtual functions
 virtual double comarea(){
 }
 virtual double comvol(){
 }
 virtual void display (){
 }
};
class point: public shape{
protected:
    int x,y;
public:
    point(){
    x=y=0;
    }
    point(int a1,int b1){
    x=a1;
    y=b1;
    }
    void display (){
    cout<<"points: "<<x<<" , "<<y<<endl;
    }

};
class circle: public shape{
protected:
    int radius;
    public:
    circle (){
    radius=0;
    }

    circle(int x,int y,int rad){
    radius=rad;
    }
   double comarea(){

   return (radius*radius*3.13);
   }

    void display(){
    cout <<"radius of the circle: "<<radius<<endl;
    cout <<"area of the circle: "<<comarea()<<endl;
        }


};
class cylinder: public circle{
protected:
    int height;
    public:
    cylinder (){
    height=0;
    radius=0;

    }

    cylinder (int x,int y,int r,int h){
        height=h;
    radius=r;
    x=x;
    y=y;
        }

    double comarea(){

   return ((radius+height)*2*3.13);
   }
   double comvol(){

   return (2*height*3.13);
   }

        void display(){
        cout <<"height of the cylinder: "<<height<<endl;
        cout <<"area of the cylinder: "<<comarea()<<endl;
        cout<<"volume of cylinder: "<<comvol()<<endl;

        }

};
int main(){
shape *s; // special: pointer object
 point p1(2,1);   circle r1(3,6,5);  cylinder c1(6,1,1,5); // child objects
 s = &p1; // s is now pointing to point object
 s->display(); // display point
 s = &r1; // s is now pointing to circle object
 s->display(); // display circle data
 s = &c1; // s is now pointing to cylinder object
 s->display(); // display cylinder data
return 0;
}
