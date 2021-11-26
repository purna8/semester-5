#include<stdio.h>
int add(int p1, int q1)
{
    int sum;
    sum = p1+q1;
    return sum;
}
int main(int argc, char *argv[])
{
    //basics:
    printf("Hello\n");
    int m=90;
    int p = 50;
    int t= m+p;
    float prcnt = (t/200.0)*100.0;
    printf("maths marks is %d, physics %d, total is %d, percentage is %.2f\n", m, p, t, prcnt);

    int a, b;
    a=1;
    b=2;
    printf("%d\n", a);
    printf("%d\n", ++a);
    printf("%d\n", a++);
    printf("%d\n", a);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", (a>b)||(a==b));
    printf("%d\n", (a<b)&&(a==b));

    char grade;
    grade=(prcnt>90)? 'A':'B';
    printf("%c\n", grade);

    
    //loops:
    int q = 1;
    while(q<4)
    {
        printf("Inside while loop\n");
        q=q+1;
    }
    do {
        printf("in do while\n");
    }while (q<4);
    for(int x=5;x>=3;x=x-1)
    {
        printf("in for loop\n");
    }
    printf("\n");
    printf("Starting goto\n");
    int y=1;
    goto term;
    printf("This will not be printed");
    term:
    printf("Inside goto\n");
    y=y+1;
    if(y<4)
    {
        goto term;
    }
    printf("no more coming back\n");

    int n=9;
    switch(n)
    {
        case 1:
        printf("no execution");
        break;
        case 9:
        printf("Will be executed, not putting break\n");
        case 3:
        printf("wrong case but now putting break\n");
        break;
        default:
        printf("default");
    }
    printf("\n");
    printf("\n");


    //arrays:
    int ar[5];
    ar[0] = 0;
    ar[1] =1;
    ar[2]=2;
    ar[3]=3;
    ar[4]=4;
    int ar1[3] = {10, 20, 30};
    int ar2[]= {11, 12, 13};
    float ar3[]= {1.1, 2.2};
    char ar4[] = {'p', 'u', 'r','n','a'};
    char ar5[]= "purna";
    printf("Size of dict-style array is %d and size of double quotes array is %d\n", sizeof(ar4), sizeof(ar5));
    for(int i=0; i<=2;i++)
    {
        printf("%d\t", ar1[i]);
    }
    printf("\n");
    printf("\n");


    //user defined functions:
    int s;
    s = add(2, 3);
    printf("%d\n", s);
    printf("\n");
    printf("\n");

    //pointers:
    int num=50;
    int *po;
    po=&num;
    printf("Address of var num of value %d is %x\n", num, po);
    printf("Printing address using direct ampersand withut pointer: %p\n", &num);
    printf("Dereferencing above pointer with * gives: %d, and dereferencing the ampersand of the var gives: %d\n", *po, *&num);
    printf("Converting hexadecimal to decimal using long int: %lu\n", &num);
    printf("But, on using int, will give garbage value: %d\n", &num);
    char c = 'A';
    printf("Same for characters: %p\n", &c);
    int parr[]= {1, 2, 3, 4};
    printf("This syntax %p, and the syntax for address of the first element %p, mean the same....address of fourth element: %p\n", parr, &parr[0], &parr[3]);
    int *par = &parr[2];
    printf("Pointer for array: %x\n", par);
    printf("This pointer starts from the 3rd element, and pointer[+i] means ith element after 3rd element, and pointer[-i] means ith element before, or towards left of 3rd element\n");
    for(int j=0; j<7; j++)
        printf("\n%d\t%d", j, par[-j]);
    printf("\nAbove gives garbage for last few elements as towards left of pointer index -2 in the array, nothing exists\n");
    printf("\n\n");

    //Command line functions:
    if(argc<2)
        printf("No operands found except file name\n");
    else
    {
        printf("One or more character arrays have been given after a.out, printing them:\n");
        for(int k=0; k<argc; k++)
            printf("%d\t%s\n", k, argv[k]);
    }
    printf("\n**********THE END**********\n\n");
}