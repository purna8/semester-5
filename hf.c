#include<stdio.h>

//HASHED FUNCTION

int Hash(char Arg[])
{
    char Arr[]={'A', 'B', 'C'};
    char ch=Arg[0];
    int i;
    for(i=0; i<26; i++)
    {
        if(ch==Arr[i])
            break;
    }
    printf("%c\n", Arr[i]);
    return i;
}

int main(void)
{
    char word[20];
    printf("Enter a word starting with A, B or C:");
    scanf("%s", word);

    Hash(word);
}
