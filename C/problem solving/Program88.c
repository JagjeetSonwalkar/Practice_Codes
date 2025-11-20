// Accept the value from the user and store it into array and display Frequency Repeated  number i.e 10 of array .

#include<stdio.h>
#include<stdlib.h>

int FrequencyOfNum (int iAddress[] , int iSize)
{
    int iCnt = 0 , iFrequency = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( iAddress[iCnt] == 10 )
        {
            iFrequency++ ;
        }
    }
    return iFrequency ;
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 , iRet = 0 ;

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

    iRet = FrequencyOfNum(iPrr , iLenght);

    printf("The Frequent of 10 is : %d \n",iRet);

    free(iPrr);
    
}

/*
    OUTPUT

    Enter the lenght of you want :
    3
    Enter the Values :
    10
    20
    30
    The Value of Array :
    10     20      30
    The Frequent of 10 is : 1


    Enter the lenght of you want :
    5
    Enter the Values :
    10
    20
    10
    30
    40
    The Value of Array :
    10     20      10      30      40
    The Frequent of 10 is : 2

    Enter the lenght of you want :
    3
    Enter the Values :
    1
    2
    30
    The Value of Array :
    1      2       30
    The Frequent of 10 is : 0
        

*/