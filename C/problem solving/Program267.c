/*

Display the pattern 
*    *   *   * 

*/

#include<stdio.h>

void Display ()
{
    int iCnt = 0 ;

    iCnt = 1 ;
    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    Display();

    return 0 ;
}

/*
    OUTPUT

    *       *       *       *
    
*/