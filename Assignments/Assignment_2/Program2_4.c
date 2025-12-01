///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  Display
// Description :   It is used to print first number in second number of times
// Input :         Integer,Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          20/10/2025
//
//////////////////////////////////////////////////////////////////////////////

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
    
    
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);


    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 5
// Output : 5   5   5   5   5
//
// Input2 : 3
// Output : 3   3   3
//
// Input3 : -4
// Output : 4   4   4   4
//
////////////////////////////////////////////////////////////////////
