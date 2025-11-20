// Display the number from n to 0 where n value take from user with the help of iteration.

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0 ;

    iCnt = iValue ;
    while(iCnt >= 0)
    {
        printf("%d \n",iCnt);
        iCnt-- ;
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the frequency : \n ");
    scanf("%d",&iFrequency);

    Display(iFrequency);

}

/*
    OUTPUT

    Enter the frequency :
    5
    5
    4
    3
    2
    1
    0


    Enter the frequency :
    10
    10
    9
    8
    7
    6
    5
    4
    3
    2
    1
    0


    Enter the frequency :
    12
    12
    11
    10
    9
    8
    7
    6
    5
    4
    3
    2
    1
    0

*/