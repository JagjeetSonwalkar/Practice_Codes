////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                               object oriented paradigms ( Function Overloading )                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

class Demo
{
    public:

        // Addition@ii
        int Addition(int A , int B)         
        {
            printf(" int Addition(int A , int B)\n");
            return A+B ;
        }

        // Addition@iii
        int Addition(int A , int B , int C)     
        {
            printf("int Addition(int A , int B , int C)\n");
            return A+B+C ;
        }

        // Addition@ff
        float Addition(float A , float B)
        {
            printf("float Addition(float A , float B)\n");
            return A+B ;
        }

        // Addition@fff
        float Addition(float A , float B , float C)
        {
            printf("float Addition(float A , float B , float C)\n");
            return A+B ;
        }

        // Addition@dd
        double Addition(double A , double B)
        {
            printf("double Addition(double A , double B)\n");
            return A+B ;
        }

        // Addition@ddd
        double Addition(double A , double B , double C)
        {
            printf("double Addition(double A , double B , double C)\n");
            return A+B ;
        }

        /*
            We can overload the function by changing the No. of arguments , datatypes of arguments , sequence of the arguments  if it different

            But we cannot overload the function by changing the 'return value datatypes'
        */
};

int main()
{
    float fRet = 0 ;
    
    Demo dobj ;

    fRet = dobj.Addition(10.20f,10.12f);
    printf("%f\n",fRet);

    dobj.Addition(10.25,10.21,10.22);
    dobj.Addition(10.25,12.30);
    dobj.Addition(15,16,50);
    dobj.Addition(10.2f,1.0f,0.22f);
    dobj.Addition(10,11);
  
    return 0 ;
}

/*

Inside fun function.
Size of class Demo is : 8

*/