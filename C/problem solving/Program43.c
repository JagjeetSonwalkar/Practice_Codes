// get the number from the user and check the number is completely divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

int checkDivisible (int iValue)
{
    int iResult = 0 ;

    iResult = iValue % 5 ;

    if(iResult == 0)
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

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    bRet = checkDivisible(iNum);

    if(bRet == true)
    {
        printf("Number is completely divisible by 5. \n");
    }
    else
    {
        printf("Number is not completely divisible by 5 !! \n");
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    12
    Number is not completely divisible by 5 !!


    Enter the Number :
    10
    Number is completely divisible by 5.


    Enter the Number :
    25
    Number is completely divisible by 5.


    Enter the Number :
    4
    Number is not completely divisible by 5 !!


    Enter the Number :
    24
    Number is not completely divisible by 5 !!


    Enter the Number :
    39
    Number is not completely divisible by 5 !!

    Enter the Number :
    45
    Number is completely divisible by 5.

*/