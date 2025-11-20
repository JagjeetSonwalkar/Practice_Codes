// Display the Count of 'a' occured in String and accept the string from user.

#include<stdio.h>

int CountOfCharacter (char *cPtr)
{
    int iCount = 0 ;

    while(*cPtr != '\0')
    {
        if(*cPtr == 'a')
        {
            iCount++;
        }
        cPtr++;
    }
    return iCount ;
}

int main()
{
    char cString[50];
    int iRet = 0 ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    iRet = CountOfCharacter (cString);

    printf("\n");

    printf("In String no. of Occurance of character 'a' is : %d\n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    apple is red

    In String no. of Occurance of character 'a' is : 1


    Enter the String :
    sky is blue

    In String no. of Occurance of character 'a' is : 0


    Enter the String :
    what is your name

    In String no. of Occurance of character 'a' is : 2

*/