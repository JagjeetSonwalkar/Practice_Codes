////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms (multipal level inheritance)        need atleast 3 class's                            
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

class DemoX 
{
    public:
        int m ;
        int n ;

        DemoX()
        {
            printf("Inside DemoX Constructor\n");
            m = 20 ;
            n= 30 ;
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

class Derived : public Demo , public DemoX          // multipal level inheritance
{
    public:
        int a ;
        int b ;

        Derived()
        {
            printf("Inside Derived Constructor\n");
            a = 0 ;
            b = 0 ; 
        }

        ~Derived()
        {
            printf("Inside Derived Destructor\n");
        }

        void gun()
        {
            printf("Inside gun() \n");
        }


};

int main()
{
    float fRet = 0 ;
    
    // Demo dobj ;

    // DemoX xobj ;

    Derived ddobj ;

    ddobj.gun() ;
    ddobj.done() ;
    ddobj.fun() ;
  
    return 0 ;
}

/*

Inside Demo Constructor
Inside DemoX Constructor
Inside Derived Constructor
Inside gun()
Inside done()
Inisde the fun()
Inside Derived Destructor
Inside DemoX Destructor
Inside Demo Destructor

*/