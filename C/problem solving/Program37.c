// Display sr no. & Jay Ganesh on console n times where take the n value form the user using iteration approch (while loop)

#include<stdio.h>

void Display (int iValue)
{
    int iCnt = 0 ;

    iCnt = 1 ;
    while(iCnt <= iValue)
    {
        printf("%d Jay Ganesh... \n",iCnt);
        iCnt++ ;
    }

}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the frequecny : \n ");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the frequecny :
    5
    1 Jay Ganesh...
    2 Jay Ganesh...
    3 Jay Ganesh...
    4 Jay Ganesh...
    5 Jay Ganesh...


    Enter the frequecny :
    2
    1 Jay Ganesh...
    2 Jay Ganesh...


    Enter the frequecny :
    10
    1 Jay Ganesh...
    2 Jay Ganesh...
    3 Jay Ganesh...
    4 Jay Ganesh...
    5 Jay Ganesh...
    6 Jay Ganesh...
    7 Jay Ganesh...
    8 Jay Ganesh...
    9 Jay Ganesh...
    10 Jay Ganesh...

*/