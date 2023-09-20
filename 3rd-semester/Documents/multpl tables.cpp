#include<iostream>
using namespace std;

main(){

int mycount=1;
int mytable=1;


while( mycount<11)
{
       while(mytable<=10)

{

    cout<<mytable<<"*"<<mycount<<"="<< mytable*mycount<<endl;


     mycount++;
     mytable++;
     mycount=1;
     mytable=1;
     cout<<"................................../"<<endl;
}




}

return 0;



}
