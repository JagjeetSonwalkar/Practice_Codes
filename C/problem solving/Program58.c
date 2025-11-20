// Accept number from user and count odd digits .

#include<stdio.h>

int CountOddDigits (int iValue)
{
    int iDigit = 0 , iCount = 0 ;

    printf("The odd Digits are : \n");

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        if( ( iDigit % 2 ) != 0 )
        {
            printf("%d \t",iDigit);
            iCount++;
        }
        iValue = iValue / 10 ;
    }
    printf("\n");
    return iCount ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    iRet = CountOddDigits(iNum);

    printf("The count of Odd Digits is : %d \n",iRet);
    
    return 0 ;
}

/*
    OUTPUT

    Enter the number :
    12
    The odd Digits are :
    1
    The count of Odd Digits is : 1


    Enter the number :
    123
    The odd Digits are :
    3       1
    The count of Odd Digits is : 2


    Enter the number :
    1234
    The odd Digits are :
    3       1
    The count of Odd Digits is : 2


    Enter the number :
    12345
    The odd Digits are :
    5       3       1
    The count of Odd Digits is : 3


    Enter the number :
    36912
    The odd Digits are :
    1       9       3
    The count of Odd Digits is : 3

*/