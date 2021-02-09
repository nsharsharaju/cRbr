#include<stdio.h>

void incrementNumber(int* ptr) 
{
    (*ptr)++;
}

int main()
{
    int *p,i = 20;
    p = &i;
    incrementNumber(p);
    printf("%d", *p);
    return 0;
}