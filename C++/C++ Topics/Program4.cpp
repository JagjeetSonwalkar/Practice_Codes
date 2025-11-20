////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms ( Encapulation )                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        // characterstic's
        int x ;
        int y ;

        // Behaviours's
        void fun()
        {
            cout<<"Inside fun function.\n";
        }
};

int main()
{
    // Encapulation : binding characterstic's & Behaviour's

    Demo dobj ;   // object of Demo class

    // To instilize the characterstic's of the class we have to use dot(.) operator
    dobj.x = 10 ;
    dobj.y = 11 ;

    // To instilize the Behaviour's of the class we have to use dot(.) operator
    dobj.fun() ;

    cout<<"Size of class Demo is : "<<sizeof(dobj)<<"\n";
  
    return 0 ;
}

/*

Inside fun function.
Size of class Demo is : 8

*/