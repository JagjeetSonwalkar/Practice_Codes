// Display the pattern :  -1  -2   -3    -4 ..... -n     no. of times and get the range from user

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
    {
        printf("-%d \t",iCnt);
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
    -1      -2      -3      -4      -5


    Enter the Range :
    3
    -1      -2      -3


    Enter the Range :
    10
    -1      -2      -3      -4      -5      -6      -7      -8      -9      -10

*/