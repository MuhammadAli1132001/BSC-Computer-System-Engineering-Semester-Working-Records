#include<iostream>

   using namespace std;

main()
{
  char a;


  cout<<"ENTER AN ALPHABET TO CHECK WHEATHER IT IS CONSONANT OR VOWEL:\n_";
  cin>>a;


    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='u'||a=='U'||a=='o'||a=='O')
{

     cout<<a<<" is a vowel";
}

    else{

        cout<<a<<" is a consonant";
    }


  return 0;

}











