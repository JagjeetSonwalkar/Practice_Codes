// Get the String from user and Dislay lenght of String. 

#include<stdio.h>

int StrLen(char *cString)
{
    int iLenght = 0 ;

    while(*cString != '\0')
    {
        iLenght++;
        cString++;
    }
    return iLenght ;
}

int main()
{
    char cStr[30];
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cStr);

    iRet = StrLen(cStr);

    printf("Lenght of String is %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Sky is green !
    Lenght of String is 14

    
    Enter the String :
    Not , Sky is blue.
    Lenght of String is 18


    Enter the String :
    moon is black today.
    Lenght of String is 20

*/