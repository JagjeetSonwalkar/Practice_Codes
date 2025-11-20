// Get the String from user and Dislay Count of Non Captial character of String. (Recursion)

#include<stdio.h>

int StrLen(char *cString)
{
    static int iLenght = 0 ;

    if(*cString != '\0')
    {
        if(*cString >= 'a' && *cString <= 'z')
        {
            iLenght++;
        }
        cString++;

        StrLen(cString);
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

    printf("Count of Non Captial character of String is %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    String is ...
    Count of Non Captial character of String is 7

    
    Enter the String :
    MI is IPL Team.
    Count of Non Captial character of String is 5

   
    Enter the String :
    TIGER is not animal !
    Count of Non Captial character of String is 11

    
    Enter the String :
    Apple Is Round.
    Count of Non Captial character of String is 9

*/