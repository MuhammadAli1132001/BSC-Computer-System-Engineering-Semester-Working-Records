#include <stdio.h>
#include<stdlib.h>
int main(){
int a[20],i,j,n,temp,k;
printf("enter no of array ");
scanf("%d",&n);

for (i=0;i<n; i++){
   scanf("%d",&a[i]);
}

printf(" array is \n");

for (j=0;j<n; j++){
   printf("%d \t",a[j]);

}

printf("\n bubble sorted array is \n");
for (j=0;j<n-1; j++){

for (k=0;k<n-1; k++){

if (a[k]>a[k+1]){
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
}
}
}
for (k=0;k<n; k++){
   printf("%d \t",a[k]);

}
return 0;
}
