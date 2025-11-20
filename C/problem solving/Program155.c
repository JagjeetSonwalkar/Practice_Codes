// Display the Count of Non Captial character occured in String and accept the string from user.

#include<stdio.h>

int CountOfCharacter (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr >= 'a' && *cPtr <= 'z')
        {
            iCount++;
        }
        cPtr++;
    }
    return iCount ;
}

int main()
{
    char cString[50];
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    iRet = CountOfCharacter (cString);

    printf("In String no. of NON CAPTIAL character is : %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Sky is blue
    In String no. of NON CAPTIAL character is : 8


    Enter the String :
    Land is Green
    In String no. of NON CAPTIAL character is : 9


    Enter the String :
    APPLE IS SWEET
    In String no. of NON CAPTIAL character is : 0


    Enter the String :
    banana is long
    In String no. of NON CAPTIAL character is : 12

*/