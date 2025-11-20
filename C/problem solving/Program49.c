// Accept the number from the user and Return sumbutaion of all its factor .

#include<stdio.h>

int factorSum (int iValue)
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 1 ; iCnt < iValue ; iCnt++)
    {
        if( (iValue % iCnt) == 0 )
        {
            printf("%d \t",iCnt);

            iSum = iSum + iCnt ;
        }
    }
    printf("\n");

    return iSum ;
}

int main()
{
    int iNum = 0 , iRet = 0 ;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iRet = factorSum(iNum) ;

    printf("Submation of all factor is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    10
    1       2       5
    Submation of all factor is : 8


    Enter the Number :
    6
    1       2       3
    Submation of all factor is : 6


    Enter the Number :
    12
    1       2       3       4       6
    Submation of all factor is : 16


    Enter the Number :
    20
    1       2       4       5       10
    Submation of all factor is : 22

*/