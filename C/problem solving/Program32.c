// Display the number from 1 to n where get the n value from the user , with the help of iteration approch.

#include<stdio.h>

int main()
{
    int iFrequency = 0 , iCnt = 0 ;

    printf("Enter the frequnecy : \n ");
    scanf("%d",&iFrequency);

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d \n",iCnt);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the frequnecy :
    5
    1
    2
    3
    4
    5


    Enter the frequnecy :
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


    Enter the frequnecy :
    50
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
    22
    23
    24
    25
    26
    27
    28
    29
    30
    31
    32
    33
    34
    35
    36
    37
    38
    39
    40
    41
    42
    43
    44
    45
    46
    47
    48
    49
    50

*/