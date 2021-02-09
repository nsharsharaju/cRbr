#include<stdio.h>

void swap(int,int);

int main() {
    int a = 10, b = 20;
    swap(a,b);
    printf("a = %d and b = %d\n",a,b);
}

void swap(int x,int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d\n",x,y);
}