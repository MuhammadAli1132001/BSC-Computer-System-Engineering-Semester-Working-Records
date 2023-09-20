#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list{
   char data[50];
  struct list* next;

}list;
typedef enum{ false=0, true}boolean;
void add(list*,char*);
boolean search(list*, char *);


 int main()
{
    struct list* first;
    struct list *second;
    struct list *third;


   first=(struct list*)malloc(sizeof(struct list));
   second=(struct list*)malloc(sizeof(struct list));
   third=(struct list*)malloc(sizeof(struct list));

   first->data[50]="li";
   first->next=second;


   second->data[50]="khan";
   second->next=second;


   third->data[50]="Muhammad";
   third->next=NULL;
add(third,first);
}
void add(list* next,char* newnam){
     struct list* newname ;

   newname=(struct list*)malloc(sizeof(struct list));

    newname->data[50]="ammad";
   newname->next=NULL;
while( newnam=!NULL){

        printf("%d element",newnam->data);
        newnam=newnam->next;
    }

}
boolean search(list* a, char * b){
         return true=1;false=0;

}

