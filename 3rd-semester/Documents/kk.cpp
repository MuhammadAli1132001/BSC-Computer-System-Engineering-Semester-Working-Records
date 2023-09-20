#include<iostream>

using namespace std;

int main()
{
    int i,j,n,loc,temp,mini,a[5]={3,5,7,4,2};
    //cout<<"Enter the number of elements:";
    //cin>>n;
    //cout<<"\nEnter the elements\n";

   // for(i=0;i<5;i++)
   // {
     //   cin>>a[i];
   // }

    for(i=0;i<5;i++)
    {
        mini=a[i];
        loc=i;
        for(j=i+1;j<5;j++)
        {
            if(mini>a[j])
            {
                mini=a[j];
                loc=j;
            }
        }

        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }

    cout<<"\nSorted list is as follows\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
