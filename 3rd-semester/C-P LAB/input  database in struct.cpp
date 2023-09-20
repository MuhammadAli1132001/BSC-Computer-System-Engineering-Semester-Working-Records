#include<iostream>
using namespace std;

struct invetigation{

string  man;
int money;
int salery;

};

main(){
invetigation x[3] ;

cout<<"enter database to the structure :"<<endl;

 for(int i=0; i<3; i++){

        cout<<"enter the name of the man "<<endl;
     cin>>x[i].man;
     cout<<"enter the money  "<<endl;
    cin>>x[i].money;
    cout<<"enter the salery "<<endl;
    cin>>x[i].salery;

    cout<<"\n\n";
 }

 for (int i=0; i<3; i++){

    cout<<"the name of man is "<<x[i].man<<endl;
    cout<<"the man have money "<<x[i].money<<endl;
    cout<<"the salery of the man is "<<x[i].salery<<endl;
    cout<<"\n\n";
 }

}


/*the name of man is obaid
the man have money 22
the salery of the man is 5566


the name of man is ali
the man have money 2222
the salery of the man is 56767


the name of man is osama
the man have money 8000
//the salery of the man is 6000*/

