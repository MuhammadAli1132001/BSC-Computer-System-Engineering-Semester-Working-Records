#include<stdio.h>
#include<stdlib.h>

int main(){

int *ptr,sum=0,n;
printf("enter array size :");
scanf("%d",&n);

ptr=(int*)malloc(n *(sizeof(int)));
  if (ptr==NULL){
    printf("memory not allocated ");
    exit(0);
  }
printf("enter an array :");
for (int i=0; i<n; ++i){

    scanf("%d",ptr+i);

}
for (int i=0; i<n; i++){
    sum=sum+ *(ptr+i);

}
  printf("sum of allocated array is %d ",sum);
  free(ptr);
  return 0;
}
