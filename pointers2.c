#include<stdio.h>

int main() {
    int* pc, c;
    c = 8;
    pc = &c;
    c = 2;
    printf("%d ",c);
    printf("%d", *pc);
    return 1;
}

