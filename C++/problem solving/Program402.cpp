// Addition of array using dynamic approch

#include<iostream>
using namespace std ;

class Array
{
    public:
        int *Arr ;
        int iSize ;

        Array(int iLength)
        {
            iSize = iLength ;
            Arr = new int[iSize]; 
        }

        ~Array()
        {
            delete []Arr ;
        }

        void Accept()
        {
            cout<<"Enter the elements : \n";
            int iCnt = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        int ArrayAdd()
        {
            int iCnt = 0 , iSum = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum ;
        }
};

int main()
{
    int iSize = 0 , iRet = 0 ;

    cout<<"Enter the lenght of array : \n";
    cin>>iSize ;

    Array aobj(iSize) ;

    aobj.Accept();
    iRet = aobj.ArrayAdd();

    cout<<"Add of array element is : "<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Enter the lenght of array :
    3
    Enter the elements :
    10
    20
    30
    Add of array element is : 60


    Enter the lenght of array :
    1
    Enter the elements :
    1
    Add of array element is : 1


    Enter the lenght of array :
    11
    Enter the elements :
    22
    33
    11
    22
    13
    3
    3
    3
    3
    3
    3
    Add of array element is : 119

*/