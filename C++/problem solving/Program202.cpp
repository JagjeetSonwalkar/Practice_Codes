// get the number from the user and convert into binary number

#include<iostream>
using namespace std ;

void DisplayBinary(int iNo)
{
    int iDigit = 0 ;

    while(iNo != 0)
    {
        iDigit = iNo % 2 ;
        cout<<iDigit;
        iNo = iNo /2 ;
    }

    cout<<"\n";
}

int main()
{
    int iNo = 0 ;

    cout<<"Enter the Number : \n";
    cin>>iNo ;

    DisplayBinary(iNo);
    

    return 0 ;
}