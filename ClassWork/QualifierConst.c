#include<stdio.h>
 
int main()
{
    int iNo1 = 10;
    const int iNO2 = 20;
 
    //Below lines generates errors
    iNo1++;   //iNo1 = iNo1 + 1;
    iNo2++;   //iNo2 = iNo2 + 1;  //error
    iNo2 = 30;      //error

    return 0;
}

