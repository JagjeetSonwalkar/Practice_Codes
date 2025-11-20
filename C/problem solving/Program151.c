// Display the Full Name using loop and get the Full Name form user using Character specifier .

#include<stdio.h>

void DisplayString(char *cPtr)
{
    while(*cPtr != '\0')
    {
        printf("%c",*cPtr);
        cPtr++;
    }
}

int main()
{
    char cName[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cName);

    printf("String is : \n");
    DisplayString(cName);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Apple is a fruit
    String is :
    Apple is a fruit
   
    Enter the String :
    My name is a name
    String is :
    My name is a name
    
    Enter the String :
    Good Morning
    String is :
    Good Morning
    
    Enter the String :
    2+2 is 4
    String is :
    2+2 is 4

*/