#include<stdio.h>
#include<string.h>

int hash(char arr[])
{
    int i;
    if(arr[0]=='a')
        i=3;
    else if(arr[0]=='s'&&arr[1]=='n')
        i=2;
    else if(arr[0]=='p')
        i=5;
    else if(arr[0]=='b')
        i=4;
    else if(arr[0]=='s'&&arr[1]=='a')
        i=1;
    else
        i=0;
    
    return i;
}


int main()
{
    char names[5][6]={
    "aditi", 
    "sneha",
    "purna", 
    "banhi", 
    "sayan"
    };

    int nodes[5];

    for(int i=0; i<5; i++)
    {
        nodes[i]=hash(names[i]);
    }

    for(int j=0; j<5; j++)
        printf("%d\n", nodes[j]);
}