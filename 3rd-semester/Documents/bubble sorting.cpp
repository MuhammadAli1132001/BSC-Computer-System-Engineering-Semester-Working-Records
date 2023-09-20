#include<iostream>
using namespace std;
main()
{
    int my[100];
    int mini,local,n,temp;
     cout<<"Enter no of element in array"<<endl;
     cin>>n;
     cout<<"Enter array: "<<endl;
    for (int i=0; i<n; i++){
         cin>>my[i];
    }
    for (int i=0; i<n; i++)
    {
    for(int j=i+1; j<n; j++)
{

       if (my[i]< my[j])         //condition for descending order.
                              //use > instead of < for ascending order.
    {
        temp=my[i];
        my[i]=my[j];
        my[j]=temp;
    }
 }
}
    cout<<"BUBBLE SORTED AYYAY IS : \n"<<endl;
    for(int i=0; i<n; i++)
    {
       cout <<my[i]<<"\t";
    }

return 0;
}
