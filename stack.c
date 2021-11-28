#include<stdio.h>
#include<stdlib.h>

typedef struct snode
{
    int num;
    struct snode *down;
}snode;

snode *top;

void push()
{
    printf("Enter element");
    int n;
    scanf("%d", &n);
    snode *t=malloc(sizeof(snode));
    t->num=n;

    if(top==NULL)
    {
        top=t;
        top->down=NULL;
    }
    else
    {
        t->down=top;
        top=t;
    }
}

void display()
{
    snode *prnt;
    prnt=top;
    while(prnt!=NULL)
    {
        printf("%d\n", prnt->num);
        prnt=prnt->down;
    }
}


void pop()
{
    snode *del;
    del=top;
    top=top->down;
    free(del);
}

int main()
{
    while(1)
    {
        int x;
        printf("Enter 1 to push, 2 to pop, 3 to view, 0 to exit:");
        scanf("%d", &x);

        if(x==0)
            break;
        else if(x==1)
            push();
        else if(x==2)
            pop();
        else if(x==3)
            display();
        else
            printf("Invalid input\n");
    }
}



