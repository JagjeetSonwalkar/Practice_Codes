////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              friend    (As a class)                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class hello
{
    public:
        void fun() ;
};

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

        friend void hello :: fun();
};

void hello::fun()
{
    Demo dobj ;             // object of Demo class
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.k<<"\n";
}


int main()
{
    hello hobj ;
    
    hobj.fun() ;          // call of fun function

    return 0 ;
}

/*

10
20
30

*/