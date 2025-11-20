/*

Display the pattern using Recursion
*    
*   
*   
* 

*/

#include<stdio.h>

void DisplayR()            // Display Recursion
{
    static int iCnt = 1 ;          // Storage class : static

    if(iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    printf("Inside main() \n");

    DisplayR();

    printf("End of main() \n");

    return 0 ;
}

/*
    OUTPUT

    Inside main()
    *
    *
    *
    *
    End of main()

*/