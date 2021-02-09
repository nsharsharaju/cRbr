#include<stdio.h>

int main() {
    int marks[4];
    printf("Enter 4 Integers:\n");
    //taking input and storing it in an array
    for(int i = 0; i< 4; ++i) {
        scanf("%d",&marks[i]);
    }
    printf("Displaying integers:\n");
    //printing elements of an array
    for(int i = 0; i < 4; ++i) {
        printf("%d\n", marks[i]);
    }
    return 1;
}