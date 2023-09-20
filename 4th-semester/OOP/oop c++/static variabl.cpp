#include<iostream>

using namespace std;

void st (){

static int s=0;
s++;
cout<<s<<endl;
}

main(){
st();
st();
}
