#include<iostream>
using namespace std;
main(){

char a;

cout<<"ENTER A NUM\n";
cin>>a;

switch (a)
{

case '1':
cout<<"*"<<endl;
break;

case '2':
cout<<"**"<<endl;
break;

case '3':
cout<<"***"<<endl;
break;

case '4':
cout<<"****"<<endl;
break;

case '5':
cout<<"*****"<<endl;
break;

case '6':
cout<<"******"<<endl;
break;

case '7':
cout<<"*******"<<endl;
break;

case '8':
cout<<"********"<<endl;
break;

case '9':
cout<<"*********"<<endl;
break;

case '10':
cout<<"**********"<<endl;
break;


default:
    cout<<"invalid number"<<endl;
}

return 0;
}

