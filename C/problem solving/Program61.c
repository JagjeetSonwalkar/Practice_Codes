// get the number from the user and Reverse that number .

#include<stdio.h>

int ReverseNum (int iValue)
{
    if(iValue < 0)
    {
        iValue = - iValue ;
    }

    int iDigit = 0 ;
    int iReverse = 0 ;

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        iReverse = iReverse * 10 + iDigit ;
        iValue = iValue / 10 ;
    }
    return iReverse ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = ReverseNum(iNum);

    printf("The Reverse number is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT 

    Enter the Number :
    2514
    The Reverse number is : 4152
 
    Enter the Number :
    123456789
    The Reverse number is : 987654321

    Enter the Number :
    25102510
    The Reverse number is : 1520152

    Enter the Number :
    110011
    The Reverse number is : 110011

    Enter the Number :
    125
    The Reverse number is : 521

    Enter the Number :
    -125
    The Reverse number is : 521
*/