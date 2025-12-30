////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckEqual
// Description :   Check the number is greater than 100
// Input :         Integer
// Output :        Boolean
// Author :        Sakshi Ashok Adale
// Date :          20/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
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


