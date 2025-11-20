#include<iostream>

using namespace std;

int main()
{
    int iNo1 = 0 , iNo2 = 0 , iAns = 0 ;

    iNo1 = 13 ;
    iNo2 = 24 ;

    iAns = iNo1 & iNo2 ;
    cout<<"Bitwise & : "<<iAns<<"\n";

    iAns = iNo1 | iNo2 ;
    cout<<"Bitwise | : "<<iAns<<"\n";

    iAns = iNo1 ^ iNo2 ;
    cout<<"Bitwise ^ : "<<iAns<<"\n";

    return 0 ;
}