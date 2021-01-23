//Register Storage Class

//The access time of the register variables is faster than the automatic variables
//The register keyword is used for the variables which should be stored in the CPU register.
//We can store pointers into the register, i.e., a register can store the address of a variable.
#include<stdio.h>

int main()
{
    //variable a is allocated memory in the CPU register.
    // The initial default value of a is register
    register int a;
    printf("%d",a);
    return 1;
}

// int main()
// {
//     register int a = 0;
//     //Below statement will give a compile time error since we cannot access the
//     //address of a register variable.
//     printf("%u",&a);
// }