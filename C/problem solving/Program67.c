// Create the array and accept element from user and display  Additon of all elements.

#include<stdio.h>

void DisplayArr (int *iAddress)
{
    printf("%d\t",*iAddress);
    iAddress++ ;

    printf("%d\t",*iAddress);
    iAddress++ ;

    printf("%d\t",*iAddress);
    iAddress++ ;
}

int main()
{
    int Arr[3] ;
    int iCnt = 0 , iSum = 0 ;

    printf("Enter three elements : \n");
    for(iCnt = 0 ; iCnt < 3 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of Arr[] is : \n");
    DisplayArr(Arr);             // Display(&Arr)

    for(iCnt = 0 ; iCnt < 3 ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    }

    printf("\n");
    printf("Sum of all Arr[] elements is : %d \n",iSum);

    return 0 ;
}

/*
    OUTPUT

    Enter three elements :
    1
    2
    3
    Elements of Arr[] is :
    1       2       3
    Sum of all Arr[] elements is : 6


    Enter three elements :
    1
    1
    1
    Elements of Arr[] is :
    1       1       1
    Sum of all Arr[] elements is : 3


    Enter three elements :
    10
    12
    14
    Elements of Arr[] is :
    10      12      14
    Sum of all Arr[] elements is : 36

*/