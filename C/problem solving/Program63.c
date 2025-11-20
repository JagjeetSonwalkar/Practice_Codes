// Create the array and display its elements using loop.

#include<stdio.h>

int main()
{
    int Arr[6] = {10,20,30,40,50,60};

    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d \t",Arr[iCnt]);
    }

    return 0 ;
}


/*
    OUTPUT

    10      20      30      40      50      60
    
*/