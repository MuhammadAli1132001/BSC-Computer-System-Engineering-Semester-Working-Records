#include<iostream>
using namespace std;

struct movies{

string title ;
int year;

};
main(){
movies x[3];

   for (int i=0; i<3; i++){
    cout<<"Enter movie name :"<<endl;
    cin>>x[i].title;
    cout<<" Enter the year of the movie :"<<endl;
    cin>>x[i].year;

    cout<<"\n\n";
   }

          for (int i=0 ; i<3; i++){
             cout<<"the name of the movie is "<<x[i].title<<endl;
            cout<<"the year of the movie is "<<x[i].year<<endl;

          }
          }
