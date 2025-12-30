////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  FindLargest
// Description :   Find the largest number
// Input :         Integer
// Output :        Integer
// Author :        Sakshi Ashok Adale
// Date :          7/11/2025
//
////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1 ,int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3 )
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }

}
////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter the three number : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = FindLargest(iValue1,iValue2,iValue3);

    printf("Largest number is :%d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 12 13 14
// Output :	Largest number is : 14
//
// Input2 : 10 5 7
// Output : Largest number is : 10
//
// Input3 : -5 -4 -1
// Output : Largest number is : -1
//
////////////////////////////////////////////////////////////////////
