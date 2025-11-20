// get the number from the user and split that number into digits .

#include<stdio.h>

void Display (int iValue)
{
    int iDigit = 0 ;

    while(iValue > 0)
    {
        iDigit = iValue % 10 ;

        printf("%d \t",iDigit);

        iValue = iValue / 10 ;
    }
}

int main()
{
    int iNum = 0 ;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    Display(iNum);

    return 0 ;
}


/*
    OUTPUT

    Enter the number :
    321
    1       2       3

    Enter the number :
    142536
    6       3       5       2       4       1

    Enter the number :
    1245
    5       4       2       1

    Enter the number :
    12456
    6       5       4       2       1

    Enter the number :
    11223344
    4       4       3       3       2       2       1       1

    Enter the number :
    44332211
    1       1       2       2       3       3       4       4

    Enter the number :
    5544332211                                                                 (ISSUE for this number)
    5       1       9       4       6       3       9       4       2       1   

    Enter the number :
    -123            

*/