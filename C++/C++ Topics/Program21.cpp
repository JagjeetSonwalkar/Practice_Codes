////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                             Constant Behaviour                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        int A ;
        int B ;

        Demo(int X1 , int X2)
        {
            A = X1 ;
            B = X2 ;
        }

        void fun()
        {
            cout<<A++<<"\n" ;
            cout<<B++<<"\n" ;
        }

        void gun() const
        {
            cout<<A<<"\n" ;
            cout<<B<<"\n" ;
        }
};

int main()
{
   Demo dobj(10,20) ;
   dobj.fun();
   dobj.gun();

   const Demo cobj(100,200);
//    cobj.fun();  // NA
   cobj.gun();

    return 0 ;
}

/*

10
20
11
21
100
200

*/