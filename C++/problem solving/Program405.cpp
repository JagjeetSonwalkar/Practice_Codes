// Addition of array using dynamic approch

#include<iostream>
using namespace std ;

class Array                                                 
{
    public:
        float *Arr ;
        int iSize ;

        Array(int iLength);                 

        ~Array();

        void Accept();              // function declaration

        void Display();             // function declaration

        float ArrayAdd();            // function declaration
};

Array :: Array(int iLength)
{
    iSize = iLength ;
    Arr = new float[iSize]; 
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

float Array :: ArrayAdd()                               // function defination
{
    int iCnt = 0 ;
    float fSum = 0.0f ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum ;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0 ;
    float fRet = 0.0f ;

    cout<<"Enter the lenght of array : \n";
    cin>>iSize ;

    Array aobj(iSize) ;

    aobj.Accept();
    aobj.Display();
    fRet = aobj.ArrayAdd();

    cout<<"Add of array element is : "<<fRet<<"\n";

    return 0 ;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    OUTPUT

    Enter the lenght of array :
    3
    Enter the elements :
    10.25
    10.20
    10.10
    Elements of Array are :
    10.25   10.2    10.1
    Add of array element is : 30.55

*/