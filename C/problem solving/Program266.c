/*

Display the pattern 
*    *   *   * 

*/


#include<stdio.h>

void DisplayI()
{
    int iCnt = 0 ;
    for(iCnt = 1 ; iCnt <= 4 ; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    DisplayI();

    return 0 ;
}

/*
    OUTPUT

    *       *       *       *
    
*/