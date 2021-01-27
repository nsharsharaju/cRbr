#include<stdio.h>

int main() {
    int x = 10;

    int *p;

    p = &x;

    printf("Address of p variable: %x\n", &x);

    printf("Address stored in p variable: %x\n", p);

    printf("Value of *p variable: %d\n", *p);

    return 1;
}
