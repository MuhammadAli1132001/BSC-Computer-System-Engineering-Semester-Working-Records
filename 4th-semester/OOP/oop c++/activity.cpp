#include<iostream>
using namespace std;

class point {
protected:
int x,y;
public:
    point();
    point(int a,int n);
    void set_point(int x,int y);
    void show();
};
point::point(){
x=0;
y=0;
}
point::point(int a,int n)
{
this->x=a;
this->y=n;
}

void point::set_point(int x,int y){
this->x=x;
this->y=y;
}

void point::show(){
cout<<"point is ("<<x<<","<<y<<")"<<endl;
}

class circle:point{
    protected:
int radius;
public:
circle(int x,point p);
circle(float x,float y,float p);

float get_circum();

};
circle::circle(int x,point p)

{
    this->radius=x;
}
circle::circle(float r,float x,float y):point(x,y)
{
    this->radius=x;
}
float circle::get_circum(){
    return(2*3.14*radius);

}

class cylinder:point{

protected:
    int radius;
    float height;
public:
    cylinder();
    cylinder(int r,float h);
    float get_area();
    float get_vol();
};

cylinder::cylinder(int r,float x):point(x,y)
{
    this->radius=r;
    this->height=x;
}

float cylinder::get_area(){
         float add;
         add=radius+height;

        return (2*add*3.14*radius);
}

float cylinder::get_vol(){

     return (2*3.14*radius*radius*height);

}
main(){
    point p(2,4);
    p.show();
circle c(2,5.6,3);
cylinder c1(4,6.6);
cout<<"\n\ncircumferences of the circle "<<c.get_circum();
cout<<"\n\narea of the cylinder "<<c1.get_area();
cout<<"\n\nvolume of the cylinder "<<c1.get_vol();
return 0;
}

