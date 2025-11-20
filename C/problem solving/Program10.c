// sum of two float value and get the value from the user WHERE if user enter any negative value then convert it into postive value.

#include<stdio.h>

float Addition (float fNum1 , float fNum2)
{
    float fSum = 0.0f ; 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                  <------------------------UPDATER---------------------->
    if(fNum1 < 0)
    {
        fNum1 = -fNum1 ;
    }

    if(fNum2 < 0)
    {
        fNum2 = -fNum2 ;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    fSum = fNum1 + fNum2 ;
    return fSum ;

}

int main()

{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f ;

    printf("Enter the first number : \n ");
    scanf("%f",&fValue1);

    printf("Enter the second number : \n ");
    scanf("%f",&fValue2);

    fRet = Addition(fValue1 , fValue2);

    printf("Addition of two number is : %f \n",fRet);


    return 0 ;
}

/*
    OUTPUT

    Enter the first number :
    25
    Enter the second number :
    25.25
    Addition of two number is : 50.250000


    Enter the first number :
    25
    Enter the second number :
    -25.25
    Addition of two number is : 50.250000


    Enter the first number :
    -25
    Enter the second number :
    25.25
    Addition of two number is : 50.250000

    Enter the first number :
    -25
    Enter the second number :
    -25.25
    Addition of two number is : 50.250000

*/