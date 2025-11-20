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

        void Display()
        {
            cout<<"Elements of Array are : \n";
            int iCnt = 0 ;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
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
    aobj.Display();
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
    Elements of Array are :
    10      20      30
    Add of array element is : 60

*/