// Display the values of array in Reverse order and Count of Even number and accept the values from user by dynamically using Oject Oriented .

#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *iArr;

        Array(int A)
        {
            iSize = A ;
            iArr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the Values :\n";

            int iCnt = 0 ;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>iArr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Values are : \n";

            int iCnt = 0 ;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<iArr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        void Reverse()
        {
            int iStart = 0 ;
            int iEnd = 0 ;
            iEnd = iSize - 1 ;
            int iTemp = 0 ;

            while(iStart < iEnd)
            {
                iTemp = iArr[iStart] ;
                iArr[iStart] = iArr[iEnd] ;
                iArr[iEnd] = iTemp ;

                iStart++;
                iEnd--;
            }
        }
};

int main()
{
    int iLenght = 0 ;

    cout<<"Enter the size which you want .\n";
    cin>>iLenght;

    Array aobj(iLenght);

    aobj.Accept();
    aobj.Display();
    aobj.Reverse();

    cout<<"After Reversing the Array : \n";
    aobj.Display();


    return 0 ;
}