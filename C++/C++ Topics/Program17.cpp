////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              casting  && Redefination                  
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
            x = 10 ;
            y = 20 ;
        }

        void fun()
        {
            cout<<"Inside Demo fun()\n";
        }

        void sun()
        {
            cout<<"Inside Demo sun()\n";
            cout<<"Value of x : "<<x<<"\n";
        }

        void gun()
        {
            cout<<"Inside Demo gun()\n";
            cout<<"Value of y : "<<y<<"\n";
        }
};

class DemoX : public Demo
{
    public:
        int a ;

        DemoX()
        {
            a = 111 ;
        }

        void bun()
        {
            cout<<"Value of DemoX a : "<<a<<"\n";
        }

        void fun()  //  Redefination
        {
            cout<<"Inside DemoX fun()\n";
        }

        void sun()  //  Redefination
        {
            cout<<"Inside DemoX sun()\n";
            cout<<"Value of x : "<<x<<"\n";
        }
};

int main()
{
    Demo dobj ;
    DemoX xobj ;

    Demo *dptr = NULL ;
    DemoX *xptr = NULL ;

    // no casting
    dptr = &dobj ;
    xptr = &xobj ;
    
    dptr = &xobj ;          // up casting
    // In case of upcasting the compiler decide which function should be call at a time of compliation by checking type of pointer

    // xptr = &dobj ;          // down casting     // NA

    return 0 ;
}

/*

10
20
30

*/