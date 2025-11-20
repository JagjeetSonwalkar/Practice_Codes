/*

Display the pattern 
*    *   *   *  ........n

Get the Value from user.

*/

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    iCnt = 1 ;
    while(iCnt <= iValue)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the Value : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the Value :
    5
    *       *       *       *       *
    
    Enter the Value :
    10
    *       *       *       *       *       *       *       *       *       *
    
    Enter the Value :
    2
    *       *

*/