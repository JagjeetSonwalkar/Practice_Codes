// Display factors of a number and get the number from the user using object oriented apprpoch.

#include<iostream>
using namespace std ;

class Arithematic
{
    public:
        int iValue ;

        Arithematic(int A)
        {
            iValue = A ;
        }

        void factors()
        {
            int iCnt = 0 ;

            cout<<"Factors Are :\n";

            for(iCnt = 1 ; iCnt <= iValue/2 ; iCnt++)
            {
                if((iValue % iCnt ) == 0)
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iNum = 0 ;

    cout<<"Enter the Number : \n";
    cin>>iNum;

    Arithematic aobj(iNum);
    aobj.factors();

    return 0 ;
}

/*
    OUTPUT

    Enter the Number :
    24
    1       2       3       4       6       8       12
   
    Enter the Number :
    28
    1       2       4       7       14
   
    Enter the Number :
    30
    1       2       3       5       6       10      15
    
    Enter the Number :
    6
    1       2       3

*/