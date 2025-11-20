// get the input from the user as a number and Display : Addition of its digits.

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
        int iDigit = 0 , iSum = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            iSum = iSum + iDigit ;
            iValue = iValue / 10 ;
        }
        return iSum ;
    }  
}

class Program243
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
    012
    Sum of Digits is : 3

  
    Enter the Number :
    -124
    Sum of Digits is : -7

    
    Enter the Number :
    120
    Sum of Digits is : 3

*/