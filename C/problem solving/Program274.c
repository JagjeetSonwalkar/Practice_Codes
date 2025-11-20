/*

Display the pattern 
1   2   3   4  ........n

Get the Value from user. (Recursion)

*/

#include<stdio.h>

void Display(int iValue)
{
    static int iCnt = 1 ;

    if(iCnt <= iValue)
    {
        printf("%d\t",iCnt);
        iCnt++;

        Display(iValue);
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the frequecny : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0 ;
}

/*
    OUTPUT

    Enter the frequecny :
    3
    1       2       3
 
    Enter the frequecny :
    5
    1       2       3       4       5
    
    Enter the frequecny :
    10
    1       2       3       4       5       6       7       8       9       10

*/