// Addition of array

#include<iostream>
using namespace std ;

float ArrayAdd (float Arr[] , int iSize)
{
    int iCnt = 0 ;
    float fSum = 0.0f ;

    for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
    {
        fSum = fSum + Arr[iCnt] ;
    }
    return fSum ;
}

int main()
{
    float Array[] = {10.25f,20.22f,30.21f,40.7f};

    float fRet = 0.0f ;
    
    fRet = ArrayAdd(Array,3);

    cout<<fRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    101.38
*/