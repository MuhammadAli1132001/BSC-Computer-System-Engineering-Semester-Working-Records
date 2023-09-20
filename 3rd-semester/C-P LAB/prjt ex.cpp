#include<iostream>
using namespace std;

class data {
public:

string name[20];
string Regno;
string address[20];
float gpa[20];
int semester[20];
int fsc[20];
int matric[20];
int eata[20];

string get;

    void inter(){



      for( int i=1; i<21; i++)
{
name[1]="Muhammad ";name[2]="Muhammad waleed";name[3]="Wajid ullah ";name[4]="Sharik khalil ";name[5]="zubair khan ";
name[6]="Aamir abbrahim";name[7]="Talha khursed ";name[8]="Zain ul abidden";name[9]="Muhammad Hammad";name[10]="Muhammad Hasnain";
name[11]="Aammar Ahmed ";name[12]="Muhammad Yaseen ";name[13]="Syed shaaf banoire ";name[14]="Tiham khan ";name[15]="latif Ahmend ";
name[16]="Anees Ahmed ";name[17]="Muhammad uzair";name[18]="Muhammad Asim";name[19]="Muhammad Ali";name[20]="Majid ullah ";

}

       for (int i=1; i<21; i++){
    gpa[1]=2.8;gpa[2]=2.3;gpa[3]=2.7;gpa[4]=1.9;gpa[5]=2.6;
    gpa[6]=2.5;gpa[7]=2.4;gpa[8]=1.9;gpa[9]=3.2;gpa[10]=3.01;
    gpa[11]=2.6;gpa[12]=2.5;gpa[13]=2.7;gpa[14]=1.8;gpa[15]=2.2;
    gpa[16]=2.1;gpa[17]=2.3;gpa[18]=3.1;gpa[19]=2.1;gpa[20]=2.6;

}

      for (int i=1; i<21; i++){
        fsc[1]= 870;fsc[2]= 910;fsc[3]=970 ;fsc[4]=900 ;fsc[5]=940 ;fsc[6]=980 ;fsc[7]=856 ;fsc[8]=840;fsc[9]=920 ;fsc[10]= 875;
        fsc[11]=901 ;fsc[12]=890 ;fsc[13]=891 ;fsc[14]=837 ;fsc[15]=920 ;fsc[16]=829 ;fsc[17]=890 ;fsc[18]=914 ;fsc[19]=831 ;fsc[20]=856 ;
    }

      for(int i=0; i<21; i++){
     eata[1]=401 ;eata[2]=417 ;eata[3]=438 ;eata[4]=210 ;eata[5]=390 ;eata[6]=504 ;eata[7]=396 ;eata[8]=209 ;eata[9]=456;eata[10]=356 ;
     eata[11]=345 ;eata[12]= 309;eata[13]=400 ;eata[14]=195 ;eata[15]=315;eata[16]=290;eata[17]=336;eata[18]=407 ;eata[19]=390 ;eata[20]= 388;
     }

      for(int i=0; i<21; i++){
        matric[1]=911 ;matric[2]=980 ;matric[3]=990 ;matric[4]=1001 ;matric[5]=998 ;matric[6]=970 ;matric[7]=894 ;matric[8]=863 ;matric[9]=1012;matric[10]=912 ;
        matric[11]=942;matric[12]=980 ;matric[13]=976;matric[14]=901;matric[15]=899;matric[16]=877;matric[17]=987;matric[18]=1003;matric[19]= 750;matric[20]= 856;
     }

}

      void outer(){
    cout<<"Enter your registration number "<<endl;
        cin>>Regno;
      get =Regno;



          if (get=="19pwcse1763")
            {
           cout<<"name of the student is "<<name[17]<<endl;
           cout<<"Gpa of the student is "<<gpa[17]<<endl;

           cout<<"Fsc marks of the student is "<<fsc[17]<<endl;
           cout<<"Matric marks of the student is "<<matric[17]<<endl;
           cout<<"Eata marks of the student is "<<eata[17]<<endl;


    }

     else if(get=="19pwcse1812"){
           cout<<"name of the student is "<<name[2]<<endl;
           cout<<"Gpa of the student is "<<gpa[2]<<endl;
           cout<<"Address of the student is "<<address[2]<<endl;
           cout<<"Semester number of the student is "<<semester[2]<<endl;
           cout<<"Fsc marks of the student is "<<fsc[2]<<endl;
           cout<<"Matric marks of the student is "<<matric[2]<<endl;
           cout<<"Eata marks of the student is "<<eata[2]<<endl;

    }
    else if(get=="19pwcse1801"){
        cout<<"name of the student is "<<name[19];
        cout<<"Gpa of the student is "<<gpa[19];
        cout<<"Address of the student is "<<address[19]<<endl;
        cout<<"Semester number of the student is "<<semester[19]<<endl;
    }




      }

};

main ()
{

data form;
form.inter();
form.outer();
}


