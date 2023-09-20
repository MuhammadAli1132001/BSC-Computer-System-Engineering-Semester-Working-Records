#include<stdio.h>
void ref(int *a,int *b);
int max(int c,int f);
int main(){

int a,v,c,d,value;
printf("enter two num for reference function:\n");
scanf("%d",&a);
scanf("%d",&v);
printf("\nthe before swap numbers are:  %d  %d ",a ,v);

ref(&a,&v);
printf("\nthe after swap numbers are:  %d  %d ",v,a);
printf("\nenter two num for value function:\n");
scanf("%d",&c);
scanf("%d",&d);
value=max(c,d);
printf("\nmaximum value is %d" ,value);

}

void ref(int *e,int *t){
  int *temp;
  temp=&e;
  e=&t;
  t=&temp;

}
int max(int c,int f){
int res;
if(c<f){
        res=f;
}
else if(c>f){
        res=c;
}
return res;
}
