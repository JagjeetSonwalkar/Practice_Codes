// Craete a Dynamic Array  and Accept the legth of Array from user and get values from the user and display .

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

    printf("The Value of Brr is : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        printf("%d \t ",iBrr[iCnt]);
    }

    free (iBrr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Brr :
    3
    Enter the values of Brr :
    30
    4050
    1
    The Value of Brr is :
    30       4050    1


    Enter the lenght of Brr :
    10
    Enter the values of Brr :
    20
    30
    50
    40
    10
    00
    60
    80
    90
    70
    The Value of Brr is :
    20       30      50      40      10      0       60      80      90      70


    Enter the lenght of Brr :
    1
    Enter the values of Brr :
    100
    The Value of Brr is :
    100

*/