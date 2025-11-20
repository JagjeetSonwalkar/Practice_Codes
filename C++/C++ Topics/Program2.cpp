////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////       All datatypes of C++ with default values                                                     ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

// Function (We cant define the function in main function)
void fun()
{
    int i = 0 ; 
    int j = 0 ;
    int iSum = 0 ;

    i = 10 ;
    j = 11 ;

    iSum = i+j ;

    cout<<iSum;
}

int main()
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Premitive Datatypes :
    // The datatype which is created by the language creator

    bool bRun = false ;         // boolean data type 
    char cBloodGroup = '\0' ;   // character data type 
    int iRollNumber = 0 ;       // Integer data type 
    float fSalary = 0.0f ;      // folating point data type  (7 decimal digits precision) 
    double dSpeedofCar = 0.0 ;  // double data type (15 decimal digits precision) 
    // void vNo ;                  // we cannot create the variable of void data type due to there is mo memory allocation for void

    //(Read : iRollNumber is variable of type integer initialized with the value 0)

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Derived Datatypes :
    // The data type which is created from any other datatype

    // Reference (Another name to the existing varaible)

    int a = 10 ;
    int &aa = a ;

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

   // function
    fun();      // call of function
    

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // User Defined Datatypes :
    // The datatype which is created by programmer as per requirement

    // class

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