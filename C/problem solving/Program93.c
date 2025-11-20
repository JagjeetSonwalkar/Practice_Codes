// Accept the value from the user and store it into array and display Average of array .

#include<stdio.h>
#include<stdlib.h>

float AverageOfArray (int iAddress[] , int iSize)
{
    int iCnt = 0 , iSum = 0 ;
    float fAvg = 0.0f ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + iAddress[iCnt] ;
    }

    fAvg = (float)iSum / (float)iSize ;         // Typecasting 
    
    return fAvg ;
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
    7
    Enter the Values :
    124
    852
    102
    133
    197
    779
    731
    AVerage of Array is : 416.857147

 
    Enter the lenght of array :
    5
    Enter the Values :
    85
    96
    74
    155
    200
    AVerage of Array is : 122.000000


    Enter the lenght of array :
    3
    Enter the Values :
    199
    788
    149
    AVerage of Array is : 378.666656

*/