/*
    Input : 5

    Display Pattern
    A   B   C   D   E
*/

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0 ;
    char ch = '\0' ;      

    for(iCnt = 1 , ch = 'A' ; iCnt <= iValue ; ch++ , iCnt++)
    {
        printf("%c\t",ch);      
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
    4
    A       B       C       D

    Enter the Range :
    6
    A       B       C       D       E       F

*/