/*

Display the pattern 
n ....... 4     3   2   1
and Sum of that value if input is 4 
then sum 4 + 3 + 2 + 1 = 10

Get the Value from user. (Recursion)

*/

#include<stdio.h>

int DisplayR(int iValue)
{
    static int iSum = 0 ;

    if(iValue != 0)
    {
        printf("%d\t",iValue);
        iSum = iSum + iValue ;
        iValue--;

        DisplayR(iValue);
    }
    return iSum ;
}

int main()
{
    int iFrequency = 0 , iRet = 0 ;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    iRet = DisplayR(iFrequency);

    printf("\n");

    printf("Sum of all value is : %d \n",iRet);

    return 0 ;
}

/*
    OUTPUT

    Enter the Frequency :
    5
    5       4       3       2       1
    Sum of all value is : 15

    C:\Users\DELL\OneDrive\Desktop\Logic>myexe
    Enter the Frequency :
    3
    3       2       1
    Sum of all value is : 6

    C:\Users\DELL\OneDrive\Desktop\Logic>myexe
    Enter the Frequency :
    10
    10      9       8       7       6       5       4       3       2       1
    Sum of all value is : 55

*/