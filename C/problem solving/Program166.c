// Display the Count  of captical caharacter in the String and get string from user .

#include<stdio.h>

int CountCaptialChar (char cPtr[])
{
    int iCnt = 0 ,iCount = 0 ;

    while(cPtr[iCnt] != '\0')
    {
        if(cPtr[iCnt] >= 65 && cPtr[iCnt] <= 91)
        {
            iCount++ ;
        }
        iCnt++;
    }

    return iCount ;

}

int main()
{
    char cString[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cString);

    iRet = CountCaptialChar(cString);

    printf("Count of Captial character of String is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    Apple
    Count of Captial character of String is : 1

    
    Enter string :
    APPLE
    Count of Captial character of String is : 5

    
    Enter string :
    apple
    Count of Captial character of String is : 0

    
    Enter string :
    Sky is Blue But sun is NOT rising.
    Count of Captial character of String is : 6

*/