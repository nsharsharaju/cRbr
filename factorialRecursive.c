#include<stdio.h>

long int factorial(int n) {
    if(n<2) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main ()
{
    int input;
    long int output;
    printf("Enter the number to find it's factorial: ");
    scanf("%d",&input);
    output = factorial(input);
    printf("The factorial is: %ld\n",output);
    return 1;
}
