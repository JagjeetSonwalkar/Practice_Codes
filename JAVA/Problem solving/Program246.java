// Get the number from the user and display the Repeated digits count of '7'.

import java.util.*;

class Arithmatic
{
    public int iValue ;

    public Arithmatic(int A)
    {
        iValue = A ;
    }

    int CountDigits()
    {
        int iDigit = 0 , iCount = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit == 7)
            {
                iCount++;
            }
            iValue = iValue / 10 ;
        }
        return iCount ;
    }
}

class Program246
{
    public static void main(String a[])
    {
        int iNum = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iNum = sobj.nextInt();

        Arithmatic dobj = new Arithmatic(iNum);

        iRet = dobj.CountDigits();

        System.out.println("Count of Digit '7' is : "+iRet);

    }
}

/*
    OUTPUT

    Enter the Number :
    12578
    Count of Digit '7' is : 1

    
    Enter the Number :
    777
    Count of Digit '7' is : 3

    
    Enter the Number :
    1245
    Count of Digit '7' is : 0

*/