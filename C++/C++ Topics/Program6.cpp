////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms ( Types of Constructor)                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        // characterstic's
        int x ;
        int y ;

        // if we want to define constructor then the name of constructor and the name of class , should be same
        // Constructor : it is used to allocate the resources

        // Default Constructor
        Demo()
        {
            cout<<"Inside Default Constructor.\n";
            x = 0 ;
            y = 0 ;
        }

        // Parameterised Constructor
        Demo(int A , int B)
        {
            cout<<"Inside Parameterised Constructor.\n";
            x = A ;
            y = B ;
        }

        // Copy Constructor
        Demo(Demo &ref)
        {
            cout<<"Inside Copy Constructor.\n";
            x = ref.x ;
            y = ref.y ;
        }

        // Destructor : it is used to Deallocate the resources
        ~Demo()
        {
            cout<<"Inside Destructor.\n";
            // Deallocate the resources
        }

        // Behaviours's
        void fun()
        {
            cout<<"Inside fun function.\n";
        }
};

int main()
{
    cout<<"Inside the main function\n";
    // Encapulation : binding characterstic's & Behaviour's

    // object of Demo class
    Demo dobjd ;
    Demo dobjp(10,20) ;   
    Demo dobjc(dobjp) ;  

    dobjd.fun();
    dobjp.fun();
    dobjc.fun();

    cout<<"End of main function\n";
  
    return 0 ;
}

/*

Inside the main function
Inside Default Constructor.
Inside Parameterised Constructor.
Inside Copy Constructor.
Inside fun function.
Inside fun function.
Inside fun function.
End of main function
Inside Destructor.
Inside Destructor.
Inside Destructor.

*/