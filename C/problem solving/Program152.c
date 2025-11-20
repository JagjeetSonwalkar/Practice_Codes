// Display the length of String and accept the string from user.

#include<stdio.h>

int LengthOfString (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0' )
    {
        printf("%c",*cPtr);
        cPtr++;

        iCount++;
    }

    return iCount ;
}

int main()
{
    char cString[50] ;
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    iRet = LengthOfString(cString) ;

    printf("\n");

    printf("Lenght od String is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is sweet fruit.
    Apple is sweet fruit.
    Lenght od String is : 21


    Enter the String :
    What is your Name ?
    What is your Name ?
    Lenght od String is : 19


    Enter the String :
    Sky is blue.
    Sky is blue.
    Lenght od String is : 12

*/