#include <iostream>
using namespace std;
int fabo(int x) {
   if((x==1)||(x==0)) {
      return(x);

}else{

   return (fabo(x-1)+fabo(x-2));
  }
}

int main(){

int x;
cout<<"Enter term of fabonacii series\n";
cin>>x;
cout<<"Fabonacii series is :\n";
for(int i=0; i<x; i++){
   cout<<" "<< fabo(i);
}

   return 0;
}

