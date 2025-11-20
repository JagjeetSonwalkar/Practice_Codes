////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  Specific pointer                                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    ////////////////////////////////////////////////// Pointer points to primitive datatype//////////////////////////////////////////////////////

    char x = 'J' ;
    int a = 10 ;
    float b = 20.25 ;
    double c = 25.102003 ;

    // size of pointer is always unsingned long
    char *xptr = &x ;
    int *aptr = &a ;
    float *bptr = &b ;
    double *cptr = &c ;

    printf("%d\n",xptr);    // gets the address of x
    printf("%d\n",aptr);    // gets the address of a
    printf("%d\n",bptr);    // gets the address of b
    printf("%d\n",cptr);    // gets the address of c

    printf("%c\n",*xptr);   // gets hte value of x
    printf("%d\n",*aptr);   // gets hte value of a
    printf("%f\n",*bptr);   // gets hte value of b
    printf("%lf\n",*cptr);  // gets hte value of c

    printf("Size of varabile is %d,%d,%d,%d",sizeof(x),sizeof(a),sizeof(b),sizeof(c));              printf("\n");

    printf("Size of pointer varabile is %d,%d,%d,%d",sizeof(xptr),sizeof(aptr),sizeof(bptr),sizeof(cptr));               printf("\n");

////////////////////////////////////////////////// Pointer points to Derived datatype//////////////////////////////////////////////////////

    // pointer to pointer 
    char **xpptr = &xptr;
    int **apptr = &aptr ;
    float **bpptr = &bptr ;
    double **cpptr = &cptr ;

    // pointer points to array
    int Arr[4] = {10,20,30,49};

    int *iptr1 = &Arr[0];
    int *iptr2 = &Arr[0];
    int *iptr3 = &Arr[0];
    int *iptr4 = &Arr[0];
    

    return 0 ;
}

/*

6356751
6356744
6356740
6356728
J
10
20.250000
25.102003
Size of varabile is 1,4,4,8
Size of pointer varabile is 4,4,4,4

*/