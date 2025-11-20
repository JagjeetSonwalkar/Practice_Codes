// Get the number from the user and display the Repeated digits count of '5,6,7,8'.

import java.util.*;

class Arithmatic
{
    public int iValue ;

    public Arithmatic(int A)
    {
        iValue = A ;
    }

    void CountDigits()
    {
        int iDigit = 0 , iCount5 = 0 , iCount6 = 0 , iCount7 = 0 , iCount8 = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit == 5)
            {
                iCount5++;
            }
            else if(iDigit == 6)
            {
                iCount6++;
            }
            else if(iDigit == 7)
            {
                iCount7++;
            }
            else if(iDigit == 8)
            {
                iCount8++;
            }

            iValue = iValue / 10 ;
        }
        System.out.println("Count of Digit '5' is : "+iCount5);
        System.out.println("Count of Digit '6' is : "+iCount6);
        System.out.println("Count of Digit '7' is : "+iCount7);
        System.out.println("Count of Digit '8' is : "+iCount8);
    }
}

class Program248
{
    public static void main(String a[])
    {
        int iNum = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iNum = sobj.nextInt();

        Arithmatic dobj = new Arithmatic(iNum);

        dobj.CountDigits();

    }
}

/*
    OUTPUT

    Enter the Number :
    1254
    Count of Digit '5' is : 1
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 0

    
    Enter the Number :
    12458
    Count of Digit '5' is : 1
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 1

    
    Enter the Number :
    565687
    Count of Digit '5' is : 2
    Count of Digit '6' is : 2
    Count of Digit '7' is : 1
    Count of Digit '8' is : 1

*/