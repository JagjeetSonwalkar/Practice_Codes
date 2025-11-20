// get the number from the user and split that number into digits and Count that digit's .

#include<stdio.h>

int DisplayDigitCount (int iValue)
{
    int iDigit = 0 , iCount = 0 ;

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;
        iCount++;
        printf("%d \t",iDigit);
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

    iRet = DisplayDigitCount(iNum);

    printf("Count of Digit's is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the number :
    125
    5       2       1
    Count of Digit's is : 3


    Enter the number :
    12453
    3       5       4       2       1
    Count of Digit's is : 5


    Enter the number :
    124578
    8       7       5       4       2       1
    Count of Digit's is : 6


    Enter the number :
    1
    1
    Count of Digit's is : 1

*/