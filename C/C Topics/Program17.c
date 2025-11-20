////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                  Macro
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// it is a userdefined keyword with some value , by using #define we can create your own macro (Example : apple is macro with value 100)
#define apple 100 
#define banana 40 
#define orange 60

int main()
{
    printf("Rate of one dozen banana is : %d\n",banana);
    printf("Rate of two dozen banana is : %d\n",banana*2);

    int amount = 2 * (banana + orange) ;

    printf("Thes amount of 2 dozen banana and orange :%d\n",amount);

    return 0 ;
}

/*

Rate of one dozen banana is : 40
Rate of two dozen banana is : 80
Thes amount of 2 dozen banana and orange :200

*/