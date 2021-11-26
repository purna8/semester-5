#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int n;
    struct node *next;
    struct node *prev;
}node;

int main(void)
{
    node *dll=NULL;

    while(1)
    {
        int num;
        printf("Enter a number:");
        scanf("%d", &num);
        if(num==0)
            break;
        
        node *no=malloc(sizeof(node));

        node *temp;

        if(dll==NULL)
        {
            no->n=num;
            no->next=NULL;
            no->prev=NULL;
            dll=no;
            temp=no;
        }
        else
        {
            no->n=num;
            no->next=NULL;
            no->prev=temp;
            temp->next=no;
            temp=no;
        }
    }

    node *prnt=dll;
    while(1)
    {
        printf("%d\n", prnt->n);
        prnt=prnt->next;
        if(prnt->next==NULL)
        {
            printf("%d\n", prnt->n);
            break;
        }
    }

    printf("\n");

    //EASILY PRINTING REVERSE:
    while(1)
    {
        printf("%d\n", prnt->n);
        prnt=prnt->prev;
        if(prnt->prev==NULL)
        {
            printf("%d\n", prnt->n);
            break;
        }
    }
}