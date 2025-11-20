// get the number from the user and check the number is completely divisible by 3 or not

#include<stdio.h>
#include<stdbool.h>

int checkDivisible (int iValue)
{
    if( (iValue % 3) == 0)
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
    int iNum = 0 ;
    bool bRet = false ;

    printf("Enter the number : \n ");
    scanf("%d",&iNum);

    bRet = checkDivisible(iNum) ;

    if(bRet == true)
    {
        printf("The number is completely divisible by 3 . \n");
    }
    else
    {
        printf("The number is not completely divisible by 3 !! \n");
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the number :
    1
    The number is not completely divisible by 3 !!


    Enter the number :
    2
    The number is not completely divisible by 3 !!


    Enter the number :
    4
    The number is not completely divisible by 3 !!


    Enter the number :
    3
    The number is completely divisible by 3 .


    Enter the number :
    6
    The number is completely divisible by 3 .


    Enter the number :
    9
    The number is completely divisible by 3 .


    Enter the number :
    15
    The number is completely divisible by 3 .

*/