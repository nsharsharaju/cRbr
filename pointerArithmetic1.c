//Valid Pointer Operations

//Assignment of pointer of the same type.
//Adding or subtracting a pointer and an int.
//Subtracting or camparing two pointer to members of the same array.
//Assigning or comparing to zero

int main () {
    int number=10;
    int* p;
    p = &number;
    printf("Address in p variable is %u\n",p);
    p=p+4;
    printf("After adding 4; Address in p variable is %u\n",p);
    return 1;
}