/*
    Row = 4 Col = 4

    Display : 
    *   b   c   d
    a   *   c   d
    a   b   *   d
    a   b   c   *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;
    char ch = 'a' ;

    for(i = 1 ; i<= iCol ;  i++)
    {
        for(j = 1 , ch = 'a' ; j<= iRow ; ch++ , j++)
        {
            if(i==j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
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
    *       b       c       d
    a       *       c       d
    a       b       *       d
    a       b       c       *


    Enter the rows :
    5
    Enter the coloum :
    5
    *       b       c       d       e
    a       *       c       d       e
    a       b       *       d       e
    a       b       c       *       e
    a       b       c       d       *

    
    Enter the rows :
    10
    Enter the coloum :
    10
    *       b       c       d       e       f       g       h       i       j
    a       *       c       d       e       f       g       h       i       j
    a       b       *       d       e       f       g       h       i       j
    a       b       c       *       e       f       g       h       i       j
    a       b       c       d       *       f       g       h       i       j
    a       b       c       d       e       *       g       h       i       j
    a       b       c       d       e       f       *       h       i       j
    a       b       c       d       e       f       g       *       i       j
    a       b       c       d       e       f       g       h       *       j
    a       b       c       d       e       f       g       h       i       *

*/