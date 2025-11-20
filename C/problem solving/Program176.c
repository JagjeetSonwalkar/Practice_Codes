// Check the caharacter is present or not in string and get the character from the user of String and get string from user .

#include<stdio.h>
#include<stdbool.h>

int CheckCharacter (char *cPtr , char cFound)
{
    bool bFlag = false ;
    while(*cPtr != '\0')
    {
        if(*cPtr == cFound)
        {
            bFlag = true ;
            break ;
        }
        cPtr++;
    }
    return bFlag ;
}

int main()
{
    char cString[50] ;
    char cSearch = '\0' ;
    bool bRet = false ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    printf("Enter the character that you want to search From String : \n");
    scanf(" %c",&cSearch);      //  issue with input solved         //  flushing (space before %c)

    bRet = CheckCharacter(cString,cSearch);

    if(bRet == true)
    {
        printf("Character is present .\n");
    }
    else
    {
        printf("Character is NOT present !!! \n");
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is sweet.
    String is : Apple is sweet.
    Enter the character that you want to search From String :
    a
    Character is NOT present !!!


    Enter the String :
    Apple is sweet.
    String is : Apple is sweet.
    Enter the character that you want to search From String :
    s
    Character is present .

*/