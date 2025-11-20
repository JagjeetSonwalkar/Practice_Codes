////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                array of character(*String)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int main()
{
    // member by member intilization list of array 
    char name[] = {'S','u','n','\0'};       // '\0' is special symbol with indicate end of string

    /*
        When we calculate the length of string , we dont need to include the '\0' as character.
        But , when we calculate the size of string , we have to count the memory for '\0' also.
    */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // intilize the string in double cotes ""  and there is no need to mention '\0' at the end of string beacause it added impliclity
    char name1[] = "Time is money !";

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Travelsing the string

    int iCnt = 0 ;

    while(name[iCnt] != '\0')
    {
        printf("%c",name[iCnt]);
        iCnt++ ;
    }
    printf("\n");

    iCnt = 0 ;
    
    while(name1[iCnt] != '\0')
    {
        printf("%c",name1[iCnt]);
        iCnt++ ;
    }
    printf("\n");

    return 0 ;
}

/*

Sun
Time is money !

*/
