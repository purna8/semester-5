#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int n;
    struct node *next;
}node;

int main(void)
{
    node *cll=NULL;

    while(1)
    {
        int num;
        printf("Enter a number:");
        scanf("%d", &num);
        if(num==0)
            break;
        
        node *no=malloc(sizeof(node));

        node *temp;

        if(cll==NULL)
        {
            no->n=num;
            no->next=no;
            cll=no;
            temp=no;
        }
        else
        {
            no->n=num;
            no->next=cll;
            temp->next=no;
            temp=no;
        }
    }

    node *prnt=cll;
    while(1)
    {
        printf("%d\n", prnt->n);
        prnt=prnt->next;
        if(prnt->next==cll)
        {
            printf("%d\n", prnt->n);
            break;
        }
    }
}
