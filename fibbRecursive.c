#include<stdio.h>

int fibb(int n) {
    if(n<2)
        return n;
    else
        return fibb(n-1) + fibb(n-2);
}

int main() {
    int input,output;
    printf("Enter the number: ");
    scanf("%d",&input);
    output = fibb(input);
    printf("Output: %d\n",output);
    return 1;
}