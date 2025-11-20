// Accept the value from the user and store it into array and display Min number of array .

#include<stdio.h>
#include<stdlib.h>

int MinValue (int iAddress[] , int iSize)
{
    int iCnt = 0 , iMin = 0 ;

    iMin = iAddress[0] ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if (iAddress[iCnt] < iMin)
        {
            iMin = iAddress[iCnt] ;
        }
    }
    return iMin ;
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 , iRet = 0 ;

    printf("Enter the lenght of array : \n");
    scanf("%d",&iLenght);

    iPrr = (int *)malloc(iLenght * sizeof(int)) ;

    printf("Enter the Values : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }
    
    printf("The Values of Array is : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++ )
    {
        printf("%d \t",iPrr[iCnt]);
    }

    printf("\n");

    iRet = MinValue(iPrr , iLenght);

    printf("Min Value of Array is : %d \n",iRet);

    free(iPrr);

    return 0 ;
}

/*
    OUTPUT
    
    Enter the lenght of array :
    5
    Enter the Values :
    8
    2
    5
    1
    7
    The Values of Array is :
    8       2       5       1       7
    Min Value of Array is : 1


    Enter the lenght of array :
    3
    Enter the Values :
    125
    189
    101
    The Values of Array is :
    125     189     101
    Min Value of Array is : 101

*/