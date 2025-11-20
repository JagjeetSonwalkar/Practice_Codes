/*
    Input : 5

    Display Pattern
    A   B   C   D   E
*/

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0 ;
    char ch = '\0' ;      //  ASCII Value ( American Standard Code for Information Interchange )

    for(iCnt = 1 , ch = 65 ; iCnt <= iValue ; ch++ , iCnt++)
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
    5
    A       B       C       D       E

    Enter the Range :
    10
    A       B       C       D       E       F       G       H       I       J

*/