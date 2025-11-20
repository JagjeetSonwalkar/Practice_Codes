// Display the values of array and accept the values from user by dynamically using Oject Oriented .

#include<iostream>
using namespace std ;

class Array
{
    public:
        int iSize ;
        int *iArr ;

        Array(int A )
        {
            iSize = A ;
            iArr = new int[iSize];
        }

        ~Array()
        {
            delete []iArr ;
        }

        void Accept()
        {
            int iCnt = 0 ;
            cout<<"Enter the Value : \n";

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>iArr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0 ;
            cout<<"Value are : \n";

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<iArr[iCnt]<<"\t";
            }
        }

};

int main()
{
    int iLenght = 0 ;

    cout<<"Enter the Length : \n";
    cin>>iLenght;

    Array aobj(iLenght);

    aobj.Accept();
    aobj.Display();

    return 0 ;
}

/*
    OUTPUT

    Enter the size of array to store the values.
    3
    Enter the Value :
    10
    20
    30
    Value is :
    10      20      30


    Enter the size of array to store the values.
    5
    Enter the Value :
    10
    2
    30
    4
    5
    Value is :
    10      2       30      4       5

*/