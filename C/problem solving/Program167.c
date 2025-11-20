// Display the Count  of NON captical caharacter in the String and get string from user .

#include<stdio.h>

int CountNonCaptialChar (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr >= 'a' && *cPtr <= 'z')
        {
            iCount++ ;
        }
        cPtr++ ;
    }

    return iCount ;
}

int main()
{
    char cString[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cString);

    iRet = CountNonCaptialChar(cString);

    printf("Count of NON Captial character of String is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    Apple
    Count of NON Captial character of String is : 4

    
    Enter string :
    Sky is blue
    Count of NON Captial character of String is : 8

    
    Enter string :
    TOSS THE COIN
    Count of NON Captial character of String is : 0

    
    Enter string :
    head or tail
    Count of NON Captial character of String is : 10

*/