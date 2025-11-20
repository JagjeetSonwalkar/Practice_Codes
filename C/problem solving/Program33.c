// Display the number from 1 to n where get the n value from the user , with the help of iteration approch.

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the frequency : \n ");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the frequency :
    5
    1
    2
    3
    4
    5


    Enter the frequency :
    15
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
    11
    12
    13
    14
    15


    Enter the frequency :
    20
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
    11
    12
    13
    14
    15
    16
    17
    18
    19
    20

*/