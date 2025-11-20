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

    iRet=Addition(10,20);

    cout<<iRet;

    return 0 ;
}

/*
    OUTPUT

    30
*/