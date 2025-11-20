////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms (single level inheritance)      need atleast 2 class's                                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        int x ;
        int y ;

        Demo()
        {
            printf("Inside Demo Constructor\n");
            x =10 ;
            y = 20 ;
        }

        ~Demo()
        {
            printf("Inside Demo Destructor \n");
        }

        void fun()
        {
            printf("Inisde the fun()\n");
        }
};

class DemoX : public Demo       // single level inheritance
{
    public:
        int m ;
        int n ;

        DemoX()
        {
            printf("Inside DemoX Constructor\n");
        }

        ~DemoX()
        {
            printf("Inside DemoX Destructor \n");
        }

        void done()
        {
            printf("Inside done()\n");
        }
};

int main()
{
    float fRet = 0 ;
    
    // Demo dobj ;
    // dobj.fun();

    DemoX xobj ;

    xobj.done() ;
    xobj.fun() ;
  
    return 0 ;
}

/*

Inside Demo Constructor
Inside DemoX Constructor
Inside done()
Inisde the fun()
Inside DemoX Destructor
Inside Demo Destructor

*/