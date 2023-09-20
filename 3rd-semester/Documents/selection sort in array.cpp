#include<iostream>
using namespace std;
main()
{
    int my[100];
    int mini,local,n;
     cout<<"Enter no of element in array"<<endl;
     cin>>n;
     cout<<"Enter array: "<<endl;
    for (int i=0; i<n; i++){
         cin>>my[i];
    }
    for (int i=0; i<n; i++)
    {
        mini=my[i];
        local=i;

    for(int j=i+1; j<n; j++)
{

       if (mini>my[j])
    {
        mini=my[j];
        local=j;
    }
}
        int temp=my[i];
         my[i]= my[local];
            my[local]=temp;

}
   cout<<"Sorted array is :\n\t ";
   for(int i=0; i<n; i++)
{
   cout<<my[i]<<" ";
}

        return 0;
}
