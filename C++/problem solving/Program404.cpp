// Addition of array using dynamic approch

#include<iostream>
using namespace std ;

class Array                                                 
{
    public:
        int *Arr ;
        int iSize ;

        Array(int iLength);                 

        ~Array();

        void Accept();              // function declaration

        void Display();             // function declaration

        int ArrayAdd();            // function declaration
};

Array :: Array(int iLength)
{
    iSize = iLength ;
    Arr = new int[iSize]; 
}

Array :: ~Array()
{
    delete []Arr ;
}

/*
  return value , class name , scope resolution , function name 
  void              Array        ::                Accept()
*/
void Array :: Accept()                                  // function defination
{
    cout<<"Enter the elements : \n";
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array :: Display()                               // function defination
{
    cout<<"Elements of Array are : \n";
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int Array :: ArrayAdd()                               // function defination
{
    int iCnt = 0 , iSum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum ;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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