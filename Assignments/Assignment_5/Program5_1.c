////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckEvenOdd
// Description :   Check the number is even or odd 
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          7/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("It is Even number...");
    }
    else
    {
        printf("It is not Even number...");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 12
// Output : 5   7   8   9   10  11
//
// Input2 : 13 
// Output : 2   3   4   5   6   7   8   9   10  11
//
// Input3 : 10
// Output : 3   4   6   7   8   9
//
////////////////////////////////////////////////////////////////////


