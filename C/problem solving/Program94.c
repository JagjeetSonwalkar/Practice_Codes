// Accept the value from the user and store it into array and display Max number of array .

#include<stdio.h>
#include<stdlib.h>

int MaxValue (int iAddress[] , int iSize)
{
    int iCnt = 0 , iMax = 0 ;

    iMax = iAddress[0] ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if (iAddress[iCnt] > iMax)
        {
            iMax = iAddress[iCnt] ;
        }
    }
    return iMax ;
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

    iRet = MaxValue(iPrr , iLenght);

    printf("Max Value of Array is : %d \n",iRet);

    free(iPrr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of array :
    5
    Enter the Values :
    10
    20
    80
    40
    100
    The Values of Array is :
    10      20      80      40      100
    Max Value of Array is : 100

    Enter the lenght of array :
    2
    Enter the Values :
    1
    3
    The Values of Array is :
    1       3
    Max Value of Array is : 3


    Enter the lenght of array :
    5
    Enter the Values :
    1
    5
    4
    8
    3
    The Values of Array is :
    1       5       4       8       3
    Max Value of Array is : 8

*/