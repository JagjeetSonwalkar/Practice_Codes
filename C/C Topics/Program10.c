////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                   2_Dimensional array                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    // 2_Dimensional array   
    int arr[2][3] = {10,20,30,40,50,60}; 
    // Read : arr is a 2_Dimensional array   , which conatin 2 one_dimensional arrays and 3 two dimenaional arrays and each element is of interger 

    int i = 0 , j = 0 ;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}

/*

10      20      30
40      50      60

*/