// Display the String using for loop and get string from user .

#include<stdio.h>

void DisplayString (char cName[])
{
    int iCnt = 0 ;

    for(iCnt = 0 ; cName[iCnt] != '\0' ; iCnt++)
    {
        printf("%c",cName[iCnt]);
    }
}

int main()
{
    char cName[30] ;
    printf("Enter the String : \n");
    scanf("%[^'\n']s",cName);

    printf("Entered String is : \n");
    DisplayString(cName);

    return 0 ;
}

/*
    OUTPUT

    Enter the String :
    Heloo boy
    Entered String is :
    Heloo boy
    
    Enter the String :
    type correct spelling of hello
    Entered String is :
    type correct spelling of hello
 
    Enter the String :
    okay
    Entered String is :
    okay

*/