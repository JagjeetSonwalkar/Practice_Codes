// Diplay 1 to 10 on console .

#include<stdio.h>

void Display ()
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    Display() ;

    return 0 ;
    
}

/*
    OUTPUT

    1
    2
    3
    4
    5
    6
    7
    8
    9
    10

*/