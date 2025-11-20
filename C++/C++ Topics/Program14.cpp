////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                              static characterstic and behaviour                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:
        static int i ;          //  static characterstic
        int j ;
        int k ;

        Demo()
        {
            j = 0 ;
            k = 0 ;
        }

        void fun()
        {
            i++ ;
            j++ ;
            k++ ;
        }

        static void gun()       //  static behaviour
        {
            cout<<"inside gun()\n";
            i++ ;
            cout<<"exit gun()\n";
        }
};

int Demo :: i = 30 ;           // insitilization of static character 

int main()
{
   Demo dobj ;

   dobj.fun() ;

   cout<<"i value is : "<<dobj.i<<"\n";
   cout<<"j value is : "<<dobj.j<<"\n";
   cout<<"k value is : "<<dobj.k<<"\n";

   dobj.gun();

   cout<<"i value is : "<<dobj.i<<"\n";

    return 0 ;
}

/*

i value is : 31
j value is : 1
k value is : 1
inside gun()
exit gun()
i value is : 32

*/