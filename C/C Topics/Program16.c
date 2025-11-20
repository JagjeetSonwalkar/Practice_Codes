////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  union
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

union Demo
{
    int no ;
    char bg ;
    double locat ;
};

int main()
{
    union Demo uobj ;

    // size will be get as , The largest member of union == size of struct union i.e, 8 Beacuse double is the larget member 
    printf("Size of union Demo is :%d\n",sizeof(uobj)); 

    uobj.no = 12 ;
    printf("uobj.no : %d\n",uobj.no);

    // over-Writing
    uobj.bg = 'A' ;
    printf("uobj.bg : %c\n",uobj.bg);

    // over-Writing
    uobj.locat = 12.2525 ;
    printf("uobj.locat : %lf\n",uobj.locat);

    return 0 ;
}

/*

Size of union Demo is :8
uobj.no : 12
uobj.bg : A
uobj.locat : 12.252500

*/