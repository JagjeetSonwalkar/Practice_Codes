// Accept the value from the user and store it into array and display Frequency Repeated  number and accept that frequency number of array .

#include<stdio.h>
#include<stdlib.h>

int FrequencyOfNum (int iAddress[] , int iSize , int iTarget)
{
    int iCnt = 0 , iFrequency = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( iAddress[iCnt] == iTarget )
        {
            iFrequency++ ;
        }
    }
    return iFrequency ;
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 , iRet = 0 , iSearch = 0 ;

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

    printf("Enter the number that you want to search that is repeted number : \n");
    scanf("%d",&iSearch);

    iRet = FrequencyOfNum(iPrr , iLenght , iSearch);

    printf("The Frequent of Number of searched is : %d \n",iRet);

    free(iPrr);
    
}

/*
    OUTPUT

   Enter the lenght of you want :
    5
    Enter the Values :
    1
    2
    1
    3
    4
    The Value of Array :
    1      2       1       3       4
    Enter the number that you want to search that is repeted number :
    1
    The Frequent of Number of searched is : 2


    Enter the lenght of you want :
    5
    Enter the Values :
    2
    4
    6
    8
    4
    The Value of Array :
    2      4       6       8       4
    Enter the number that you want to search that is repeted number :
    8
    The Frequent of Number of searched is : 1


    Enter the lenght of you want :
    5
    Enter the Values :
    1
    0
    1
    0
    1
    The Value of Array :
    1      0       1       0       1
    Enter the number that you want to search that is repeted number :
    1
    The Frequent of Number of searched is : 3


    Enter the lenght of you want :
    5
    Enter the Values :
    2
    2
    2
    1
    2
    The Value of Array :
    2      2       2       1       2
    Enter the number that you want to search that is repeted number :
    2
    The Frequent of Number of searched is : 4
        

*/