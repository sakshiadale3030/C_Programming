////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  Percentage
// Description :   Percentage of numbers
// Input :         Integer
// Output :        Float
// Author :        Sakshi Ashok Adale
// Date :          20/11/2025
//
////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtain)
{
    if(iTotal == 0)
    {
        return 0.0;
    }

    return ((float)iObtain / (float)iTotal)* 100;
}
////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Enter the total number : ");
    scanf("%d",&iValue1);

    printf("Enter the obtained number : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f\n",fRet);
    

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 1000    Input2 : 745    Output : 74.5000
// Input1 : 0       Input2 : 500    Output : 0
// Input1 : 1000    Input2 : 0      Output : 0
// Input1 : 50      Input2 : 70     Output : 140.00
// Input1 : 0       Input2 : 0      Output : 0
//
////////////////////////////////////////////////////////////////////

