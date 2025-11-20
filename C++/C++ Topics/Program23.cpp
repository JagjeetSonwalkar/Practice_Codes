////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                             using namespace std ;      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

// ***name means nav ani space means memory allocated for that name
using namespace std ;

namespace okay
{
    class Demo
    {
        public:
            int A ;
            int B ;

            Demo(int Ax , int Bx)
            {
                A = Ax ;
                B = Bx ;
            }

            void display()
            {
                cout<<"Sum of two value is :"<<A+B<<"\n";
            }
    };
}

int main()
{
    using namespace okay;

    Demo dobj(10,20) ;
    dobj.display();

/////////////////////////////////////////////////////////        OR                        //////////////////////////////////////////////////////

    okay::Demo dobj(50,50);
    dobj.display();

    return 0 ;
}

/*

Sum of two value is :30

*/