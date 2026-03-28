////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Name :  FactorialDiff
// Description :   Print the even factorial
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          23/11/2025
//
////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }   
        else
        {
            iOddFact = iOddFact * iCnt;
        } 
    }
    return (iEvenFact - iOddFact);
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

    iRet = FactorialDiff(iValue);

    printf(" Factorial Difference is %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 12
// Output : 35685
//
// Input2 : -13
// Output : -89055
//
// Input3 : 14
// Output : 509985
//
////////////////////////////////////////////////////////////////////


