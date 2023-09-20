#include<iostream>
using namespace std;

long factorial(int);

main(){

 int number;

cout<<"Enter a positive  number "<<endl;
 cin>>number;
cout<<number<<"! ="<<factorial(number);
return 0;
}
      long factorial(int n)
       {
        int c;
       int result=1;
       for( int c=1; c<=n; c++)

          result =result*c;

       return result;
       }
