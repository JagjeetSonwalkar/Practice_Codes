////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////       All datatypes of C with default values                                                     ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int main()
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Premitive Datatypes :
    // The datatype which is created by the language creator

    char cBloodGroup = '\0' ;   // character data type (Format Specifier : %c )
    int iRollNumber = 0 ;       // Integer data type (Format Specifier : %d )
    float fSalary = 0.0f ;      // folating point data type  (7 decimal digits precision) (Format Specifier : %f )
    double dSpeedofCar = 0.0 ;  // double data type (15 decimal digits precision) (Format Specifier : %lf )
    // void vNo ;                  // we cannot create the variable of void data type due to there is mo memory allocation for void

    //(Read : iRollNumber is variable of type integer initialized with the value 0)

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Derived Datatypes :
    // The data type which is created from any other datatype

    // Array
    int Arr1[10] = {0} ;
    char Arr2[20] = {'\0'} ;
    float Arr3[20] = {0.0f} ;
    double Arr4[10] = {0.0} ;

    // Pointer
    int *ptr1 = NULL ;
    char *ptr2 = NULL ;
    float *ptr3 = NULL ;
    double *ptr4 = NULL ;

    // Function
    void functionName1()
    {}
    int functionName2()
    {}
    float functionName3()
    {}
    double functionName4()
    {}
    char functionName5()
    {}

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // User Defined Datatypes :
    // The datatype which is created by programmer as per requirement

    // Structure
    struct node
    {
        int data ;
        char name[10] ;
    };

    // Union
    union info
    {
        int iPhoneNo ;
        char Address[20] ;
    };

    // Enmeration

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0 ;
}