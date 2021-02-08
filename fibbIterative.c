#include <stdio.h>

int fibb(int n)
{
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return x;
}

int main()
{
    int input, output;
    printf("Please enter a number: ");
    scanf("%d", &input);
    output = fibb(input);
    printf("%d\n", output);
    return 1;
}