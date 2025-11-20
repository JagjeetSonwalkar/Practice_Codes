// Get the Value from user and Dislay no. of digits. (Recursion)

#include<stdio.h>

int DisplayCount(int iValue)
{
    static int iDigit = 0 , iCount = 0 ;

    if(iValue != 0)
    {
        iDigit = iValue % 10 ;
        printf("%d\t",iDigit);
        iCount++;
        iValue = iValue / 10 ;

        DisplayCount(iValue);
    }
    return iCount ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = DisplayCount(iNum);

    printf("\n");

    printf("Count of Digits is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    250
    0       5       2
    Count of Digits is : 3

   
    Enter the Number :
    1240
    0       4       2       1
    Count of Digits is : 4


    Enter the Number :
    521456
    6       5       4       1       2       5
    Count of Digits is : 6

*/