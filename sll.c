#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int n;
    struct node *next;
}node;

//FUNCTION FOR REVERSING LINKED LIST
node* reverse(node *rev)
{
    node *c = rev;
    node *p=NULL;
    node *ne=NULL;

    while(c!=NULL)
    {
        ne=c->next;
        c->next=p;
        p=c;
        c=ne;
    }
    rev=p;
    return rev;
}

//GENERATING LINKED LIST:
int main(void)
{
    node *sll=NULL;

    while(1)
    {
        int num;
        printf("Enter a number:");
        scanf("%d", &num);
        if(num==0)
            break;
        
        node *no=malloc(sizeof(node));

        node *temp;

        if(sll==NULL)
        {
            no->n=num;
            no->next=NULL;
            sll=no;
            temp=no;
        }
        else
        {
            no->n=num;
            no->next=NULL;
            temp->next=no;
            temp=no;
        }
    }

    node *prnt=sll;
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

    node *rprnt;
    rprnt=reverse(sll);

    while(1)
    {
        printf("%d\n", rprnt->n);
        rprnt=rprnt->next;
        if(rprnt->next==NULL)
        {
            printf("%d\n", rprnt->n);
            break;
        }
    }
}