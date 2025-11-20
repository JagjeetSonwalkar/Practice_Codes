#include<iostream>
using namespace std ;

template <class T>
T Addition(T Value1 , T Value2)
{
    T Sum = Value1 + Value2 ;
    return Sum ;
}

int main()
{
    int iRet = 0 ;
    float fRet = 0.0f ;
    double dRet = 0.0 ;

    iRet=Addition(10,20);
    cout<<iRet<<"\n";

    fRet=Addition(10.02f,20.25f);
    cout<<fRet<<"\n";

    dRet=Addition(10.2321458,20.12345678);
    cout<<dRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    30
    30.27
    30.3556
*/