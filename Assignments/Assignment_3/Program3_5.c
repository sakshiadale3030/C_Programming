////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Fuction Nmae :  CheckVowel
// Description :   Check the vowel or not
// Input :         Character
// Output :        Character
// Author :        Sakshi Ashok Adale
// Date :          7/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckVowel(char cValue)
{

    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel...\n");
    }
    else
    {
        printf("It is not vowel...\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Testcases successfully handaled by the application
//
// Input1 : E     Output : TRUE
// 
// Input2 : d     Output : FALSE
//
////////////////////////////////////////////////////////////////////

