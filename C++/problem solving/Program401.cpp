// Addition of array

#include<iostream>
using namespace std ;

template <class T>
T ArrayAdd (T Arr[] , int iSize)
{
    int iCnt = 0 ;
    T Sum = 0.0f ;

    for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
    {
        Sum = Sum + Arr[iCnt] ;
    }
    return Sum ;
}

int main()
{
    float Array[] = {10.25f,20.22f,30.21f,40.7f};
    float fRet = 0.0f ;
    fRet = ArrayAdd(Array,3);
    cout<<fRet<<"\n";

    int Array1[] = {10,20,30,40};
    int iRet = 0 ;
    iRet = ArrayAdd(Array1,3);
    cout<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    101.38
    100
*/