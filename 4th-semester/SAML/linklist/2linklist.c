#include <stdio.h>

#include <stdlib.h>

#include <string.h>



struct stats

{

    int age;

    char name[25];

    char lastn[25];

    struct stats *next;

};



void fill_structure(struct stats *s);

struct stats *create(void);



int main()

{

    struct stats *first;

    struct stats *current;

    struct stats *neu;

    int x = 5;

    char name[25];

    char lastn[25];

    int answr;



    printf("What do you wish to do?\n");

    printf("Search a name or Add a new member's data?\n");

    printf("Please answer '0' for searching or '1' for adding");

    scanf("%d", answr);


if( answr == 1 )

{

    //create first structure

    first = create();

    current = first;



    for(x=0; x<3; x++)

    {

        if(x==0)

        {

            first = create();

            current = first;

        }

        else
045
        {
046
            neu = create();
047
            current->next = neu;
048
            current = neu;
049
        }
050
        fill_structure(current);
051
    }
052
    current->next = NULL;
053

054
    current = first; //reset the list
055

056
    while(current)
057
    {
058
        printf("Age %d, name %s and last name %s", current->age, current->name, current->lastn);
059
        current = current->next; //so it doesnt run forever
060
    }
061
}
062
else

{

    printf("Searching function in development");

}


    return(0);
}


//fill a structure

void fill_structure(struct stats *s)

{

    printf("Insert Age: \n");

    scanf("%d", &s->age);

    printf("Insert Name: \n");

    scanf("%s", s->name);

    printf("Insert Last Name: ");

    scanf("%s", s->lastn);

    s->next = NULL;

}



//search name in list

struct stats *search_in_list(char* lastn)

{

    struct stats *head;

    struct stats *neu = head;

    struct stats *tmp = NULL;





    printf("\n Searching the list for last name [%s]\n", *lastn);



    while(neu != NULL) // searching loop

    {

        if( strcmp(neu->lastn, lastn) )

        {

            printf("last name is %s", *lastn);

            break;

        }

        else

        {
102
            tmp = neu;
103
            neu = neu->next;
104
        }
105
    }
106
    return neu;
107
}
108

109

110

111
//allocate storage for one new structure
112
struct stats *create(void)
113
{
114
    struct stats *baby;
115

116
    baby = (struct stats *)malloc(sizeof(struct stats));
117
    if( baby == NULL)
118
    {
119
        puts("Memory error");
120
        exit(1);
121
    }
122
    return(baby);
123
};
