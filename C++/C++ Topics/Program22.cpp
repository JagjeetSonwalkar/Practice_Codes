////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                             Compile time polymorphism ( Operator overloading )       
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        int iNo1 ;
        int iNo2 ;

        Demo(int A , int B)
        {
            iNo1 = A ;
            iNo2 = B ;
        }
};

Demo operator + (Demo e1 , Demo e2)
{
    return Demo(e1.iNo1 + e2.iNo1 , e1.iNo2 + e2.iNo2 );
}

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);

    Demo obj3(0,0);

    obj3 = obj1 + obj2 ;
    cout<<obj3.iNo1<<"\t"<<obj3.iNo2<<"\n";     // 40      60
   

    return 0 ;
}

/*

40      60

*/