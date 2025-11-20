/*

Display the pattern 
n ....... 4     3   2   1

Get the Value from user. 

*/

#include<stdio.h>

void Display(int iValue)
{
    while(iValue != 0)
    {
        printf("%d\t",iValue);
        iValue--;
    }
}

int main()
{
    int iFrequency = 0 ;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0 ;
}

/*
    OUTPUT

    Enter the Frequency :
    5
    5       4       3       2       1
  
    Enter the Frequency :
    10
    10      9       8       7       6       5       4       3       2       1
   
    Enter the Frequency :
    3
    3       2       1
    
    Enter the Frequency :
    1
    1

*/