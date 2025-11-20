// Display the pattern :    0  -1  -2   -3    -4 ..... -n     no. of times and get the range from user

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt >= -iValue ; iCnt--)
    {
        printf("%d \t",iCnt);
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
    3
    0       -1      -2      -3

    Enter the Range :
    5
    0       -1      -2      -3      -4      -5

    Enter the Range :
    8
    0       -1      -2      -3      -4      -5      -6      -7      -8

*/