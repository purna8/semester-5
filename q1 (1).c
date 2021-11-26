#include<stdio.h>
#include<string.h>

void reverse(char *str1)  
{
    int i, n, temp;  
    n = strlen(str1);
    for(i=0; i<n/2; i++)  
    {
        temp = str1[i];
        str1[i] = str1[n-i-1];
        str1[n-i-1] = temp;  
    }  
}  
      
int main()  
{  
    char str[30];
    printf ("Enter a word: ");  
    scanf("%s", str); 
    printf ("Before: %s \n", str);  
    reverse(str);  
    printf ("After: %s\n", str);  
}  