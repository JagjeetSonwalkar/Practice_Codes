// Create the array and accept element from user and display Additon of all elements.

#include<stdio.h>

int main()
{
    int Arr[4] ;

    int iCnt = 0 , iSum = 0 ;

    printf("Enter the Elements : \n");
    
    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    }

    printf("Sum of all elemts of Arr[] is : %d \n ",iSum);


    return 0 ;
}

/*
    OUTPUT

    Enter the Elements :
    0
    1
    0
    1
    Sum of all elemts of Arr[] is : 2


    Enter the Elements :
    999
    777
    666
    444
    Sum of all elemts of Arr[] is : 2886


    Enter the Elements :
    0
    20
    -30
    40
    Sum of all elemts of Arr[] is : 30

*/