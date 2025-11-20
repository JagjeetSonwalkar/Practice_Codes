// Addition of two number 

#include<iostream>
using namespace std ;

float Addition(float fValue1 , float fValue2)
{
    float fSum = 0.0f ;

    fSum = fValue1 + fValue2 ;

    return fSum ;
}

int main()
{
    float fRet = 0.0f ;

    fRet = Addition(10.25f,20.20f);

    cout<<fRet ;

    return 0 ;
}

/*
    OUTPUT

    30.45
*/