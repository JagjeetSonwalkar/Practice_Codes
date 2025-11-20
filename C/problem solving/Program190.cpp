// Display the values of array and accept the values from user by dynamically .

#include<iostream>
using namespace std;

int main()
{
    int iLenght = 0 , iCnt = 0 ;
    int *iArr = NULL ;

    cout<<"Enter the lenght of Array : \n";
    cin>>iLenght;

    iArr = new int[iLenght];

    cout<<"Enter the Values : \n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    cout<<"Values are : \n";
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        cout<<iArr[iCnt]<<"\t";
    }

    delete []iArr ;

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of Array :
    3
    Enter the Values :
    1
    2
    3
    Values are :
    1       2       3
    
    
    Enter the lenght of Array :
    5
    Enter the Values :
    100
    200
    300
    40
    50
    Values are :
    100     200     300     40      50
   
   
    Enter the lenght of Array :
    2
    Enter the Values :
    10
    20
    Values are :
    10      20
    
    
    Enter the lenght of Array :
    0
    Enter the Values :
    Values are :

*/