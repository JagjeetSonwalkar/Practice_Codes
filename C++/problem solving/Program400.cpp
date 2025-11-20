// Addition of array

#include<iostream>
using namespace std ;

double ArrayAdd (double Arr[] , int iSize)
{
    int iCnt = 0 ;
    double Sum = 0.0f ;

    for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
    {
        Sum = Sum + Arr[iCnt] ;
    }
    return Sum ;
}

int main()
{
    double Array[] = {10.25123,20.22321,30.21123,40.7321};
    double Ret = 0.0 ;
    Ret = ArrayAdd(Array,3);
    cout<<Ret<<"\n";

    return 0 ;
}

/*
    OUTPUT

    101.418
*/