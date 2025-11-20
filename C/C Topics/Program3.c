////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                          Sizeof() operator                                                       ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char cBloodGroup = '\0' ;   // 1  byte
    int iRollNumber = 0 ;       // 4  bytes
    float fSalary = 0.0f ;      // 4  bytes
    double dSpeedofCar = 0.0 ;  // 8  bytes

    printf("%d\n",sizeof(bWin));
    printf("%d\n",sizeof(cBloodGroup));
    printf("%d\n",sizeof(iRollNumber));
    printf("%d\n",sizeof(fSalary));
    printf("%d\n",sizeof(dSpeedofCar));

    int Arr[10] = {0} ;         // 40  bytes (int * Arr[10] i.e, 4*10 = 40 )

    printf("%d\n",sizeof(Arr));

    int *ptr = NULL ;       // 4 or 8 bytes
    
    printf("%d\n",sizeof(*ptr));
   
    return 0 ;
}

/*

1
4
4
8
40
4

*/