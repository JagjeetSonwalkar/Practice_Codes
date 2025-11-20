// Create the array and display its elements using indexing .

#include<stdio.h>

int main()
{
    int iValue1 = 10 ;
    int iValue2 = 20 ;
    int iValue3 = 30 ;
    int iValue4 = 40 ;
    int iValue5 = 50 ;

    int Arr[5] = {10,20,30,40,50};      // Array

    printf("Elements of Array is : \n");
    printf("%d \t",Arr[0]);             // printing Array with the help of indexing.
    printf("%d \t",Arr[1]);
    printf("%d \t",Arr[2]);
    printf("%d \t",Arr[3]);
    printf("%d \t",Arr[4]);

    return 0 ;
}

/*
    OUTPUT

    Elements of Array is :
    10      20      30      40      50

*/