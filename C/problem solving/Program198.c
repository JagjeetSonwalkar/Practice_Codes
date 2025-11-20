// Accept the String from user and Display.

#include<stdio.h>

void DisplayString (char *cPtr)
{
    while(*cPtr != '\0')
    {
        printf("%c",*cPtr);
        cPtr++;
    }
}

int main()
{
    char cString[50] ;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",&cString);

    printf("String is : \n");
    DisplayString(cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is red.
    String is :
    Apple is red.
 
    Enter the String :
    Sky is blue
    String is :
    Sky is blue
   
    Enter the String :
    IPL is cricket game.
    String is :
    IPL is cricket game.

*/