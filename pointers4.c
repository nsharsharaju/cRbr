#include<stdio.h>

int main() {
    int* pc,c;
    c = 20;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n", c);

    pc = &c;
    printf("Address in pointer pc: %p\n", pc);
    printf("--Content-- of pointer pc: %d\n", *pc);

    c = 10;

    printf("Address in pointer pc: %p\n", pc);
    printf("--Content-- of pointer pc: %d\n", *pc);

    *pc = 3;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n", c);

    return 1;
}