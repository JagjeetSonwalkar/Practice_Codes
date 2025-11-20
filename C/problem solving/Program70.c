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
    int Brr[8] , iCnt = 0 ;

    printf("Enter the elements of Arr[] : \n");
    for(iCnt = 0 ; iCnt < 8 ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Elements of Brr[] is : \n");
    DisplayBrr(Brr,8);                                // DisplayBrr(&Arr,NumberofArr)

}

/*
    OUTPUT

   Enter the elements of Arr[] :
    10
    20
    30
    40
    50
    60
    70
    80
    Elements of Brr[] is :
    10      20      30      40      50      60      70      80

    Enter the elements of Arr[] :
    1
    1
    1
    11
    11
    11
    111
    111
    Elements of Brr[] is :
    1       1       1       11      11      11      111     111

*/