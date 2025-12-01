////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckEven
// Description :   It is used to check whether number is even or odd
// Input :         Integer
// Output :        boolean
// Author :        Sakshi Ashok Adale
// Date :          20/10/2025
//
//////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
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
/////////////////////////////////////////////////////////////////////////////
//
// Entry point Function for the application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    
    bRet = CheckEven(iValue);

    if( bRet == true)
    {
       printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }


    return 0;
}

///////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : 5
// Output : The number is Odd
//
// Input2 : 2
// Output : The number is Even
//
// Input3 : 3
// Output : The number is Odd
//
////////////////////////////////////////////////////////////////////
