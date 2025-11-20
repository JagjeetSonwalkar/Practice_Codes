/*

Display the pattern 
n ....... 4     3   2   1
and Sum of that value if input is 4 
then sum 4 + 3 + 2 + 1 = 10

Get the Value from user. 

*/

#include<stdio.h>

int Display(int iValue)
{
    int iSum = 0 ;

    while(iValue != 0)
    {
        printf("%d\t",iValue);
        iSum = iSum + iValue ;
        iValue--;
    }
    printf("\n");
    return iSum ;
}

int main()
{
    int iFrequency = 0 , iRet = 0 ;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    iRet = Display(iFrequency);

    printf("Sum of all value is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Frequency :
    3
    3       2       1
    Sum of all value is : 6

 
    Enter the Frequency :
    5
    5       4       3       2       1
    Sum of all value is : 15

    
    Enter the Frequency :
    20
    20      19      18      17      16      15      14      13      12      11      10      9       8       7       6      54       3       2       1
    Sum of all value is : 210

*/