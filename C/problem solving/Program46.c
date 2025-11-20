// get the number from the user and check the number is completely divisible by 3 and 5 both or not


/*
-------------------------------------------------------
    Operand 1       Operand 2       &&          ||
-------------------------------------------------------
    true            true            true        true
    true            false           false       true
    false           true            false       true
    false           false           false       false
-------------------------------------------------------
*/

#include<stdio.h>
#include<stdbool.h>

int checkDivisible (int iValue)
{
    if ( (iValue % 3) == 0 && (iValue % 5 ) == 0 )
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

    bRet = checkDivisible(iNum);

    if(bRet == true)
    {
        printf("Number is Divisible by both 3 & 5 . \n");
    }
    else
    {
        printf("Number is not Divisible by both 3 & 5 !! \n");
    }
    
    return 0 ;
}

/*
    OUTPUT

    Enter the number :
    1
    Number is not Divisible by both 3 & 5 !!

    Enter the number :
    10
    Number is not Divisible by both 3 & 5 !!

    Enter the number :
    15
    Number is Divisible by both 3 & 5 .

    Enter the number :
    20
    Number is not Divisible by both 3 & 5 !!

    Enter the number :
    6
    Number is not Divisible by both 3 & 5 !!

    Enter the number :
    60
    Number is Divisible by both 3 & 5 .
   
*/