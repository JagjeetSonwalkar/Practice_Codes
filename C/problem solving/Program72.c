// Create the array and accept element from user and display all elements using function .

#include<stdio.h>

void DisplayBrr (int iAddress[])
{
    printf("%d\n",iAddress[0]);       
    printf("%d\n",iAddress[1]);         
    printf("%d\n",iAddress[2]);         
}

int main()
{
    int Brr[3] , iCnt = 0 ;

    printf("Enter the elements of Arr[] : \n");
    for(iCnt = 0 ; iCnt < 3 ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Elements of Brr[] is : \n");
    DisplayBrr(Brr);                                

}

/*
    OUTPUT

   Enter the elements of Arr[] :
    10
    20
    30
    Elements of Brr[] is :
    10
    20
    30


    Enter the elements of Arr[] :
    11
    22
    33
    Elements of Brr[] is :
    11
    22
    33


    Enter the elements of Arr[] :
    1
    2
    3
    Elements of Brr[] is :
    1
    2
    3

*/