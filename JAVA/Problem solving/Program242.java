// get the input from the user as a number and Display : multiplaction its digits.

import java.util.*;

class Arithmatic
{
    public int iValue ;

    public Arithmatic (int A)
    {
        iValue = A ;
    }

    int MulDigit ()
    {
        int iDigit = 0 ;
        int iMul = 1 ;

        System.out.println("Digits are :");
        while( iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit != 0)
            {
                iMul = iMul * iDigit ;
            }
            System.out.print(iDigit+"\t");
            iValue = iValue / 10 ;
        }
        System.out.println();
        return iMul ;
    }
}

class Program242
{
    public static void main (String dd[])
    {
        int iNo = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo);

        iRet = aobj.MulDigit();

        System.out.println("Multiplication of Digits is : "+iRet);

    }
}

/*
    OUTPUT

    Enter the Number :
    100
    Digits are :
    0       0       1
    Multiplication of Digits is : 0

  
    Enter the Number :
    125
    Digits are :
    5       2       1
    Multiplication of Digits is : 10


    Enter the Number :
    25
    Digits are :
    5       2
    Multiplication of Digits is : 10

    
    Enter the Number :
    5
    Digits are :
    5
    Multiplication of Digits is : 5

*/