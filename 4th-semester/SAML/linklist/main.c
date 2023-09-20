#include <stdio.h>
#include <stdlib.h>

typedef struct list{
   char data;
  struct list* next;

}list;
typedef enum{ false=0, true}boolean;
void add(list*,char*);
boolean search(list*, char *);


{
    char name;
   struct list *head,*p,*temp;

    printf("salam enter names: ");
            printf("enter head name of link list ");
            scanf("%d",&name);
            temp=(struct list*)malloc(sizeof ( struct list));
            temp->data=name;
            temp->next=NULL;
            head=temp;
            p=head;

    for (int i=0; i<3; i++){
        printf("enter next name of link list ");
       scanf("%d",&name);
       temp=(struct list*)malloc(sizeof ( struct list));
            temp->data=name;
            temp->next=NULL;
            p->next=temp;
            p=p->next;
    }
    p=head;
    while( p=!NULL){

        printf("%d",p->data);
        p=p->next;
    }
    return 0;
}

void add(list* next,char* name){


}
boolean search(list* a, char * b){


}
