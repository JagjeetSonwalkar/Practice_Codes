// Get the Value from user and Dislay sum of of digits.

#include<stdio.h>

int SumDigits(int iValue)
{
    int iSum = 0 ;

    while(iValue != 0)
    {
        iSum = iSum + (iValue % 10) ;
        iValue = iValue / 10 ;
    }
    return iSum ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = SumDigits(iNum);

    printf("\n");

    printf("Sum of Digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    251
    1       5       2
    Sum of Digits is : 8

    
    Enter the Number :
    250
    0       5       2
    Sum of Digits is : 7

    
    Enter the Number :
    852
    2       5       8
    Sum of Digits is : 15

    
    Enter the Number :
    558
    8       5       5
    Sum of Digits is : 18

   
    Enter the Number :
    595
    5       9       5
    Sum of Digits is : 19

*/