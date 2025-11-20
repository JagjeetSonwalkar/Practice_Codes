////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms ( Encapulation )                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    // public Access specfier
    public:
        int x ;         // characterstic's

        // Behaviours's
        void fun()
        {
            cout<<"Inside fun function.\n";
        }
    
    // private Access specfier
    private:
        int y ;         // characterstic's

    // protected Access specfier
    protected:
        int z ;         // characterstic's
};

int main()
{
    // Abstraction  : Hiding something from outside world
    //             Access specfier : To achieve the Abstraction we need Access specifer

    Demo dobj ;   // object of Demo class
    XDemo xdobj ;   // object of XDemo class

    dobj.fun();


  
    return 0 ;
}

/*

Inside fun function.
Size of class Demo is : 8

*/