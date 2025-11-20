// Display factors of a number and get the number from the user.

#include<iostream>
using namespace std;

void factors (int iValue)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt < iValue ; iCnt++)      // O(N)
    {
        if(iValue % iCnt == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
}

int main()
{
    int iNum = 0 ;

    cout<<"Enter the Number : \n";
    cin>>iNum ;

    cout<<"factors of a Number is : \n";
    factors(iNum);

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    8
    factors of a Number is :
    1       2       4


    Enter the Number :
    18
    factors of a Number is :
    1       2       3       6       9
   
   
    Enter the Number :
    20
    factors of a Number is :
    1       2       4       5       10

*/