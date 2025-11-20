// Accept the value from the user and store it into array and display element is present or not .

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int search (int iAddress[] , int iSize , int iPresent)
{
    int iCnt = 0 , iFrequency = 0  ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( iAddress[iCnt] == iPresent )
        {
            break ;
        }
    }
    if(iCnt == iSize)
    {
        return false ;
    }
    else
    {
        return true ;
    }
}

int main()
{
    int iLenght = 0 , *iPrr = NULL , iCnt = 0 , iSearch = 0  ;
    bool bRet = false ;

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

    printf("Enter the number that you want to search that is present or not : \n");
    scanf("%d",&iSearch);

    bRet = search (iPrr , iLenght , iSearch);

    if(bRet == true)
    {
        printf("The Number is Present. \n");
    }
    else
    {
        printf("The Number is NOT Present !!! \n");
    }

    free(iPrr);
    
}

/*
    OUTPUT

   Enter the lenght of you want :
 5
Enter the Values :
10
20
30
50
1
The Value of Array :
 10     20      30      50      1
Enter the number that you want to search that is present or not :
30
The Number is Present.

C:\Users\DELL\OneDrive\Desktop\Logic>myexe
Enter the lenght of you want :
 5
Enter the Values :
1
2
3
2
4
The Value of Array :
 1      2       3       2       4
Enter the number that you want to search that is present or not :
8
The Number is NOT Present !!!
        

*/