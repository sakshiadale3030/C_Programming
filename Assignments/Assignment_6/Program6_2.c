////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckGreater
// Description :   Check the number is greater than 100
// Input :         Integer
// Output :        Boolean
// Author :        Sakshi Ashok Adale
// Date :          20/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 12      Input2 : 0      Input : 2     Output : 24
// Input1 : 5       Input2 : 4      Input : 7     Output : 140
// Input1 : 5       Input2 : 0      Input : 7      Output : 35
// Input1 : 5       Input2 : 0      Input : 0      Output : 5
// Input1 : 0       Input2 : 0      Input : 0      Output : 0
//
////////////////////////////////////////////////////////////////////


