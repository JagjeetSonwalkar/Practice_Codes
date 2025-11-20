// Accept the percantage and Display PASS if Greater than  equal to 40   or FAIL if less than 40

#include<stdio.h>

void Dispay (float fValue)
{
    if(fValue >= 100.0f)
    {
        printf("Entered Percentage is Wrong !!! and Enter the percantage in the Range 0 - 100 \n ");
    }

    if(fValue >= 40.0f)
    {
        printf("You are PASS \n ");
    }
    else
    {
        printf("You are FAIL ! \n ");
    }
}

int main()
{
    float fPercentage = 0.0f ;

    printf("Enter the Percentage : \n ");
    scanf("%f",&fPercentage);

    Dispay(fPercentage);

    return 0 ;
}

/*
    OUTPUT

    Enter the Percentage :
    50.25
    You are PASS

    Enter the Percentage :
    30
    You are FAIL !

    Enter the Percentage :
    40.00
    You are PASS

**********************************************ISSUE*******************************************************************************

    Enter the Percentage :
    101                                                                                    <-------------
    Entered Percentage is Wrong !!! and Enter the percantage in the Range 0 - 100          <-------------
    You are PASS                                                                           <-------------

    Enter the Percentage :
    -25
    You are FAIL !

    
*/