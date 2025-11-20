// accept number from the user and check a number is perfect number or Not 
// (Perfect number is submation of factor number is equal to the factor number)

#include<stdio.h>
#include<stdbool.h>

int checkPerfectNumber (int iValue)
{
    int iCnt = 0 , iSum = 0;

    printf("Factor of %d is : \n",iValue);

    for( iCnt = 1 ; iCnt < iValue ; iCnt++)
    {
        if( ( iValue % iCnt ) == 0)
        {
            printf("%d\t",iCnt);
            iSum = iSum + iCnt ;
        }   
    }

    printf("\n");

    printf("Submation of Factors is : %d \n",iSum);

    if(iSum == iValue)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

int main()
{
    int iNum = 0 , bRet = 0 ;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    bRet = checkPerfectNumber(iNum);

    if(bRet == true)
    {
        printf("The number is perfect number .\n");
    }
    else
    {
        printf("The number is NOT perfect number !! \n");   
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the number :
    6
    Factor of 6 is :
    1       2       3
    Submation of Factors is : 6
    The number is perfect number .


    Enter the number :
    5
    Factor of 5 is :
    1
    Submation of Factors is : 1
    The number is NOT perfect number !!


    Enter the number :
    25
    Factor of 25 is :
    1       5
    Submation of Factors is : 6
    The number is NOT perfect number !!


    Enter the number :
    50
    Factor of 50 is :
    1       2       5       10      25
    Submation of Factors is : 43
    The number is NOT perfect number !!


    Enter the number :
    35
    Factor of 35 is :
    1       5       7
    Submation of Factors is : 13
    The number is NOT perfect number !!


    Enter the number :
    12
    Factor of 12 is :
    1       2       3       4       6
    Submation of Factors is : 16
    The number is NOT perfect number !!

*/