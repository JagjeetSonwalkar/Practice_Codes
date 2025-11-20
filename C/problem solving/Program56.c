// get the number from the user and if number is -ve then convert it into +ve then split that number into digits and Count that digit's .

#include<stdio.h>

int DigitCount (int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue ;          // Updator
    }

    int iDigit = 0 , iCount = 0 ;

    while (iValue > 0)
    {
        iDigit = iValue % 10 ;
        iCount++ ;
        iValue = iValue / 10 ;
    }

    return iCount ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the number : \n ");
    scanf("%d",&iNum);

    iRet = DigitCount(iNum);

    printf("Count of digits is : %d \n ",iRet);

    DigitCount(iNum);
}

/*
    OUTPUT

    Enter the number :
    125
    Count of digits is : 3

    Enter the number :
    1234
    Count of digits is : 4

    Enter the number :
    54321
    Count of digits is : 5

    Enter the number :
    147852
    Count of digits is : 6


    Enter the number :
    123654741
    Count of digits is : 9
    
*/
