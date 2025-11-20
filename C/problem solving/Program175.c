// Display the Count  of caharacter and get the character from the user of String and get string from user .

#include<stdio.h>

int CountCharacter (char *cPtr , char cFound)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == cFound)
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
    char cSearch = '\0' ;
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    printf("String is : %s \n",cString);

    printf("Enter the character that you want to count From String : \n");
    scanf(" %c",&cSearch);      //  issue with input solved         //  flushing (space before %c)

    iRet = CountCharacter(cString,cSearch);

    printf("No. of Occurence is :%d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    sky is blue
    String is : sky is blue
    Enter the character that you want to count From String :
    s
    No. of Occurence is :2

    
    Enter the String :
    men is gold and women is sliver.
    String is : men is gold and women is sliver.
    Enter the character that you want to count From String :
    m
    No. of Occurence is :2


    Enter the String :
    cat , cap , candel , call .
    String is : cat , cap , candel , call .
    Enter the character that you want to count From String :
    c
    No. of Occurence is :4

*/