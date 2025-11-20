/*

Display the pattern 
*    *   *   *  ........n

Get the Value from user. (Recursion)

*/

#include<stdio.h>

void DisplayR (int iValue)
{
    static int iCnt = 1 ;

    if(iCnt <= iValue)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iValue);
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the Value : \n");
    scanf("%d",&iFrequency);

    DisplayR(iFrequency);

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
    3
    *       *       *

*/