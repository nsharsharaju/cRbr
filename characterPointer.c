#include<stdio.h>

void myStrcpy(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}

int myStrcmp(char *s, char *t)
{
    for(;*s == *t;s++,t++)
    {
        if(*s == '\0')
            return 0;
    }
    return *s - *t;
}

int main()
{
    char a[] = "harsha";
    char b[] = "anjani";
    char c[] = "aavi";
    char d[] = "ravi";
    int e;
    myStrcpy(a,b);
    e = myStrcmp(c,d);
    printf("%s\n",a);
    printf("%d\n",e);
    return 1;
}