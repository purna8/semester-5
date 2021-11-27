#include <stdio.h>
#include <stdlib.h>


typedef struct qnode
{
    int data;
    struct qnode *up;
}qnode;

qnode *top;
qnode *down;

void push_Q()
{
    qnode *ptr;
    ptr = malloc(sizeof(qnode));
    if (ptr == NULL)
    {
        printf("Error msg\n");
        return;
    }
    else
    {
        int num;
        printf("\nEnter value?");
        scanf("%d", &num);
        ptr->data = num;
        if (down == NULL)
        {
            down = ptr;
            top = ptr;
            down->up = NULL;
            top->up = NULL;
        }
        else
        {
            top->up = ptr;
            top = ptr;
            top->up = NULL;
        }
    }
}
void delete_Q()
{
    qnode *ptr;
    if (down == NULL)
    {
        printf("error msg\n");
        return;
    }
    else
    {
        ptr = down;
        down = down->up;
        free(ptr);
    }
}
void display_Q()
{
    qnode *ptr;
    ptr = down;
    if (down == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->up;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {

        printf("\n1.Push to Queue \n2.Delete from Queue \n3.Display the Queue\n4.Exit\n");
        printf("Enter your choice ?");
        scanf("%d", &choice);
        if (choice == 1)
        {
            push_Q();
        }

        else if (choice == 2)
        {
            delete_Q();
        }
        else if (choice == 3)
        {
            display_Q();
        }
        else
        {
            break;
        }
    }
}


