#include<stdio.h>

int printNumber(int n) {
    if(n>0)
        printNumber(n-1);
    printf("%d ",n);
    return 1;
}

int main(){
    int input;
    printf("Please enter a input: ");
    scanf("%d",&input);
    printNumber(input);
    return 1;
}