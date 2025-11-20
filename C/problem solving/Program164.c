// Display the Count  of space in the String and get string from user .

#include<stdio.h>

int CountSpace (char cPtr[])
{
    int iCnt = 0 , iCount = 0 ;

    for(iCnt = 0 ; cPtr[iCnt] != '\0' ; iCnt++)
    {
        if(cPtr[iCnt] == ' ')
        {
            iCount++ ;
        }
    }
    return iCount ;

}

int main()
{
    char cString[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",cString);

    iRet = CountSpace(cString);

    printf("Count of Space in String is : %d\n",iRet);

    return 0;
}

/*
    OUTPUT

    Enter string :
    hi jack were are you
    Count of Space in String is : 4

    
    Enter string :
    My name is jack
    Count of Space in String is : 3

    
    Enter string :
    Sky is blue , grass is green , water is blue
    Count of Space in String is : 10

    
    Enter string :
    cartoon
    Count of Space in String is : 0

*/