////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms ( Special functions : Constructor & Destructor )                                     
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
        Demo(int A , int B)
        {
            cout<<"Inside Constructor.\n";
            x = A ;
            y = B ;
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
    // Encapulation : binding characterstic's & Behaviour's

    Demo dobj(10,20) ;   // object of Demo class

    // To instilize the Behaviour's of the class we have to use dot(.) operator
    dobj.fun() ;

    cout<<"Size of class Demo is : "<<sizeof(dobj)<<"\n";
  
    return 0 ;
}

/*

Inside Constructor.
Inside fun function.
Size of class Demo is : 8
Inside Destructor.

*/