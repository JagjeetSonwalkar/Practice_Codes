// Create the array and accept element from user and display its elements using loop's.

#include<stdio.h>

int main()
{
    int Arr[6] ;

    int iCnt = 0 ;

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < 6 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elemets of Arr[] is : \n");

    for(iCnt = 0 ; iCnt < 6 ; iCnt++)
    {
        printf("%d \t",Arr[iCnt]);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the elements :
    10
    20
    30
    40
    550
    60
    Elemets of Arr[] is :
    10      20      30      40      550     60

    Enter the elements :
    101
    201
    301
    401
    501
    601
    Elemets of Arr[] is :
    101     201     301     401     501     601

*/