// Display the pattern :  2    4    6      8      10       no. of times and get the range from user
//                      1*2   2*2  3*2    4*2     5*2 
#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
    {
        printf("%d \t",2*iCnt);
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
    10
    2       4       6       8       10      12      14      16      18      20

    Enter the Range :
    5
    2       4       6       8       10

    Enter the Range :
    6
    2       4       6       8       10      12

*/