#include<iostream>
using namespace std;

main(){

int mycount=1;
int mytable;

cout<<"Enter table number :";
cin>>mytable;

cout<<"Table of "<<mytable<<" is\n";
while( mycount<11)

{


    cout<<mytable<<"*"<<mycount<<"="<< mytable*mycount<<endl;
    mycount++;

}

return 0;



}
