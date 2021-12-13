#include<stdio.h>
#include<string.h>

int main()
{
    char arr[5][6]={
    "purna", 
    "aditi", 
    "sneha", 
    "banhi", 
    "sayan"
    };

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    int x, y;
    char temp[6];

    for(x=0; x<4; x++)
    {
        for(y=x+1; y<5; y++)
        {
            if(strcmp(arr[x], arr[y])>0)
            {
                strcpy(temp, arr[x]);
                strcpy(arr[x], arr[y]);
                strcpy(arr[y], temp);
            }
        }
    }
    printf("\n");

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

}