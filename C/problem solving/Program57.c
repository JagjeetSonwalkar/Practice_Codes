// Accept number from user and count even digits .

#include<stdio.h>

int CountEvenDigit (int iValue)
{
    int iDigit = 0 , iCount = 0 ;

    printf("Even Digits are : \n");

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        if( ( iDigit % 2 ) == 0)
        {
            printf("%d\t",iDigit);
            iCount++;
        }
        iValue = iValue / 10 ;
    }
    printf("\n");
    return iCount ;
}

int main()
{
    int iNum = 0 ,iRet = 0 ;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    iRet = CountEvenDigit(iNum);

    printf("Count of Even Digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT 

    Enter the number :
    1
    Even Digits are :

    Count of Even Digits is : 0


    Enter the number :
    2
    Even Digits are :
    2
    Count of Even Digits is : 1


    Enter the number :
    123
    Even Digits are :
    2
    Count of Even Digits is : 1


    Enter the number :
    1234
    Even Digits are :
    4       2
    Count of Even Digits is : 2


    Enter the number :
    12456
    Even Digits are :
    6       4       2
    Count of Even Digits is : 3


    Enter the number :
    2468
    Even Digits are :
    8       6       4       2
    Count of Even Digits is : 4

*/