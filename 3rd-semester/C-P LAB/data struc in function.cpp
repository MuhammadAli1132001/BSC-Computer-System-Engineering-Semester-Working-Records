#include<iostream>
using namespace std;

struct investigation{

string  man;
int money;
int salery;

};
void structure(investigation);
main(){
investigation x[3] ;

cout<<"enter database to the structure :"<<endl;

 for(int i=0; i<3; i++){

        cout<<"enter the name of the man "<<endl;
     getline(cin,x[i].man);
     cout<<"enter the money  "<<endl;
    cin>>x[i].money;
    cout<<"enter the salery "<<endl;
    cin>>x[i].salery;

    cout<<"\n\n";
    }

    for (int i=0; i<3; i++){

    structure(x[i]);
    }
 }
void structure(investigation x){


    cout<<"the name of man is "<<x.man<<endl;
    cout<<"the man have money "<<x.money<<endl;
    cout<<"the salery of the man is "<<x.salery<<endl;
    cout<<"\n\n";
 }




