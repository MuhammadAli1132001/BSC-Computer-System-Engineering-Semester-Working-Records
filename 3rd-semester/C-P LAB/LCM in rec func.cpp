#include <iostream>
using namespace std;
int lcm(int x, int y) ;

int main(){

int x,y;
cout<<"Enter two numbers\n";
cin>>x>>y;
cout<<"LCM of "<<x<<" and "<<y<<" is equal to "<<lcm(x,y)<<endl;

   return 0;
}

int lcm(int x, int y){
    static int m=0;
    m=m+y;
    if((m%x==0)&& (m%y==0))
    {
        return m;
    }
 else{
    return lcm(x,y);
 }

}
