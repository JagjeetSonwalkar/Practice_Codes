/*
    Row = 4
    Col = 4

    Display Pattern

    1   1   1   1
    2   2   2   2
    3   3   3   3   
    4   4   4   4

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i<=iCol ; i++)
    {
        for(j=1 ; j<=iRow ; j++)
        {
            printf("%d\t",i);
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
    1       1       1       1
    2       2       2       2
    3       3       3       3
    4       4       4       4

   
    Enter the Row :
    2
    Enter the coloum :
    4
    1       1
    2       2
    3       3
    4       4


    Enter the Row :
    5
    Enter the coloum :
    5
    1       1       1       1       1
    2       2       2       2       2
    3       3       3       3       3
    4       4       4       4       4
    5       5       5       5       5

*/