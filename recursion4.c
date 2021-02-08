#include<stdio.h>

int a(int n) {
    if(n>0)
        a(n-1);
    printf("%d ",n);
    if(n>0)
        a(n-1);
    return 1;
}

int main() {
    int input;
    printf("Please enter a number: ");
    scanf("%d",&input);
    a(input);
    printf("\n");
    return 1;
}