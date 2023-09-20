#include<stdio.h>
void var_auto();
void var_reg();
void main(){

int c=3;
printf("auto storage of \nc = %d ",c);
var_auto();
var_reg();

}
var_auto(){

int c=4;
printf("\nc= %d ",c);
}
void var_reg(){

register int c=5;
printf("\nregister storage of c= %d ",c);
}
