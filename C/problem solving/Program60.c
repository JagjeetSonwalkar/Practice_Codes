// get the number from the user and split that number into digits and Sum of even digit's .

#include<stdio.h>

int SumOfEvenDigits (int iValue)
{
    if(iValue < 0)
    {
        iValue = -iValue ;
    }

    int iDigit = 0 , iSum = 0 ;

    printf("Even Digits are : \n");

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        if( (iDigit % 2 ) == 0)
        {
            printf("%d\t",iDigit);
            iSum = iSum + iDigit ;
        }
        iValue = iValue / 10 ;
    }
    printf("\n");
    return iSum ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n ");
    scanf("%d",&iNum);

    iRet = SumOfEvenDigits(iNum);

    printf("Sum of Even digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    -125
    Even Digits are :
    2
    Sum of Even digits is : 2


    Enter the Number :
    -212
    Even Digits are :
    2       2
    Sum of Even digits is : 4

    Enter the Number :
    12345
    Even Digits are :
    4       2
    Sum of Even digits is : 6


    Enter the Number :
    124578
    Even Digits are :
    8       4       2
    Sum of Even digits is : 14


    Enter the Number :
    1212
    Even Digits are :
    2       2
    Sum of Even digits is : 4


    Enter the Number :
    136
    Even Digits are :
    6
    Sum of Even digits is : 6


    Enter the Number :
    139
    Even Digits are :

    Sum of Even digits is : 0

*/