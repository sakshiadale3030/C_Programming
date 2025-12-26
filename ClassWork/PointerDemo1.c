#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf(" Size of iptr : %lu\n", sizeof(iPtr)); //8 becoz of window there is 4
    printf(" Size of cptr : %lu\n", sizeof(cPtr));  //8

    return 0;
}