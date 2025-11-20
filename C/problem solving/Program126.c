/*
    Input : 5

    Display Pattern
    a   b   c   d   e
*/

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0 ;
    char ch = '\0' ;

//              1               2               3
    for(iCnt = 1 , ch = 'a' ; iCnt <= iValue ; ch++ , iCnt++)
    {
        printf("%c\t",ch);      // 4
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
    a       b       c       d       e
    
    Enter the Range :
    4
    a       b       c       d
 
    Enter the Range :
    10
    a       b       c       d       e       f       g       h       i       j

*/