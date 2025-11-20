// Get n number from the user and store it into array and dispay the values

#include<stdio.h>
#include<stdlib.h>

void DisplayArray (int iSize , int iAddress[])
{
    int iCnt = 0 ;

    while(iCnt < iSize)
    {
        printf("%d\t",iAddress[iCnt]);
        iCnt++;
    }
}

int main()
{
    int iLenght , *iArr = NULL , iCnt = 0 ;

    printf("Enter the lenght of array : \n");
    scanf("%d",&iLenght);

    iArr = (int *) malloc (sizeof(int) * iLenght);

    printf("Enter the Value : \n");

    iCnt = 0 ;
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iArr[iCnt]);
    }

    printf("Value of Array are : \n");

    DisplayArray(iLenght,iArr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of array :
    3
    Enter the Value :
    10
    20
    30
    Value of Array are :
    10      20      30
   
    Enter the lenght of array :
    5
    Enter the Value :
    10
    20
    30
    40
    50
    Value of Array are :
    10      20      30      40      50

    Enter the lenght of array :
    8
    Enter the Value :
    800
    500
    200
    700
    400
    100
    300
    10
    Value of Array are :
    800     500     200     700     400     100     300     10

*/