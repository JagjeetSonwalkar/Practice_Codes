// Display the pattern : *    *   *   *   * .... n*  no. of times and get the range from user

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
    {
        printf(" * \t");
    }
    printf("\n");
}

int main()
{
    int iRange = 0 ;

    printf("Enter the Range : \n");
    scanf("%d",&iRange);

    Display(iRange);

    return 0 ;

}

/*
    OUTPUT

    Enter the Range :
    5
    *       *       *       *       *

    Enter the Range :
    10
    *       *       *       *       *       *       *       *       *       *

    Enter the Range :
    3
    *       *       *

*/