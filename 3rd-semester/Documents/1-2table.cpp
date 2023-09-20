#include<iostream>
using namespace std;

int main()
{
    int myTable=0;
    int myCount=0;

    for (myTable=2;myTable<=10;myTable++)
    {
        for(myCount=1;myCount<=10;myCount++)
        {
            cout<<myTable<<"x"<<myCount<<"="<<myTable*myCount<<endl;
        }
        cout<<"=============================\n";
    }

    return 0;
}
