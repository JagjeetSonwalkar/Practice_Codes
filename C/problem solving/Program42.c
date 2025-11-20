// Diplay 1 to n and get the n value from the user .

#include<stdio.h>

void Diplay (int iValue)
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

    printf("Enter the Frequency : \n ");
    scanf("%d",&iFrequency);

    Diplay(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the Frequency :
    8
    1
    2
    3
    4
    5
    6
    7
    8


    Enter the Frequency :
    10
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


    Enter the Frequency :
    21
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
    21

*/