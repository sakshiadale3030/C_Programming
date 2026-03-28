////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Name :  OddFactorial
// Description :   Print the even factorial
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          23/11/2025
//
////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }    
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 5
// Output : 15
//
// Input2 : -5
// Output : 15
//
// Input3 : 45
// Output : 891396255
//
////////////////////////////////////////////////////////////////////


