// Display Addition of Two values and get the value from user.

#include<iostream>

using namespace std ;

int main()
{
    int iNum1 = 0 , iNum2 = 0 , iSum = 0 ;

    cout<<"Enter the first number : \n";
    cin>>iNum1 ;

    cout<<"Enter the Second number : \n";
    cin>>iNum2 ;

    iSum = iNum1 + iNum2 ;

    cout<<"Addition of Number is : "<<iSum<<"\n";

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