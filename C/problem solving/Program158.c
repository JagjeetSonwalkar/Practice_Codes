// Display the String and get string from user .

#include<stdio.h>

void DisplayString (char *cPtr)
{
    while(*cPtr != '\0')
    {
        printf("Entered String is : %c\n",*cPtr);
        cPtr++;
    }

}

int main()
{
    char cString[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",cString);

    DisplayString(cString);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    my name is jack
    Entered String is : m
    Entered String is : y
    Entered String is :
    Entered String is : n
    Entered String is : a
    Entered String is : m
    Entered String is : e
    Entered String is :
    Entered String is : i
    Entered String is : s
    Entered String is :
    Entered String is : j
    Entered String is : a
    Entered String is : c
    Entered String is : k


    Enter the String :
    okay its nice
    Entered String is : o
    Entered String is : k
    Entered String is : a
    Entered String is : y
    Entered String is :
    Entered String is : i
    Entered String is : t
    Entered String is : s
    Entered String is :
    Entered String is : n
    Entered String is : i
    Entered String is : c
    Entered String is : e

*/