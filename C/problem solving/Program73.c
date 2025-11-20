// Create the array and accept element from user and display all elements using function .

#include<stdio.h>

void DisplayBrr (int *iAddress , int iSize)
{
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        printf("%d\t",iAddress[iCnt]);
    }
}

int main()
{
    int Brr[3] , iCnt = 0 ;

    printf("Enter the elements of Arr[] : \n");
    for(iCnt = 0 ; iCnt < 3 ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Elements of Brr[] is : \n");
    DisplayBrr(Brr , 3);                                

}

/*
    OUTPUT

   Enter the elements of Arr[] :
    10
    20
    30
    Elements of Brr[] is :
    10      20      30

    Enter the elements of Arr[] :
    11
    22
    33
    Elements of Brr[] is :
    11      22      33

    Enter the elements of Arr[] :
    1
    4
    5
    Elements of Brr[] is :
    1       4       5

*/