#include<stdio.h>
#include<stdlib.h>


//LINKED LISTS

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    node *numbers = NULL;
    int num;
    while(1)
    {
        printf("Enter a number data for next node, 0 if you want linked list to end:");
        scanf("%d", &num);
        if(num==0)
        {
            break;
        }
        
        node *n=malloc(sizeof(node));
        n->next=NULL;
        n->number=num;

        node *temp;
        if(numbers==NULL)
        {
            numbers=n;
            temp=n;
        }
        else
        {
            temp->next=n;
            temp=n;
        }
    }

    node *ptr=numbers;
    while(1)
    {
        printf("%d\n", ptr->number);
        ptr=ptr->next;
        if(ptr->next==NULL)
        {
            printf("%d\n", ptr->number);
            break;
        }
    }
}



//DOUBLY LINKED LISTS:

/*typedef struct nnode
{
    int roll;
    struct nnode *prev;
    struct nnode *next;
}nnode;

int main(void)
{
    int rn;

    nnode *list = NULL;

    while(1)
    {
        printf("Enter roll number:");
        scanf("%d", &rn);
        if(rn==0)
        {
            break;
        }

        nnode *ne;
        nnode *pr;

        ne = malloc(sizeof(nnode));
        ne->roll=rn;
        ne->prev=NULL;
        ne->next=NULL;

        if(list==NULL)
        {
            list=ne;
            pr=ne;
        }
        else
        {
            pr->next=ne;
            ne->prev=pr;
            pr=ne;
        }
        }
    
    nnode *prnt= list;
    while(prnt->next!=NULL)
    {
        printf("%d\n", prnt->roll);
        prnt=prnt->next;
    }
    printf("%d\n", prnt->roll);
}*/


//CIRCULAR LINKED LISTS

/*typedef struct node
{
    int data;
    struct node *next;
}node;

int main(void)
{
    node *n1;
    node *cll=NULL;

    int num;
    while(1)
    {
        printf("Enter a number:");
        scanf("%d", &num);
        if(num==0)
            break;

        node *n=malloc(sizeof(node));
        n->data=num;
        n->next=NULL;

        if(cll==NULL)
        {
            cll=n;
            n->next=NULL;
            n1=n;
        }
        else
        {
            n1->next=n;
            n->next=cll;
            n1=n;
        }
    }
    node *ptr=cll;
    if(num==0)
    {
        while(1)
        {
            if(ptr->next!=cll)
            {
                printf("%d\n", ptr->data);
                ptr=ptr->next;
            }
            else
            {
                printf("%d\n", ptr->data);
                break;
            }
        }
    }
}*/
