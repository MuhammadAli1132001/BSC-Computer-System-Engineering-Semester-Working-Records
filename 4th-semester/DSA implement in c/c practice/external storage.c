#include<stdio.h>
int c=3;
void var_ext();
void main(){

var_ext();
c=c+2;
printf("\nexternal storage of c = %d ",c);
var_ext();

}
void var_ext(){

c=c+3;
printf("\nexternal storage of c= %d ",c);
}
