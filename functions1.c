#include<stdio.h>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int a = 100, b = 200;
    int maximum = max(100,200);
    printf("Maximum is %d\n ",maximum);
    return 0;
}

//In C only call by Value is there. Please remember 
//point.