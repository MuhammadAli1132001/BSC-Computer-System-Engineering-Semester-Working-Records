#include<iostream>
using namespace std;
class pointer {

int l;
int *ptr;

public:

    pointer(int n){

    l=n;
    ptr=new int [n];


    for (int a=0; a<n; a++)
        ptr [a]=10*a;
    }

    void determine(char *ptr){
            cout<<ptr;
            }
    ~pointer(){
    delete ptr;
    }
};
main(){
pointer r (4);
r.determine(char *s );
return 0;

}
