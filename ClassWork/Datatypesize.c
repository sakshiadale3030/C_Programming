#include<stdio.h>

int main()
{
   char cValue = 'S';
   int iValue = 11;
   float fValue = 90.78f;
   double dValue = 98.564323;
   
   printf("Size of Charater is : %lu\n",sizeof(cValue));
   printf("Size of Integer is : %lu\n",sizeof(iValue));
   printf("Size of float is : %lu\n",sizeof(fValue));
   printf("Size of double is : %lu\n",sizeof(dValue));


    return 0;
}