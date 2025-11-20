// Addition of array

#include<iostream>
using namespace std ;

int ArrayAdd (int Arr[] , int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    }
    return iSum ;
}

int main()
{
    int Array[] = {10,20,30,40};

    int iRet = 0 ;
    
    iRet = ArrayAdd(Array,3);

    cout<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    100
*/