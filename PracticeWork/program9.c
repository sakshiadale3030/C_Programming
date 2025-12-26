/*
   START
      Accept number and store as no
      Divide no by 2
      If the remainder is 0
         then display as Even
      otherwise
         display as Odd
    STOP  

*/
////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckEvenOdd
// Description :   Check the even or odd
// Input :         Integer
// Output :        -
// Author :        Sakshi Ashok Adale
// Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);              //call by value

    return 0;
}