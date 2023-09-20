#include<iostream>
using namespace std;
main(){

int x[5];
int keyvalue;


 cout<<"ENTER 5 element array"<<endl;

    for(int a=0; a<5; a++)
        {
         cin>>x[a];
    }


        cout<<"\n Enter a key number :";
        cin>>keyvalue;


        for (int i=0; i<5; i++)

        if (x[i]==keyvalue)
    {

    cout<<"\n\nIndex number of array with campare to key value is ["<<i<<"]"<<endl;


    }

    else {}
         cout<<" \n Wrong key number enter................";





        return 0;

}
