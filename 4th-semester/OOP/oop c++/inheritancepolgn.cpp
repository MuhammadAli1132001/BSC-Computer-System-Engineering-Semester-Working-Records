#include <iostream>
using namespace std;
class Polygon {
protected:
int height;
int length;
public:
void set_values(int a, int b){
height = a;
length = b;
}
};
class Rectangle: public Polygon{
public:
double area() {
    cout << "area of Rectangle: "<<height*length;

}
};
class Triangle: public Polygon{
public:
double area(){
    cout << "\nArea of Triangle: " << height*length/2;

}
};
int main(){
Rectangle r;
Triangle t;
r.set_values(9, 20);
r.area() ;
t.set_values(10, 7);
t.area() ;
return 0;
}
