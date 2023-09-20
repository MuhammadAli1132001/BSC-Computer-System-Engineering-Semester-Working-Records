#include<stdlib.h>
int main(){

int t=4;
int *p;
p=&t;
printf("t = %d",&t);
printf("\n&p = %d",&*p);
printf("\n*p = %d",*p);
return 0;
}
