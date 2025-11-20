// Accept the value from the user and store it into array and display Reverse array .

#include<stdio.h>
#include<stdlib.h>

void ReverseArray (int iAddress[] , int iSize)
{
    int iCnt = 0 ;

    printf("The Reverse Order of Array : \n");

    for(iCnt = (iSize - 1) ; iCnt >= 0 ; iCnt--)
    {
        printf("%d \t",iAddress[iCnt]);
    }
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 ;

    printf("Enter the lenght of array : \n");
    scanf("%d",&iLenght);

    iPrr = (int *)malloc(iLenght * sizeof(int)) ;

    printf("Enter the Values : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }
    
    printf("The Values of Array is : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++ )
    {
        printf("%d \t",iPrr[iCnt]);
    }

    printf("\n");

    ReverseArray(iPrr , iLenght);

    free(iPrr);

    return 0 ;
}

/*
    OUTPUT
    
    Enter the lenght of array :
    3
    Enter the Values :
    10
    20
    30
    The Values of Array is :
    10      20      30
    The Reverse Order of Array :
    30      20      10

    Enter the lenght of array :
    5
    Enter the Values :
    10
    20
    30
    40
    50
    The Values of Array is :
    10      20      30      40      50
    The Reverse Order of Array :
    50      40      30      20      10

    Enter the lenght of array :
    4
    Enter the Values :
    500
    400
    300
    200
    The Values of Array is :
    500     400     300     200
    The Reverse Order of Array :
    200     300     400     500

*/