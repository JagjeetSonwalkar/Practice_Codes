// sum of two numric value with decimal point less than 7 decimal point & get the values from the user

/*
    step 1 -> Understand the problem Statement
              we have to take input from the user as two decimal number less than 7 decimal point and add that two decimal numbers

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

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fSum = 0.0f ;

    printf("Enter the first number : \n");
    scanf("%f",&fValue1);

    printf("Enter the second number : \n");
    scanf("%f",&fValue2);

    fSum = fValue1 + fValue2 ;

    printf("Sum of two numbers are : %f \n",fSum);

    return 0;
}

/*
    step 5 -> Test the program
                Enter the first number :
                12.52
                Enter the second number :
                25.22
                Sum of two numbers are : 37.739998

                Enter the first number :
                -125.56
                Enter the second number :
                0.255
                Sum of two numbers are : -125.305000


                Enter the first number :
                15.2589
                Enter the second number :
                2589.15
                Sum of two numbers are : 2604.408691
*/