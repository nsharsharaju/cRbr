//static variables can be only be initialized once
#include<stdio.h>

void sum()
{
    static int a = 10;
    static int b = 24;
    printf("%d %d ", a, b);
    a++;
    b++;
}

void main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        sum();
    }
}