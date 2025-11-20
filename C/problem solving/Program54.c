// get the number from the user and  if number is -ve then convert it into +ve then split that number into digits.

#include<stdio.h>

void DisplayDigits (int iValue)
{

    if(iValue < 0 )         // updator
    {
        iValue = -iValue ;
    }

    int iDigit = 0 ;

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;

        printf("%d \t",iDigit);

        iValue = iValue / 10 ;
    }
}

int main ()
{
    int iNum = 0 ;

    printf("Enter the Number : \n ");
    scanf("%d",&iNum);

    DisplayDigits(iNum);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    125
    5       2       1

    Enter the Number :
    -125
    5       2       1

    Enter the Number :
    852147
    7       4       1       2       5       8

    Enter the Number :
    -1212
    2       1       2       1

*/