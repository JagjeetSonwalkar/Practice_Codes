////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                          Addressof operator or & operator                                                       ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool bWin = false ;       
    char cBloodGroup = '\0' ;   
    int iRollNumber = 0 ;       
    float fSalary = 0.0f ;      
    double dSpeedofCar = 0.0 ;  

    printf("%d\n",&bWin);
    printf("%d\n",&cBloodGroup);
    printf("%d\n",&iRollNumber);
    printf("%d\n",&fSalary);
    printf("%d\n",&dSpeedofCar);

    int Arr[10] = {0} ;        

    printf("%d\n",&Arr); 
    printf("%d\n",Arr);

    int *ptr = NULL ;       
    
    printf("%d\n",&(*ptr));
    printf("%d\n",&ptr);
   
    return 0 ;
}

/*

6356767
6356766
6356760
6356756
6356744
6356704
6356704
0
6356700

*/