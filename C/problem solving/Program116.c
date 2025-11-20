/*
    Row = 4
    Col = 3

    Display Pattern

    *   *   *
    *   *   *
    *   *   *
    *   *   *
*/

#include<stdio.h>

void Display()
{
    int iCnt = 0 , jCnt = 0 ;

    for(iCnt = 1 ; iCnt <= 4 ; iCnt++)
    {
        for(jCnt = 1 ; jCnt <= 3 ; jCnt++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display ();

    return 0 ;
}

/*
    OUTPUT

    *       *       *
    *       *       *
    *       *       *
    *       *       *
*/