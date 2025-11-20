// Dynamic Array : Accept n number for user and perform the addition of that n number's 

#include<stdio.h>
#include<stdlib.h>

int AdditonOfArrayValues (int iAddress[] , int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + iAddress[iCnt] ;

    }
    return iSum ;
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0  , iRet = 0 ;

    printf("Enter the lenght of Prr : \n ");
    scanf("%d",&iLenght);

    iPrr = (int *)malloc(iLenght * sizeof (int)) ;

    printf("Enter the Values : \n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&iPrr[iCnt]);
    }

    iRet = AdditonOfArrayValues(iPrr,iLenght);

    printf("Addition of all Values in side the iPrr[] is : %d \n",iRet);

    free(iPrr);

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Prr :
    5
    Enter the Values :
    1
    1
    1
    1
    1
    Addition of all Values in side the iPrr[] is : 5


    Enter the lenght of Prr :
    3
    Enter the Values :
    10
    20
    50
    Addition of all Values in side the iPrr[] is : 80


    Enter the lenght of Prr :
    2
    Enter the Values :
    100
    200
    Addition of all Values in side the iPrr[] is : 300

*/