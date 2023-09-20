#include<iostream>
using namespace std;

class data {
public:

string name[20];
string Regno[20];
string address[30];
float gpa[20];
int semester=2;
int fsc[20],matric[20],eata[20];


    void inter(){


      for( int i=1; i<21; i++)
{
name[1]="Muhammad ";name[2]="Muhammad waleed";name[3]="Wajid ullah ";name[4]="Sharik khalil ";name[5]="zubair khan ";
name[6]="Aamir abbrahim";name[7]="Talha khursed ";name[8]="Zain ul abidden";name[9]="Muhammad Hammad";name[10]="Muhammad Hasnain";
name[11]="Aammar Ahmed ";name[12]="Muhammad Yaseen ";name[13]="Syed shaaf banoire ";name[14]="Tiham khan ";name[15]="latif Ahmend ";
name[16]="Anees Ahmed ";name[17]="Muhammad uzair";name[18]="Muhammad Asim";name[19]="Muhammad Ali";name[20]="Majid ullah ";

}

        for (int i=1; i<21; i++){
         address[1]="Basher Abad peshawar" ;address[2]="Hayatabad peshawar" ;address[3]="Charsadda" ;address[4]="town peshawar" ;address[5]="sadar peshawar" ;
         address[6]="DI khan" ;address[7]="Swat " ;address[8]="Hayatabad peshawar" ;address[9]="Mansehra" ;address[10]="lakarhy peshawar" ;
         address[11]="charsadda" ;address[12]="Hangu";address[13]="Sadar peshawar" ;address[14]="Hayatabad peshawar" ;address[15]="DI khan" ;
         address[16]="carsadda" ;address[17]="Mansehra" ;address[18]="Fata" ;address[19]="Mathra peshawar" ;address[20]="Ring road peshwar" ;

    }

  for (int i=1; i<21; i++){
    gpa[1]=2.8;gpa[2]=2.3;gpa[3]=2.7;gpa[4]=1.9;gpa[5]=2.6;
    gpa[6]=2.5;gpa[7]=2.4;gpa[8]=1.9;gpa[9]=3.2;gpa[10]=3.01;
    gpa[11]=2.6;gpa[12]=2.5;gpa[13]=2.7;gpa[14]=1.8;gpa[15]=2.2;
    gpa[16]=2.1;gpa[17]=2.3;gpa[18]=3.1;gpa[19]=2.1;gpa[20]=2.6;

}


      for(int i=0; i<21; i++){
     eata[1]=401 ;eata[2]=417 ;eata[3]=438 ;eata[4]=210 ;eata[5]=390 ;eata[6]=504 ;eata[7]=396 ;eata[8]=209 ;eata[9]=456;eata[10]=356 ;
     eata[11]=345 ;eata[12]= 309;eata[13]=400 ;eata[14]=195 ;eata[15]=315;eata[16]=290;eata[17]=336;eata[18]=407 ;eata[19]=390 ;eata[20]= 388;
     }

     for (int i=1; i<21; i++){
        fsc[1]= 870;fsc[2]= 910;fsc[3]=970 ;fsc[4]=900 ;fsc[5]=940 ;fsc[6]=980 ;fsc[7]=856 ;fsc[8]=840;fsc[9]=920 ;fsc[10]= 875;
        fsc[11]=901 ;fsc[12]=890 ;fsc[13]=891 ;fsc[14]=837 ;fsc[15]=920 ;fsc[16]=829 ;fsc[17]=890 ;fsc[18]=914 ;fsc[19]=831 ;fsc[20]=856 ;
    }
     for(int i=0; i<21; i++){
        matric[1]=911 ;matric[2]=980 ;matric[3]=990 ;matric[4]=1001 ;matric[5]=998 ;matric[6]=970 ;matric[7]=894 ;matric[8]=863 ;matric[9]=1012;matric[10]=912 ;
        matric[11]=942;matric[12]=980 ;matric[13]=976;matric[14]=901;matric[15]=899;matric[16]=877;matric[17]=987;matric[18]=1003;matric[19]= 750;matric[20]= 856;
     }






}

