// Accept the value from the user and store it into array and display Sum of even and Odd number of array .

#include<stdio.h>
#include<stdlib.h>

void SumOfEvenOdd (int iAddress[] , int iSize)
{
    int iCnt = 0 , iSumE = 0 , iSumO = 0 ;   // iSumE == iSumEven and iSumO == iSumOdd

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( (iAddress[iCnt] ) % 2 == 0)
        {
            iSumE = iSumE + iAddress[iCnt] ;
        }
        else
        {
            iSumO = iSumO + iAddress[iCnt] ;
        }
    }
    printf("The sum of even number of array is : %d \n ",iSumE);
    printf("The sum of Odd number of array is : %d \n ",iSumO);
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 ;

    printf("Enter the lenght of you want : \n ");
    scanf("%d",&iLenght);

    iPrr = ( int * ) malloc (iLenght * sizeof(int));

    printf("Enter the Values :\n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }

    printf("The Value of Array : \n ");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        printf("%d\t",iPrr[iCnt]);
    }

    printf("\n");

    SumOfEvenOdd (iPrr , iLenght);

    free(iPrr);
    
}

/*
    OUTPUT

    Enter the lenght of you want :
    3
    Enter the Values :
    1
    2
    3
    The Value of Array :
    1      2       3
    The sum of even number of array is : 2
    The sum of Odd number of array is : 4


    Enter the lenght of you want :
    5
    Enter the Values :
    1
    2
    3
    4
    5
    The Value of Array :
    1      2       3       4       5
    The sum of even number of array is : 6
    The sum of Odd number of array is : 9
        

*/