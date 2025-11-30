////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  Divide
// Description :   It is used to perform Division
// Input :         Integer,Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          20/10/2025
//
////////////////////////////////////////////////////////////////////

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0 )
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);


    iRet = Divide(iValue1 , iValue2);

    printf("Division is %d",iRet);
    
    
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 15      Input2 : 5      Output : 3
// Input1 : 20      Input2 : 5      Output : 4
// Input1 : -15     Input2 : -5     Output : 3
// Input1 : -15     Input2 : 5      Output : -3
// Input1 : 10      Input2 : 0      Output : -1
//
////////////////////////////////////////////////////////////////////