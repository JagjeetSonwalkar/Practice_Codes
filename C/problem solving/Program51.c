// For the given number , slipt that numbers into digit's .

#include<stdio.h>

int main()
{
    int iNum = 0 , iDigit = 0 ;

    iNum = 78945 ;

    while(iNum != 0)
    {
        iDigit = iNum % 10 ;
        printf("%d \t",iDigit);
        iNum = iNum / 10 ;
    }
    
    return 0 ;
}


/*
    OUTPUT

    5       4       9       8       7        (Reverse order)

*/