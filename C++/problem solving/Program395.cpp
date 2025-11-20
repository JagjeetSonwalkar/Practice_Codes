// Addition of two number 

#include<iostream>
using namespace std ;

double Addition(double dValue1 , double dValue2)
{
    double dSum = 0 ;

    dSum = dValue1 + dValue2 ;

    return dSum ;
}

int main()
{
    double dRet = 0 ;

    dRet = Addition(10.25252525,20.20202020);

    cout<<dRet ;

    return 0 ;
}

/*
    OUTPUT

    30.4545
*/