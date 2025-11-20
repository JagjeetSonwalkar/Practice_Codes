// Display the Count  of caharacter 'm' of String and get string from user .

#include<stdio.h>

int CountCharacter (char *cPtr , char ch)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == ch)
        {
            iCount++;
        }
        cPtr++;
    }
    return iCount ;
}

int main()
{
    char cString[50] ;
    int iRet = 0 ;
    char cSearch = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    printf("Enter the charcter which you want to count its occurance : \n");
    scanf("%c",&cSearch);              // Can't accept the input (issue with input)

    iRet = CountCharacter(cString,cSearch);

    printf("%d\t",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Sky is blue.
    String is : Sky is blue.
    Enter the charcter which you want to count its occurance :
    0 

*/