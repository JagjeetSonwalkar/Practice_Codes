////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                             Constant characterstic's                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        int A ;
        int B ;
        const int C ;
        const int D ;

        /*
        If we intilize the constant characteristics inside the constructor then the complier will generate error , because before entring into the construcor memory for an objext is already allocated

        We cannot intilize the characterstics immendiately inside the class Because at a time of class declartion there will be no memory allocation

        Demo()
        {
            A = 10 ;
            B = 20 ;
            C = 30 ;
            D = 40 ;
        }

            OR

        Demo(int no1 , int no2 , int no3 , int no4)
        {
            A = no1 ;
            B = no2 ;
            C = no3 ;
            D = no4 ;
        }

        To avoid these we use the concept of intilization list which is write immediately after the constructor to intilize the constant characterstics
        */

        Demo() : C(30) , D(40)
        {
            A = 10 ;
            B = 20 ;
        }

        Demo(int no1 , int no2 , int no3 , int no4) : C(no3) , D(no4)
        {
            A = no1 ;
            B = no2 ;
        }
};

int main()
{
    Demo xobj ;

    Demo dobj(10,20,30,40) ;

    return 0 ;
}