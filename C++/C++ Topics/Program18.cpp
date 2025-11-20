////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              Run time polymorphism using Virtual keyword                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

// if a class contain atlest 1 virual function then the first 8bytes get reserved for the vptr (virtual pointer) 
// if function is not virtual then it will not get memory inside virtual table 
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

        virtual void fun()
        {
            cout<<"Inside Demo fun()\n";
        }

        virtual void sun()
        {
            cout<<"Inside Demo sun()\n";
            cout<<"Value of x : "<<x<<"\n";
        }

        void gun()
        {
            cout<<"Inside Demo gun()\n";
            cout<<"Value of y : "<<y<<"\n";
        }

        virtual void run()
        {
            cout<<"Inside Demo run()\n";
        }
};

// optional to write the virtual keyword in derived class for redefineed function which is allready a virual function in base class 
class DemoX : public Demo
{
    public:
        int a ;

        DemoX()
        {
            a = 111 ;
        }

        virtual void bun()
        {
            cout<<"Value of DemoX a : "<<a<<"\n";
        }

        virtual void fun()  //  Redefination
        {
            cout<<"Inside DemoX fun()\n";
        }

        virtual void sun()  //  Redefination
        {
            cout<<"Inside DemoX sun()\n";
            cout<<"Value of a : "<<a<<"\n";
        }

        void run()  //  Redefination
        {
            cout<<"Inside DemoX run()\n";
        }
};

int main()
{
    Demo dobj ;
    DemoX xobj ;

    Demo *dptr = NULL ;
    
    dptr = &xobj ;          // up casting

    cout<<"Size of dobj is :"<<sizeof(dobj)<<"\n";
    cout<<"Size of xobj is :"<<sizeof(xobj)<<"\n";

    // dptr->bun();            // Error    // NA
    dptr->fun();
    dptr->sun();
    dptr->gun();  
    dptr->run();

    return 0 ;
}

/*

Inside DemoX fun()
Inside DemoX sun()
Value of a : 111
Inside Demo gun()
Value of y : 20
Inside DemoX run()

*/