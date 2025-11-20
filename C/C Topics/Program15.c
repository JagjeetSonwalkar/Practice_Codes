////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  nested structure
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// nested structure
struct DemoA 
{
    char ch ;
    int no ;
};

struct DemoB
{
    int xno ;
    struct DemoA objA ;
    char xch ;
};

int main()
{
    // object of nested structure 
    struct DemoA objA ;
    struct DemoB objB ;

    objB.xno = 25 ;
    objB.objA.no = 111 ;
    objB.objA.ch = 'A' ;
    objB.xch = 'B';
    
    printf("Size of struct DemoA is :%d\n",sizeof(objA));       // 8
    printf("Size of struct DemoB is :%d\n",sizeof(objB));       // 16


    return 0 ;
}