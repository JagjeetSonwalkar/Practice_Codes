// Craete a Dynamic Array  and Accept the legth of Array from user and get values from the user.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLenght = 0 , *iBrr = NULL , iCnt = 0 ;

    printf("Enter the lenght of Brr : \n");
    scanf("%d",&iLenght);

    iBrr = (int *)malloc(iLenght * sizeof(int)) ;

    printf("Enter the values of Brr : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iBrr[iCnt]);
    }

    free (iBrr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Brr :
    5
    Enter the values of Brr :
    10
    20
    30
    40
    50


    Enter the lenght of Brr :
    2
    Enter the values of Brr :
    11
    22


    Enter the lenght of Brr :
    6
    Enter the values of Brr :
    1
    2
    3
    1
    2
    3

*/