#include<iostream>
using namespace std;
int myadd(int ,int);



main()
{

    int x=2;
    int y=1;

 int myadd(int x,int y);

    cout<<"sum ="<<myadd( x,y)<<endl;
    return 0;

}

int myadd(int x, int y){

 return x+y;
}
