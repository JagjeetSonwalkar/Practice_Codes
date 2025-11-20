/*
    Row = 4 Col = 4

    *   *   *   *
    &   &   &   &
    &   &   &   &
    *   *   *   *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i<= iCol ;  i++)
    {
        for(j = 1 ; j<= iRow ; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("*\t");
            }
            else
            {
                printf("&\t");
            }        
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0 , iCol = 0 ;

    printf("Enter the rows : \n");
    scanf("%d",&iRow);

    printf("Enter the coloum : \n");
    scanf("%d",&iCol);

    Display(iRow , iCol);

    return 0 ;
}

/*
    OUTPUT

    Enter the rows :
    4
    Enter the coloum :
    4
    *       *       *       *
    &       &       &       &
    &       &       &       &
    *       *       *       *


    Enter the rows :
    5
    Enter the coloum :
    5
    *       *       *       *       *
    &       &       &       &       &
    &       &       &       &       &
    &       &       &       &       &
    *       *       *       *       *


*/