#include<iostream>
using namespace std;

struct point{

int height ;
int width;

};

main (){

point x;

cout<<"Enter width of rectangle :"<<endl;
cin>>x.width;
cout<<"Enter height of rectangle :"<<endl;
cin>>x.height;

cout<<"\nThe width of rectangle is :"<<x.width<<endl;
cout<<"The height of rectangle is :"<<x.height<<endl;
cout<<"\nRectangle is ....\n"<<endl;
for (int i=1; i<=x.height; i++)
  {
          for (int i=1; i<=x.width; i++){
            cout<<" * ";
          }

cout<<endl;
}




}
