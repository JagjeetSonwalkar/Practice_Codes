// Display the String using for loop and get string from user .

#include<stdio.h>

void DisplayString (char *cName)
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
    hello hi
    Entered String is :
    hello hi
   
    Enter the String :
    yellow is colour
    Entered String is :
    yellow is colour
 
    Enter the String :
    Ipl is best tournment of circket
    Entered String is :
    Ipl is best tournment of circket

*/