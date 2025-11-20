// Sum of two integer values and get the values from user

#include<stdio.h>

int Addition (int iNo1 ,int iNo2)
{
    int iSum = 0 ;
    iSum = iNo1 + iNo2 ;
    return iSum ;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0 ;

    printf("Enter the first number : \n ");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n ");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1 , iValue2);

    printf("Sum of two values is : %d \n",iRet);

    return 0 ;
}


/*
    OUTPUT

    Enter the first number :
    10
    Enter the second number :
    2
    Sum of two values is : 12

    Enter the first number :
    500
    Enter the second number :
    22
    Sum of two values is : 522

    Enter the first number :
    12345678
    Enter the second number :
    02144400
    Sum of two values is : 14490078

*/
