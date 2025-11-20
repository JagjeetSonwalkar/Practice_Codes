// Get the full name from user

#include<iostream>
using namespace std;

int main()
{
    char Arr[30] ;

    cout<<"Enter the name :";
    cin.getline(Arr,30);

    cout<<"Your name is : "<<Arr;

    return 0 ;
}

/*

Enter the name :My name is Rohit.
Your name is : My name is Rohit.

*/