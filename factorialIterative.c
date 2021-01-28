#include<stdio.h>

int main() 
{
    int input;
    long int output = 1;

    printf("Please enter number: ");
    scanf("%d",&input);

    while(input) {
        output*=input;
        input--;
    }
    printf("Output: %ld\n",output);
    return 1;
}