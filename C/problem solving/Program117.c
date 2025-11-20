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

void Display(int iRow , int iCol)
{
    int iInner = 0 , iOuter = 0;

    for(iOuter = 1 ; iOuter <= iCol ; iOuter++)
    {
        for(iInner = 1 ; iInner <= iCol ; iInner++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0 , iCol = 0 ;

    printf("Enter the Row : \n");
    scanf("%d",&iRow);

    printf("Enter the coloum : \n");
    scanf("%d",&iCol);

    Display(iRow,iCol);

    return 0 ;
}

/*
    OUTPUT

    Enter the Row :
    3
    Enter the coloum :
    3
    *       *       *
    *       *       *
    *       *       *


    Enter the Row :
    5
    Enter the coloum :
    5
    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *

*/