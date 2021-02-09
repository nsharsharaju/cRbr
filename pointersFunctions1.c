#include<stdio.h>
void swap(int *, int *);

int main()
{
    int a = 10;
    int b = 20;
    printf("a = %d & b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d & b = %d\n",a,b);
    return 1;
}

void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}