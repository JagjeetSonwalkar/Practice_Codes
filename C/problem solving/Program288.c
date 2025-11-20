// Get the String from user and Dislay Count of Captial character of String. 

#include<stdio.h>

int StrLen(char *cString)
{
    int iLenght = 0 ;

    while(*cString != '\0')
    {
        if(*cString >= 'A' && *cString <= 'Z')
        {
            iLenght++;
        }
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

    printf("Count of Captial character of String is %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is round.
    Count of Captial character of String is 1

  
    Enter the String :
    Apple Is Round.
    Count of Captial character of String is 3

    
    Enter the String :
    Tiger is not animal !
    Count of Captial character of String is 1

   
    Enter the String :
    TIGER is not animal !
    Count of Captial character of String is 5

*/