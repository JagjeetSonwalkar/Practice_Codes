// get the number from the user and split that number into digits and Sum that digit's .

#include<stdio.h>

int SumOfDigits (int iValue)
{
    int iDigit = 0 ,iSum = 0 ;

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        iSum = iSum + iDigit ;
        iValue = iValue / 10 ;
    }
    return iSum ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = SumOfDigits(iNum);

    printf("Sum of Digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    12
    Sum of Digits is : 3


    Enter the Number :
    123
    Sum of Digits is : 6


    Enter the Number :
    1245
    Sum of Digits is : 12


    Enter the Number :
    120145
    Sum of Digits is : 13


    Enter the Number :
    124578
    Sum of Digits is : 27


    Enter the Number :
    120120120
    Sum of Digits is : 9

*/