// *sum of two numric value with decimal point more than 6 decimal point & get the values from the user

/*
    step 1 -> Understand the problem Statement
              we have to take input from the user as two decimal number more than 6 decimal point and add that two decimal numbers

    step 2 -> Write the Algorithm
              START
                Accept the 1st input
                Accept the 2nd input
                logic
                Dispay the output
              END

    step 3 -> Choose the Programming Language
              According to the problem statement we select 'C Programming Language'.

    Step 4 -> Write the program

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
////    Function Name : Addition
////    Description   : It is used to perform addtion of two double values.
////    Input         : Double , Double.
////    Output        : Double.
////    Author        : Jagjeet Sonwalkar (MC00025)
////    Date          : 19/1/2025
////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double Addition (double dNo1 , double dNo2)
{
    double dSum = dNo1 + dNo2 ;
    return dSum ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
////    This application is used to perform sum of two numbers.
////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    double dValue1 = 0.0 , dValue2 = 0.0 , dRet = 0.0 ;

    printf("Enter the first number : \n ");
    scanf("%lf",&dValue1);

    printf("Enter the second number : \n ");
    scanf("%lf",&dValue2);

    dRet = Addition(dValue1,dValue2);

    printf("Sum of two number is : %lf \n ",dRet);


    return 0 ;
}

/*
    Step5 -> Test the program

    Enter the first number :
    125.268
    Enter the second number :
    12.002
    Sum of two number is : 137.270000

    Enter the first number :
    25.1234567
    Enter the second number :
    234.7412589
    Sum of two number is : 259.864716

    Enter the first number :
    -1258.369123
    Enter the second number :
    0.255
    Sum of two number is : -1258.114123
    
*/