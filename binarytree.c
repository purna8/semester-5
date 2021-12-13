#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int num;
    struct node *left, *right;
}node;

node* create()
{
    int x;
    node* new=malloc(sizeof(node));
    printf("Enter value (-1 for leaf node)");
    scanf("%d", &x);

    if(x==-1)
    {
        return NULL;
    }
    else
    {
        new->num=x;
        
        printf("Enter left child:");
        new->left=create();

        printf("Enter right child:");
        new->right=create();

        return new;
    }
}

int main()
{
    node *root=create();
}


