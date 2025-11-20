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
    printf("\n End of DisplayR \n");
}

int main()
{
    printf("Start of main \n");

    int iFrequency = 0 ;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    DisplayR(iFrequency);

    printf("End of main \n");

    return 0 ;
}

/*
    OUTPUT

    Start of main
    Enter the Frequency :
    3
    3       2       1
    End of DisplayR

    End of DisplayR

    End of DisplayR

    End of DisplayR
    End of main


    Start of main
    Enter the Frequency :
    5
    5       4       3       2       1
    End of DisplayR

    End of DisplayR

    End of DisplayR

    End of DisplayR

    End of DisplayR

    End of DisplayR
    End of main

*/