////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  static & Dynamic memory allocation
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h> // standard library

int main()
{
    // static memory allocation
    int Brr[] = {10,20,30,40,50} ;

    // Dynamic memory allocation
    int *Arr = NULL ;
    Arr = (int *)malloc(5 * sizeof(int));             // malloc

    Arr = (int *)realloc(Arr ,10 * sizeof(int));      // realloc (As increase the memory) 

    Arr = (int *)realloc(Arr ,2 * sizeof(int));       // realloc (As decrease the memory) 

    Arr = (int *)realloc(NULL , sizeof(int));         // realloc (it will work like malloc if we pass the first parameter as NULL) 

    Arr = (int *)realloc(Arr , 0);                    // realloc (it will work like free function)


    free(Arr);      // deallocate the memory

    return 0 ;
}
