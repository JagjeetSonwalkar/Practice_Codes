// Display Addition of Two values and get the value from user using Object oritented approch . 

#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iValue1 ;
        int iValue2 ;

        Arithematic(int A , int B)
        {
            iValue1 = A ;
            iValue2 = B ;
        }

        int Addition()
        {
            int iSum = 0 ;

            iSum = iValue1 + iValue2 ;

            return iSum ;
        }
};

int main()
{
    int iNum1 = 0 , iNum2 = 0 , iRet = 0 ;

    cout<<"Enter the first Number : \n";
    cin>>iNum1;

    cout<<"Enter the Second Number : \n";
    cin>>iNum2;

    Arithematic aobj(iNum1,iNum2);

    iRet = aobj.Addition();

    cout<<"Addition of two Number : "<<iRet<<"\n";

    return 0 ;
}

/*
    OUTPUT

    Enter the First Number :
    10
    Enter the Second Number :
    20
    Addition of two number is : 30

    
    Enter the First Number :
    20
    Enter the Second Number :
    60
    Addition of two number is : 80

    
    Enter the First Number :
    -50
    Enter the Second Number :
    10
    Addition of two number is : -40

    
    Enter the First Number :
    50
    Enter the Second Number :
    -20
    Addition of two number is : 30

*/