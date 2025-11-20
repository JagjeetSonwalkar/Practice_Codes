////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                   Datatype modifier                                                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char div = 'A' ;
    int x = 10 ;
    float num = 1.49 ;
    double y = 2.00 ;

    printf("Size of normal variable is : %d,%d,%d,%d",sizeof(div),sizeof(x),sizeof(num),sizeof(y));    printf("\n");

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Short and long Datatypes modifier

    short sdiv = 'A' ;      //  short char sdiv = 'A' ; (*dont use like this)
    short int sx = 10 ;
    short  snum = 1.49f ;   // short float snum = 1.49f ; (*dont use like this)
    short  sy = 2.00 ;      // short long sy = 2.00 ; (*dont use like this)

    printf("Size of Short Datatype modifier variable is : %d,%d,%d,%d",sizeof(sdiv),sizeof(sx),sizeof(snum),sizeof(sy));    printf("\n");

    long ldiv = 'A' ;   // long char ldiv = 'A' ;   (*dont use like this)
    long long int lx = 10 ; 
    long lnum = 1.49 ;  // long float lnum = 1.49 ; (*dont use like this)
    long double ly = 2.00 ;

    printf("Size of long Datatype modifier variable is : %d,%d,%d,%d",sizeof(ldiv),sizeof(lx),sizeof(lnum),sizeof(ly));    printf("\n");

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char hit = 'f';
    int run = 6 ;
    float over = 2.5 ;
    double doo = 2.3232 ;

    printf("Size of normal variable without signed and unsigned is : %d,%d,%d,%d",sizeof(hit),sizeof(run),sizeof(over),sizeof(doo));    printf("\n");

    // signed and unSigned (by default signed) {Signed vairable can store +ve and -ve value , UnSigned vairable can store only +ve value}

    signed char shit = 'f';
    signed int srun = -5 ;
    signed sover = 2.5f ;  //  signed float sover = 2.5 ; (*dont use like this)
    signed sdoo = -2.3232 ;  //  signed double sdoo = -2.3232 ; (*dont use like this)

    printf("Size of normal variable without signed and unsigned is : %d,%d,%d,%d",sizeof(shit),sizeof(srun),sizeof(sover),sizeof(sdoo));    printf("\n");

    unsigned char unhit = 'f';
    unsigned int unrun = 6 ;
    unsigned unover = 2.5f ;       //  unsigned float unover = 2.5 ; (*dont use like this)
    unsigned undoo = 2.3232 ;    // unsigned double undoo = 2.3232 ; (*dont use like this)

    printf("Size of normal variable without signed and unsigned is : %d,%d,%d,%d",sizeof(unhit),sizeof(unrun),sizeof(unover),sizeof(undoo));    printf("\n");

    return 0 ;
}

/*

Size of normal variable is : 1,4,4,8
Size of Short Datatype modifier variable is : 2,2,2,2
Size of long Datatype modifier variable is : 4,8,4,12
Size of normal variable without signed and unsigned is : 1,4,4,8
Size of normal variable without signed and unsigned is : 1,4,4,4
Size of normal variable without signed and unsigned is : 1,4,4,4

*/