      void outer(){
          int semester=2;
          int i;
          cout<<"    ---------------------------------------\n     YOU CAN CHECK YOUR DETAIL RIGHT NO!\n    ---------------------------------------"<<endl;
          cout<<"\tEnter your registration number: ";
            cin>>Regno[i];
            cout<<"\n\n";


         if (Regno[i]=="19pwcse1763")  {

           cout<<"name of the student is "<<name[1]<<endl;
           cout<<"Address of the student is "<<address[1]<<endl;
           cout<<"Gpa of the student is "<<gpa[1]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[1]<<endl;
           cout<<"Matric marks of the student is "<<matric[1]<<endl;
           cout<<"Eata marks of the student is "<<eata[1]<<endl;
         }
         else if (Regno[i]=="19pwcse1786")  {

           cout<<"name of the student is "<<name[2]<<endl;
           cout<<"Gpa of the student is "<<gpa[2]<<endl;
           cout<<"Address of the student is "<<address[2]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[2]<<endl;
           cout<<"Matric marks of the student is "<<matric[2]<<endl;
           cout<<"Eata marks of the student is "<<eata[2]<<endl;
          }
       else  if (Regno[i]=="19pwcse1759")  {

           cout<<"name of the student is "<<name[3]<<endl;
           cout<<"Address of the student is "<<address[3]<<endl;
           cout<<"Gpa of the student is "<<gpa[3]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[3]<<endl;
           cout<<"Matric marks of the student is "<<matric[3]<<endl;
           cout<<"Eata marks of the student is "<<eata[3]<<endl;
}

       else  if (Regno[i]=="19pwcse1812")  {

           cout<<"name of the student is "<<name[4]<<endl;
           cout<<"Address of the student is "<<address[4]<<endl;
           cout<<"Gpa of the student is "<<gpa[4]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[4]<<endl;
           cout<<"Matric marks of the student is "<<matric[4]<<endl;
           cout<<"Eata marks of the student is "<<eata[4]<<endl;
}

        else if (Regno[i]=="19pwcse1797")  {

           cout<<"name of the student is "<<name[5]<<endl;
           cout<<"Address of the student is "<<address[5]<<endl;
           cout<<"Gpa of the student is "<<gpa[5]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[5]<<endl;
           cout<<"Matric marks of the student is "<<matric[5]<<endl;
           cout<<"Eata marks of the student is "<<eata[5]<<endl;
}
      else if (Regno[i]=="19pwcse1747")  {

           cout<<"name of the student is "<<name[6]<<endl;
           cout<<"Address of the student is "<<address[6]<<endl;
           cout<<"Gpa of the student is "<<gpa[6]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[6]<<endl;
           cout<<"Matric marks of the student is "<<matric[6]<<endl;
           cout<<"Eata marks of the student is "<<eata[6]<<endl;
}
 else if (Regno[i]=="19pwcse1792")  {

           cout<<"name of the student is "<<name[7]<<endl;
           cout<<"Address of the student is "<<address[7]<<endl;
           cout<<"Gpa of the student is "<<gpa[7]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[7]<<endl;
           cout<<"Matric marks of the student is "<<matric[7]<<endl;
           cout<<"Eata marks of the student is "<<eata[7]<<endl;
}
 else if (Regno[i]=="19pwcse1796")  {

           cout<<"name of the student is "<<name[8]<<endl;
           cout<<"Address of the student is "<<address[8]<<endl;
           cout<<"Gpa of the student is "<<gpa[8]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[8]<<endl;
           cout<<"Matric marks of the student is "<<matric[8]<<endl;
           cout<<"Eata marks of the student is "<<eata[8]<<endl;
}
   else if (Regno[i]=="19pwcse1778")  {

           cout<<"name of the student is "<<name[9]<<endl;
           cout<<"Address of the student is "<<address[9]<<endl;
           cout<<"Gpa of the student is "<<gpa[9]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[9]<<endl;
           cout<<"Matric marks of the student is "<<matric[9]<<endl;
           cout<<"Eata marks of the student is "<<eata[9]<<endl;
}
 else if (Regno[i]=="19pwcse1781")  {

           cout<<"name of the student is "<<name[10]<<endl;
           cout<<"Address of the student is "<<address[10]<<endl;
           cout<<"Gpa of the student is "<<gpa[10]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[10]<<endl;
           cout<<"Matric marks of the student is "<<matric[10]<<endl;
           cout<<"Eata marks of the student is "<<eata[10]<<endl;
}
     else if (Regno[i]=="19pwcse1755")  {

           cout<<"name of the student is "<<name[11]<<endl;
           cout<<"Address of the student is "<<address[11]<<endl;
           cout<<"Gpa of the student is "<<gpa[11]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[11]<<endl;
           cout<<"Matric marks of the student is "<<matric[11]<<endl;
           cout<<"Eata marks of the student is "<<eata[11]<<endl;
}
   else if (Regno[i]=="19pwcse1776")  {

           cout<<"name of the student is "<<name[12]<<endl;
           cout<<"Address of the student is "<<address[12]<<endl;
           cout<<"Gpa of the student is "<<gpa[12]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[12]<<endl;
           cout<<"Matric marks of the student is "<<matric[12]<<endl;
           cout<<"Eata marks of the student is "<<eata[12]<<endl;
}
 else if (Regno[i]=="19pwcse1788")  {

           cout<<"name of the student is "<<name[13]<<endl;
           cout<<"Address of the student is "<<address[13]<<endl;
           cout<<"Gpa of the student is "<<gpa[13]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[13]<<endl;
           cout<<"Matric marks of the student is "<<matric[13]<<endl;
           cout<<"Eata marks of the student is "<<eata[13]<<endl;
}
else  if (Regno[i]=="19pwcse1810")  {

           cout<<"name of the student is "<<name[14]<<endl;
           cout<<"Address of the student is "<<address[14]<<endl;
           cout<<"Gpa of the student is "<<gpa[14]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[14]<<endl;
           cout<<"Matric marks of the student is "<<matric[14]<<endl;
           cout<<"Eata marks of the student is "<<eata[14]<<endl;
}
 else if (Regno[i]=="19pwcse1790")  {

           cout<<"name of the student is "<<name[15]<<endl;
           cout<<"Address of the student is "<<address[15]<<endl;
           cout<<"Gpa of the student is "<<gpa[15]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[15]<<endl;
           cout<<"Matric marks of the student is "<<matric[15]<<endl;
           cout<<"Eata marks of the student is "<<eata[15]<<endl;
}
   else if (Regno[i]=="19pwcse1770")  {

           cout<<"name of the student is "<<name[16]<<endl;
           cout<<"Address of the student is "<<address[16]<<endl;
           cout<<"Gpa of the student is "<<gpa[16]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[16]<<endl;
           cout<<"Matric marks of the student is "<<matric[16]<<endl;
           cout<<"Eata marks of the student is "<<eata[16]<<endl;
}
 else if (Regno[i]=="19pwcse1761")  {

           cout<<"name of the student is "<<name[17]<<endl;
           cout<<"Address of the student is "<<address[17]<<endl;
           cout<<"Gpa of the student is "<<gpa[17]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[17]<<endl;
           cout<<"Matric marks of the student is "<<matric[17]<<endl;
           cout<<"Eata marks of the student is "<<eata[17]<<endl;
}

  else if (Regno[i]=="19pwcse1811")  {

           cout<<"name of the student is "<<name[18]<<endl;
           cout<<"Address of the student is "<<address[18]<<endl;
           cout<<"Gpa of the student is "<<gpa[18]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[18]<<endl;
           cout<<"Matric marks of the student is "<<matric[18]<<endl;
           cout<<"Eata marks of the student is "<<eata[18]<<endl;
}

 else if (Regno[i]=="19pwcse1801")  {

           cout<<"name of the student is "<<name[19]<<endl;
           cout<<"Address of the student is "<<address[19]<<endl;
           cout<<"Gpa of the student is "<<gpa[19]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[19]<<endl;
           cout<<"Matric marks of the student is "<<matric[19]<<endl;
           cout<<"Eata marks of the student is "<<eata[19]<<endl;
}

 else if (Regno[i]=="19pwcse1799")  {

           cout<<"name of the student is "<<name[20]<<endl;
           cout<<"Address of the student is "<<address[20]<<endl;
           cout<<"Gpa of the student is "<<gpa[20]<<endl;
           cout<<"Semester number of the student is "<<semester<<endl;
           cout<<"Fsc marks of the student is "<<fsc[20]<<endl;
           cout<<"Matric marks of the student is "<<matric[20]<<endl;
           cout<<"Eata marks of the student is "<<eata[20]<<endl;
}


else {
    cout<<"NO RECORD FOUND :";
}



}
};

main ()
{

data informtion;
informtion.inter();
informtion.outer();
}


