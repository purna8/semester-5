#include<stdio.h>
#include<stdlib.h>

typedef struct snode
{
    int num;
    struct snode *next;
}snode;

snode* push(snode *s)
{
    snode *name=NULL;
    while(1)
    {
        int n;
        printf("Enter a number:");
        scanf("%d", &n);
        if(n==0)
            break;
        
        snode *s1=malloc(sizeof(snode));

        if(s!=NULL)
        {
            s1->num=n;
            s1->next=s;
            s=s1;
        }
        else
        {
            s1->num=n;
            s1->next=NULL;
            s=s1;
        }
    }
    return s;
}

snode* pop(snode *s)
{
    printf("Enter element to pop:");
    int x;
    scanf("%d", &x);

    snode *s1=malloc(sizeof(snode));
    if(s->num==x)
    {
        s1=s->next;
        free(s);
        return s1;
    }
    else
    {
        s1=s;
        while(1)
        {
            snode *s2=malloc(sizeof(snode));
            s2=s1;
            s1=s1->next;
            if(s1->next==NULL&&s1->num!=x)
            {
                printf("Can't find input in stack\n");
                break;
            }
            else
            {
                if(s1->num!=x)
                {
                    continue;   
                }
                else
                {
                    
                    s2->next=s1->next;
                    free(s1);
                    break;
                }
            }
        }
    return s;
    }
}

int main()
{
    snode *name=NULL;
    
    while(1)
    {
        printf("Enter 1 to push elements, 2 to pop an element, 0 to exit:");
        int t;
        scanf("%d", &t);

        if(t==0)
            break;
        else if(t==1)
        {
            name=push(name);
            snode *prnt=name;
            while(1)
            {
                printf("%d\n", prnt->num);
                prnt=prnt->next;
                if(prnt->next==NULL)
                {
                    printf("%d\n", prnt->num);
                    break;
                }
            }
        }
        else if(t==2)
        {
            if(name==NULL)
            {
                printf("stack doesn't exist\n");
            }
            else
            {
                name=pop(name);
                snode *prnt=name;
                while(1)
                {
                    printf("%d\n", prnt->num);
                    prnt=prnt->next;
                    if(prnt->next==NULL)
                    {
                        printf("%d\n", prnt->num);
                        break;
                    }
                }
            }
            }
        else
        {
            printf("Invalid input\n");
        }
        }

}