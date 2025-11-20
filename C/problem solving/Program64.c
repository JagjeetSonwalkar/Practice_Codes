// Create the array and accept element from user and display its elements using loop.

#include<stdio.h>

int main()
{
    int Arr[5] ;
    int iCnt = 0 ;

    printf("Enter the elemnts : \n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements are : \n ");

    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        printf("%d \t",Arr[iCnt]);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the elemnts :
    125
    123
    122
    121
    120
    Elements are :
    125    123     122     121     120

    Enter the elemnts :
    10
    20
    30
    40
    50
    Elements are :
    10     20      30      40      50

*/