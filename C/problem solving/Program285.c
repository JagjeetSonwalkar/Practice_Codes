// Get the Value from user and Dislay Count of Even digits. (Recursion)

#include<stdio.h>

int CountEvenDigits(int iValue)
{
    static int iCount = 0 ;
    int iDigit = 0 ;

    if(iValue != 0)
    {
        iDigit = iValue % 10 ;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iValue = iValue / 10 ;

        CountEvenDigits(iValue);
    }
    return iCount ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = CountEvenDigits(iNum);

    printf("Count of Even Digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    123
    Count of Even Digits is : 1

    
    Enter the Number :
    246
    Count of Even Digits is : 3

    
    Enter the Number :
    400
    Count of Even Digits is : 3

    
    Enter the Number :
    1254
    Count of Even Digits is : 2

*/