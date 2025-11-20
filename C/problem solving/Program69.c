// Create the array and accept element from user and display all elements using function .

#include<stdio.h>

void DisplayBrr (int *iAddress , int iSize)
{
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        printf("%d\t",*iAddress);
        iAddress++ ;
    }
}

int main()
{
    int Brr[5] , iCnt = 0 ;

    printf("Enter the elements of Arr[] : \n");
    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Elements of Brr[] is : \n");
    DisplayBrr(Brr,5);                                // DisplayBrr(&Arr,NumberofArr)

}

/*
    OUTPUT

    Enter the elements of Arr[] :
    10
    20
    30
    40
    50
    Elements of Brr[] is :
    10      20      30      40      50

    Enter the elements of Arr[] :
    1
    1
    1
    1
    1
    Elements of Brr[] is :
    1       1       1       1       1

    Enter the elements of Arr[] :
    1
    0
    1
    0
    1
    Elements of Brr[] is :
    1       0       1       0       1

    Enter the elements of Arr[] :
    1
    2
    3
    4
    5
    Elements of Brr[] is :
    1       2       3       4       5

*/