// get the number from the user and convert into binary number

#include<iostream>
using namespace std ;

int main()
{
    int iNo = 0 ;
    int iDigit = 0 ;

    iNo = 83 ;

    while(iNo != 0)
    {
        iDigit = iNo % 2 ;
        cout<<iDigit;
        iNo = iNo /2 ;
    }

    cout<<"\n";

    return 0 ;
}