// Display the values of array and Count of Even number and accept the values from user by dynamically using Oject Oriented .

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize ;
        int *iArr ;

        Array(int A)
        {
            iSize = A ;
            iArr = new int[iSize] ;
        }

        ~Array()
        {
            delete []iArr ;
        }

        void Accept()
        {
            cout<<"Enter the Values : \n";
            int iCnt = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>iArr[iCnt];
            }
        }

        void Display()
        {
            cout<<"The Value are : \n";
            int iCnt = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<iArr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int EvenCount()
        {
            int iCnt = 0 , iCount = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if( (iArr[iCnt] % 2 ) == 0)
                {
                    iCount++ ;
                }
            }
            return iCount ;
        }
};

int main()
{
    int iLenght = 0 , iRet = 0 ;

    cout<<"Enter the lenght : \n";
    cin>>iLenght;

    Array aobj(iLenght);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.EvenCount();
    
    cout<<"Count of Even Values is : "<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght :
    3
    Enter the Values :
    1
    2
    3
    The Value are :
    1       2       3
    Count of Even Values is : 1

    
    Enter the lenght :
    5
    Enter the Values :
    2
    4
    6
    8
    9
    The Value are :
    2       4       6       8       9
    Count of Even Values is : 4

    
    Enter the lenght :
    3
    Enter the Values :
    3
    9
    27
    The Value are :
    3       9       27
    Count of Even Values is : 0

*/