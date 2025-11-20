////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              Run time polymorphism using Pure Virtual keyword                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

// if a class contain any pure virtual function then we can't create the object of that class (So , we cant create object of Demo class)
class Demo
{
    public:
        int x ;
        int y ;

        int mul(int a , int b)  // concrete function    
        {
            return a*b ;
        }

        virtual int addition(int a , int b) = 0 ;   // Abstruct function 

        int div(int a , int b)  // concrete function
        {
            return a/b ;
        }
};
class DemoX : public Demo
{
    public:
        int a ;
        int b ;

        int mul(int a , int b)  // concrete function
        {
            return a*b ;
        }

        int addition(int a , int b) // concrete function
        {
            return a+b ;
        }
};

int main()
{
    int iRet = 0 ;

    // Demo dobj ; // Error // NA // Because In case of pure virtual function , the vtable of that class is incomplete , vtable is indirectly consider as a part object , due to which your object is incomplete
    DemoX xobj ;

    iRet = xobj.mul(10,20);
    cout<<iRet<<"\n";       iRet = 0 ;

    iRet = xobj.addition(10,20);
    cout<<iRet<<"\n";       iRet = 0 ;

    iRet = xobj.div(20,5);
    cout<<iRet<<"\n";       iRet = 0 ;

    return 0 ;
}

/*

200
30
4

*/