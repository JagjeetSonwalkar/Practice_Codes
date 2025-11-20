// Accept the number from the user and display all its factor .

#include<stdio.h>

void DisplayFactor (int iValue)
{
    int iCnt = 0 ;

    printf("Factors of %d is : \n " , iValue);

    for(iCnt = 1 ; iCnt < iValue ; iCnt++)      // Time complexity O(N)
    {
        if( ( iValue % iCnt ) == 0 )
        {
            printf("%d\t",iCnt);
        }  
    }
}

int main()
{
    int iNum = 0 ;

    printf("Enter the number \n");
    scanf("%d",&iNum);

    DisplayFactor(iNum);

    return 0 ;
}

/*
    OUTPUT

    Enter the number
    1
    Factors of 1 is :

    Enter the number
    2
    Factors of 2 is :
    1
    
    Enter the number
    3
    Factors of 3 is :
    1
   
    Enter the number
    4
    Factors of 4 is :
    1      2
   
    Enter the number
    5
    Factors of 5 is :
    1

    Enter the number
    6
    Factors of 6 is :
    1      2       3

    Enter the number
    7
    Factors of 7 is :
    1

    Enter the number
    8
    Factors of 8 is :
    1      2       4
    
    Enter the number
    9
    Factors of 9 is :
    1      3

    Enter the number
    10
    Factors of 10 is :
    1      2       5

    Enter the number
    11
    Factors of 11 is :
    1

    Enter the number
    12
    Factors of 12 is :
    1      2       3       4       6

    Enter the number
    13
    Factors of 13 is :
    1

    Enter the number
    14
    Factors of 14 is :
    1      2       7

    Enter the number
    15
    Factors of 15 is :
    1      3       5

    Enter the number
    16
    Factors of 16 is :
    1      2       4       8

    Enter the number
    17
    Factors of 17 is :
    1

    Enter the number
    18
    Factors of 18 is :
    1      2       3       6       9

    Enter the number
    19
    Factors of 19 is :
    1

    Enter the number
    20
    Factors of 20 is :
    1      2       4       5       10

    Enter the number
    55
    Factors of 55 is :
    1      5       11

    Enter the number
    32
    Factors of 32 is :
    1      2       4       8       16

*/