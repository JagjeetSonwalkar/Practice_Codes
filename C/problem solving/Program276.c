/*

Display the pattern 
n ....... 4     3   2   1

Get the Value from user. (Recursion)

*/

#include<stdio.h>

void DisplayR(int iValue)
{
    if(iValue != 0)
    {
        printf("%d\t",iValue);
        iValue--;

        DisplayR(iValue);
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    DisplayR(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the Frequency :
    5
    5       4       3       2       1
   
    Enter the Frequency :
    6
    6       5       4       3       2       1
   
    Enter the Frequency :
    3
    3       2       1
    
    Enter the Frequency :
    1
    1

*/