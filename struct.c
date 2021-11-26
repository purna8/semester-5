#include<stdio.h>

//renaming a dtype, here, int:
typedef int me;

//creating a new dtype:
struct complex
{
    float r;
    float i;
}

main()
{
    me x=5;
    /*me acts as int*/
    printf("%d\n\n", x);
    
    struct complex y;
    y.r= 2;
    y.i= 3.5;
    printf("Real part: %f, imaginary part: %f\n", y.r, y.i);
}