/*
    Row = 4 Col = 4

    Display : 
    a   a   a   a
    b   b   b   b
    c   c   c   c
    d   d   d   d   
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;
    char ch = '\0' ;

    for(i = 1 , ch = 'a' ; i<= iCol ; ch++ , i++)
    {
        for(j = 1 ; j<= iRow ; j++)
        {
            printf("%c\t",ch);
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
    a       a       a       a
    b       b       b       b
    c       c       c       c
    d       d       d       d

 
    Enter the rows :
    5
    Enter the coloum :
    5
    a       a       a       a       a
    b       b       b       b       b
    c       c       c       c       c
    d       d       d       d       d
    e       e       e       e       e

*/