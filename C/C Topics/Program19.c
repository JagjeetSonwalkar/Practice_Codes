////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                 Generic pointer
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    // varaible's
    char x = 'X' ;
    int a = 10 ;
    float b = 10.10f ;
    double c = 10.010101 ;

    // Specific pointer 
    char *xptr = &x ;
    int *aptr = &a ;
    float *bptr = &b ;
    double *cptr = &c ;

    // Generic pointer

    void *vptr = NULL ;

    vptr = &x ;

    // printf("Value of 'x' is :  %c\n",*vptr);        // Error
    printf("Value of 'x' is :  %c\n",*(char*)vptr);    // Typecasting : *(char*)vptr

    vptr = &a ;

    // printf("Value of 'a' is :  %d\n",*vptr);    // Error 
    printf("Value of 'a' is :  %d\n",*(int*)vptr);    // Typecasting : *(char*)vptr

    return 0 ;
}
