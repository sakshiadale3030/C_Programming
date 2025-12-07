////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  FactorDifference
// Description :   Summation difference factor and non-factor
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          7/11/2025
//
////////////////////////////////////////////////////////////////////

int FactorDifference(int iNo)
{
    int iCnt = 0, iSum1 = 0 , iSum2 = 0;
    
    for(iCnt = 1 ; iCnt < iNo ;iCnt++)
    {
       if((iNo % iCnt) == 0) 
       {
          iSum1 = iSum1 + iCnt;
       }
       else
        {
           iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;

}
////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorDifference(iValue);

    printf("Summation difference (factor - non-factor): %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 12
// Output : -34
//
// Input2 : 10
// Output : -29
//
////////////////////////////////////////////////////////////////////

