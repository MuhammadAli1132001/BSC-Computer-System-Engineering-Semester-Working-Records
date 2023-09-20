#include<iostream>
using namespace std;
int triplebyvalue(int x);
int triplebyreference(int *y );
int main()
{
    int count=2,*fptr;
 cout<<"triple by value is ...";
    cout<<triplebyvalue(count)<<endl;
cout<<"triple by reference is ...";
    cout<<triplebyreference(&count)<<endl;

}
int triplebyvalue(int x)
{
    return x*3;
}
int triplebyreference(int *var)
{
  return *(var)*3;
    }
