// Addition of two number 

#include<iostream>
using namespace std ;

int Addition(int iValue1 , int iValue2)
{
    int iSum = 0 ;

    iSum = iValue1 + iValue2 ;

    return iSum ;
}

int main()
{
    int iRet = 0 ;

    iRet = Addition(10,20);

    cout<<iRet ;

    return 0 ;
}

/*
    OUTPUT

    30
*/