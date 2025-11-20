////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                   single-Dimensional array                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    // Member instialization list
    char Arr[5] = {'A','B','C','D','E'};         // Read : Arr is single-Dimensional array , which conatin 5 elements in it and each element is of type integer 
    
    // Member instialization list 
    float Brr[] = {10.25f,20.26f,30.27f};           

    // Member by member instialization techinque
    int Crr[4] ;                    

    Crr[0] = 100 ;
    Crr[1] = 200 ;
    Crr[2] = 300 ;
    Crr[3] = 400 ;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Arr[0] is : %c\n",Arr[0]);
    printf("Arr[1] is : %c\n",Arr[1]);
    printf("Arr[2] is : %c\n",Arr[2]);
    printf("Arr[3] is : %c\n",Arr[3]);
    printf("Arr[4] is : %c\n",Arr[4]);

    printf("\nBrr : \t");

    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        printf("%f\t",Brr[iCnt]);
    }

    printf("\nCrr : \t");

    iCnt = 0 ;

    while(iCnt < 4)
    {
        printf("%d\t",Crr[iCnt]);
        iCnt++ ;
    }


    return 0 ;
}

/*

Arr[0] is : A
Arr[1] is : B
Arr[2] is : C
Arr[3] is : D
Arr[4] is : E

Brr :   10.250000       20.260000       30.270000       9.758156
Crr :   100     200     300     400

*/