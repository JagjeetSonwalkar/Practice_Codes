/*
    Row = 4
    Col = 4

    Display Pattern

    0   2   3   4
    1   0   3   4
    1   2   0   4
    1   2   3   0

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i <= iCol ; i++)
    {
        for(j = 1 ; j <= iRow ; j++)
        {
            if(i==j)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",j);
            }
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
    4
    Enter the coloum :
    4
    0       2       3       4
    1       0       3       4
    1       2       0       4
    1       2       3       0

  
    Enter the Row :
    5
    Enter the coloum :
    5
    0       2       3       4       5
    1       0       3       4       5
    1       2       0       4       5
    1       2       3       0       5
    1       2       3       4       0

*/