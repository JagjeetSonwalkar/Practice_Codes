/*
    Input : 5

    Display Pattern
    a   1   b   2   c   3   d   4   e   5
*/

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0 ;
    char ch = '\0' ;      

    for(iCnt = 1 , ch = 'a' ; iCnt <= iValue ; ch++ , iCnt++)
    {
        printf("%c\t%d\t",ch,iCnt);      
    }
}

int main()
{
    int iRange = 0 ;

    printf("Enter the Range : \n");
    scanf("%d",&iRange);

    Display(iRange);

    return 0 ;
}

/*
    OUTPUT

    Enter the Range :
    5
    a       1       b       2       c       3       d       4       e       5

    Enter the Range :
    10
    a       1       b       2       c       3       d       4       e       5       f       6       g       7       h      8i       9       j       10
  
    Enter the Range :
    3
    a       1       b       2       c       3

*/