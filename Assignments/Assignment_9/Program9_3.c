////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Name :  EvenFactorial
// Description :   Print the even factorial
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          23/11/2025
//
////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 14
// Output : 645120
//
// Input2 : 67
// Output : 0
//
// Input3 : 45
// Output : 0
//
// Input4 : -14
// Output : 645120
//
////////////////////////////////////////////////////////////////////


