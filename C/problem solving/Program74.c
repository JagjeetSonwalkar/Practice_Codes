// Craete a Dynamic Array  and Accept the legth of Array from user .

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *iArr = NULL  , iLenght = 0 ;

    printf("Enter the lenght of Arr : \n");
    scanf("%d",&iLenght);

    iArr = ( int * )malloc(iLenght * sizeof(int) ) ;

    // LOGIC

    free(iArr) ;

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Arr :
    10


    Enter the lenght of Arr :
    100


    Enter the lenght of Arr :
    100


    Enter the lenght of Arr :
    1000

*/