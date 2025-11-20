// Accept the value from the user and store it into array and display Average of array .

#include<stdio.h>
#include<stdlib.h>

float AverageOfArray (int iAddress[] , int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + iAddress[iCnt] ;
    }
    return iSum / iSize ;
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 ;
    float fRet = 0.0f ;

    printf("Enter the lenght of array : \n");
    scanf("%d",&iLenght);

    iPrr = (int *)malloc(iLenght * sizeof(int)) ;

    printf("Enter the Values : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }
    
    fRet = AverageOfArray(iPrr,iLenght);

    printf("AVerage of Array is : %f \n",fRet);

    free(iPrr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of array :
    5
    Enter the Values :
    10
    1
    8
    7
    99
    AVerage of Array is : 25.000000


    Enter the lenght of array :
    7
    Enter the Values :
    124
    852
    102
    133
    197
    779
    731
    AVerage of Array is : 416.000000

*/