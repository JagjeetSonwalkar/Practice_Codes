// Display Addition of Two values and get the value from user. 

#include<iostream>

int Addition (int iValue1 , int iValue2)
{
    int iSum = 0 ;

    iSum = iValue1 + iValue2 ;

    return iSum ;
}

using namespace std ;

int main()
{
    int iNum1 = 0 , iNum2 = 0 , iRet = 0 ;

    cout<<"Enter the first number : \n";
    cin>>iNum1 ;

    cout<<"Enter the Second number : \n";
    cin>>iNum2 ;

    iRet = Addition(iNum1,iNum2);

    cout<<"Addition of Number is : "<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Enter the first number :
    10
    Enter the Second number :
    20
    Addition of Number is : 30

    Enter the first number :
    25
    Enter the Second number :
    25
    Addition of Number is : 50

    Enter the first number :
    -10
    Enter the Second number :
    20
    Addition of Number is : 10

*/