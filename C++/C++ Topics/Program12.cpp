////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms (Abstraction)                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:     // public Access specifer
        int i ;
    private:    // private Access specifer
        int j ;
    protected:  // protected Access specifer
        int k ;

    public:
        Demo()
        {ṁ
            i = 10 ;
            j = 20 ;
            k = 30 ;
        }

    void display()
    {
        cout<<"Demo class : \n";
        cout<<"i public Access specifer : "<<i<<"\n";
        cout<<"j private Access specifer : "<<j<<"\n";
        cout<<"k protected Access specifer : "<<k<<"\n";
    }
};

class DemoX : public Demo
{
    public:     // public Access specifer
        int x ;

        DemoX()
        {
            x = 100 ;
        }

        void displayX()
        {
            cout<<"DemoX class : \n";
            cout<<"x  public Access specifer  :"<<x<<"\n";

            cout<<"i public Access specifer : "<<i<<"\n";
            // cout<<"j private Access specifer : "<<j<<"\n";      // NA
            cout<<"k protected Access specifer : "<<k<<"\n";
        }
};

int main()
{
    // NOTE : In main function 'only' public Access specifer characterstic can be access 

    Demo dobj ;

    dobj.display();

    dobj.i ;
    // dobj.j ;        // NA
    // dobj.k ;        // NA

    /////////////////////////////////////////////////////////////////////////////////////////////

    DemoX dxobj ;

    dxobj.displayX();

    dxobj.x ;
    dxobj.i ;
    // dxobj.j ;       // NA
    // dxobj.k ;       // NA

    return 0 ;
}

/*

Demo class :
i public Access specifer : 10
j private Access specifer : 20
k protected Access specifer : 30
DemoX class :
x  public Access specifer  :100
i public Access specifer : 10
k protected Access specifer : 30

*/