////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              friend     (As a function)                       
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    private:
        int i ;
        
    protected: 
        int j ;

    public:
        int k ;

        Demo()
        {
            i = 10 ;
            j = 20 ;
            k = 30 ;
        }

        friend void fun();
};

void fun()
{
    Demo dobj ;             // object of Demo class
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";
}


int main()
{
   fun() ;          // call of fun function

    return 0 ;
}

/*

10
20
30

*/