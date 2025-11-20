// Display the Count  of caharacter 'm' of String and get string from user .

#include<stdio.h>

int CountCharacter (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == 'm')
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

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    iRet = CountCharacter(cString);

    printf("%d\t",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    I am Jack.
    String is : I am Jack.
    1

    Enter the String :
    India is an good country.
    String is : India is an good country.
    0

    Enter the String :
    mango is sweet and man is good and moon is round
    String is : mango is sweet and man is good and moon is round
    3

*/