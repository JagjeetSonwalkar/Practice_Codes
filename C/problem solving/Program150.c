// Display the Full Name using loop and get the Full Name form user using Character specifier .

#include<stdio.h>

int main()
{
    char cName[50] ;
    char *cPtr = cName ;

    printf("Enter the Full Name : \n");
    scanf("%[^'\n']s",&cName);

    while(*cPtr != '\0')
    {
        printf("%c",*cPtr);
        cPtr++;
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the Full Name :
    Rohit kumar
    Rohit kumar

    Enter the Full Name :
    Karan Yadav
    Karan Yadav

    Enter the Full Name :
    Neha sharma
    Neha sharma
*/