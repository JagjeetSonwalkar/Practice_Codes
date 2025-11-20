// Addition of array using dynamic approch using genric Approch

/*
    1> function declaration

    2> function defination

    3> write the template on every functions and class i.e, template <class T>

    4> Replace the datatype with T which are neccesary i.e, int , float , double ---> T

    5> class of array is specfic then convert into genric , So mention 'captial T inside Angular bracket' after class name 
        i.e, void Array :: Accept() --------> void Array<T> :: Accept() 

    6> Compiler dont know which type of data we want to replace with captial T , So we have mention the data_type before the object
        i.e, Array aobj(iSize); ------------> Array <float>aobj(iSize) ;    
*/

#include<iostream>
using namespace std ;

template <class T>
class Array                                                 
{
    public:
        T *Arr ;                     
        int iSize ;

        Array(int iLength);           // Constructor declaration      

        ~Array();                     // distructor declaration

        void Accept();                // function declaration

        void Display();               // function declaration

        T ArrayAdd();                 // function declaration
};

template <class T>
Array<T> :: Array(int iLength)          // Constructor defination
{
    iSize = iLength ;
    Arr = new T[iSize]; 
}

template <class T>
Array<T> :: ~Array()                   // Distructor declaration
{
    delete []Arr ;
}

/*
  return value , class name , scope resolution , function name 
  void              Array        ::                Accept()
*/
template <class T>
void Array<T> :: Accept()                                  // function defination
{
    cout<<"Enter the elements : \n";
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void Array<T> :: Display()                               // function defination
{
    cout<<"Elements of Array are : \n";
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
T Array<T> :: ArrayAdd()                               // function defination
{
    int iCnt = 0 ;
    T Sum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum ;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0 ;

    cout<<"Enter the lenght of array : \n";
    cin>>iSize ;

    // Q> Compiler dont know which type of data we want to replace with captial T , So we have mention the data_type before the object
    // Array aobj(iSize);
    Array <int>aobj(iSize) ;    
    
    int iRet = 0 ;

    aobj.Accept();
    aobj.Display();
    iRet = aobj.ArrayAdd();

    cout<<"Addition of array element is : "<<iRet<<"\n";

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
    Addition of array element is : 60

*/