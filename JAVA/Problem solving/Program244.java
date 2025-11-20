// get the input from the user as a number and Display : Addition of its digits. (Without using iDigit variable)

import java.util.*;

class Arithmatic
{
    public int iValue ;

    public Arithmatic (int A)
    {
        iValue = A ;
    }

    int SumDigit ()
    {
        int iSum = 0 ;

        while(iValue != 0)
        {
            iSum = iSum + (iValue % 10) ;
            iValue = iValue / 10 ;
        }
        return iSum ;
    }  
}

class Program244
{
    public static void main (String dd[])
    {
        int iNo = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo);

        iRet = aobj.SumDigit();

        System.out.println("Sum of Digits is : "+iRet);
    }
}

/*
    OUTPUT

    Enter the Number :
    125
    Sum of Digits is : 8

    
    Enter the Number :
    1254
    Sum of Digits is : 12

   
    Enter the Number :
    100
    Sum of Digits is : 1

*/