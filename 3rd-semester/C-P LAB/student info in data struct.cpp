#include<iostream>
using namespace std;

struct student{

string name;
string Regno ;
int semester;
string dept;


};
main(){
student x[4];

   for (int i=0; i<4; i++){
    cout<<"Enter name of the student:"<<endl;
    cin>>x[i].name;
    cout<<" Enter the registration number of the student :"<<endl;
    cin>>x[i].Regno;
    cout<<"Enter student's semester number :"<<endl;
    cin>>x[i].semester;
    cout<<"Enter student's department name :"<<endl;
    cin>>x[i].dept;

    cout<<"\n\n";
   }

   string y;
   cout<<"which student information you want ,Enter his reg.no :\n ";
        cin>>y;

        if (y==x[0].Regno){
            cout<<"Name = "<<x[0].name<<endl;
             cout<<"Semester no = "<<x[0].semester<<endl;
             cout<<"Department = "<<x[0].dept<<endl;
        }
         else if (y==x[1].Regno){
             cout<<"Name = "<<x[1].name<<endl;
             cout<<"Semester no = "<<x[1].semester<<endl;
             cout<<"Department = "<<x[1].dept<<endl;
          }

          else if (y==x[2].Regno){
            cout<<"Name = "<<x[2].name<<endl;
             cout<<"Semester no = "<<x[2].semester<<endl;
             cout<<"Department = "<<x[2].dept<<endl;
          }
         else if (y==x[3].Regno){
            cout<<"Name = "<<x[3].name<<endl;
             cout<<"Semester no = "<<x[3].semester<<endl;
             cout<<"Department = "<<x[3].dept<<endl;
}
    else {
        cout<<"No record found";
    }

}

