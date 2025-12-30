////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  Multiply
// Description :   Multiply the three number
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          20/11/2025
//
////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 1;

    if(iNo1 != 0)
    {
        iResult *= iNo1;
    }
    if(iNo2 != 0)
    {
        iResult *= iNo2;
    }
    if(iNo3 != 0)
    {
        iResult *= iNo3; 
    }

    return iResult;
}
////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the three number : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    bRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);
    

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

