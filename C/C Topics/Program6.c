////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                User Defined Function                                             ////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// void function return no value 
void Display()
{
    printf("Inside the Display function.\n");
}

// if the function is going to return  the 'integer/float/Double/Charater' value then we have to specifiy 'integer/float/Double/Charater' 
// for example(return value of function is integer and the return value of iSum is also integer)

// Function name shouble revelant 

// Parameter of function : if the function is called  with some paramater then the function should accept the values inside the paramter.

// Return_Value     Function_Name       Parameter_of_Function
    int             Addition            (int iValue1 , int iValue2)
    {
        int iSum = 0 ;

        iSum = iValue1 + iValue2 ;

        return iSum ;
    }

// Read : Addition is name of function which accept 2 paramter first paramter is of interger type and Second parameter is of also integer type and the function will return integer 

int main()
{    
    Display();  // call of Display function

    int iNo1 = 11 ;
    int iNo2 = 10 ;
    int iRet = 0 ;

    iRet = Addition(iNo1,iNo2); // called the Addition function and catch the return value of Addition function inside iRet varaible

    printf("Addition of two values are : %d\n",iRet);
    
   
    return 0 ;
}

/*

Inside the Display function.
Addition of two values are : 21

*/