/*
    Row = 4 Col = 4

    Display : 
    a   b   c   d
    e   f   g   h
    i   j   k   l
    m   n   o   p   
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;
    char ch = 'a' ;

    for(i = 1 ; i<= iCol ;  i++)
    {
        for(j = 1 ; j<= iRow ; ch++ , j++)
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
    a       b       c       d
    e       f       g       h
    i       j       k       l
    m       n       o       p


    Enter the rows :
    5
    Enter the coloum :
    5
    a       b       c       d       e
    f       g       h       i       j
    k       l       m       n       o
    p       q       r       s       t
    u       v       w       x       y

*/