////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  self referential structure                                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// self referential structure
struct DemoX
{
    int no ;
    struct DemoX *ptr ;
};

int main()
{
    // object of self referential structure 

    struct DemoX obj1 ;
    struct DemoX obj2 ;
    struct DemoX obj3 ;

    obj1.no = 10 ;
    obj1.ptr = &obj2;

    obj2.no = 110 ;
    obj2.ptr = &obj3;

    obj3.no = 100 ;
    obj3.ptr = NULL;

    printf("Size of struct DemoX is :%d\n",sizeof(obj1));       // 8

    return 0 ;
}