// Create the array and accept element from user and display all elements using function .

#include<stdio.h>

void DisplayArr (int *iAddress)
{
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < 4 ; iCnt++ )
    {
        printf("%d\t",*iAddress++);

        // OR

        /*
            printf("%d\t",*iAddress);
            iAddress++ ;
        */
    }
}

int main()
{
    int Arr[4] , iCnt = 0 ;

    printf("Enter the 4 elements of Arr[] : \n");
    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Elemets of Arr[] is : \n");
    DisplayArr(Arr);

    return 0 ;
}

/*
    OUTPUT

    Enter the 4 elements of Arr[] :
    1
    1
    1
    1
    Elemets of Arr[] is :
    1       1       1       1

    Enter the 4 elements of Arr[] :
    1
    2
    3
    4
    Elemets of Arr[] is :
    1       2       3       4

    Enter the 4 elements of Arr[] :
    101
    201
    301
    401
    Elemets of Arr[] is :
    101     201     301     401

*/