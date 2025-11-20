// Display factor and addition of even factor values  and get the Value from the user using object oriented programming (OOP) .

import java.util.*;

class Arithmatic
{
    public int iValue ;

    public Arithmatic(int A)
    {
        iValue = A ;
    }

    int SumofEvenFactor ()
    {
        int iCnt = 0 , iSum = 0 ;

        if(iValue % 2 != 0)
        {
            return 0 ;
        }

        System.out.println("Factors are : ");
        for(iCnt = 1 ; iCnt <= ( iValue / 2 ) ; iCnt++)
        {
            if(( iValue%iCnt ) == 0 )
            {
                System.out.println(iCnt);
                if(iCnt % 2 == 0)
                {
                    iSum = iSum + iCnt ;
                }
            }
        } 
        return iSum ;
    }
}

class Program239
{
    public static void main(String fa[])
    {
        int iNum = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        iNum = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNum);

        iRet = aobj.SumofEvenFactor();

        System.out.println("Sum of Even Value is : "+iRet);

    }
}

/*
    OUTPUT

    Enter the Number :
    3
    Sum of Even Value is : 0


    Enter the Number :
    9
    Sum of Even Value is : 0


    Enter the Number :
    12
    Factors are :
    1
    2
    3
    4
    6
    Sum of Even Value is : 12


    Enter the Number :
    15
    Sum of Even Value is : 0


    Enter the Number :
    14
    Factors are :
    1
    2
    7
    Sum of Even Value is : 2

*/