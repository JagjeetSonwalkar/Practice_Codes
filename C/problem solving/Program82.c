// Accept the value from the user and store it into array and display even number of array .

#include<stdio.h>
#include<stdlib.h>

void EvenNumberOfArray (int iAddress[] , int iSize)
{
    int iCnt = 0 ;

    printf("Even Number of Array is : \n ");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( ( iAddress[iCnt] % 2 ) == 0)
        {
            printf("%d\t",iAddress[iCnt]);
        }
    }
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 ;

    printf("Enter the lenght of Array : \n ");
    scanf("%d",&iLenght);

    iPrr = (int *) malloc (iLenght * (sizeof(int)));

    printf("Enter the Elements : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }

    printf("Elements are : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        printf("%d \t",iPrr[iCnt]);
    }

    printf("\n");

    EvenNumberOfArray(iPrr,iLenght);

    free(iPrr);
    
    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Array :
    5
    Enter the Elements :
    1
    2
    3
    4
    5
    Elements are :
    1       2       3       4       5
    Even Number of Array is :
    2      4
  
    Enter the lenght of Array :
    10
    Enter the Elements :
    2
    4
    6
    8
    3
    6
    9
    12
    15
    20
    Elements are :
    2       4       6       8       3       6       9       12      15      20
    Even Number of Array is :
    2      4       6       8       6       12      20

*/