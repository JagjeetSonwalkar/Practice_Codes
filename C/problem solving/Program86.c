// Accept the value from the user and store it into array and display Sum of odd number of array .

#include<stdio.h>
#include<stdlib.h>

int SumOfOddNum (int iAddress[] , int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( (iAddress[iCnt] ) % 2 == 1)
        {
            iSum = iSum + iAddress[iCnt] ;
        }
    }
    return iSum ;
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

    iRet = SumOfOddNum (iPrr , iLenght);

    printf("The Sum of Odd number in Array is : %d \n",iRet);

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
    The Sum of Odd number in Array is : 4


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
    The Sum of Odd number in Array is : 9
        

*/