// Get the number from the user and display the all Repeated digits count .

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
        int iDigit = 0 , iCnt = 0 ;

        int iCount[] = {0,0,0,0,0,0,0,0,0,0};

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            iCount[iDigit]++ ;
            iValue = iValue / 10 ;
        }

        for(iCnt = 0 ; iCnt < 9 ; iCnt++)
        {
            if(iCount[iCnt] != 0)
            {
                System.out.println("Count of Digit '" +iCnt+"' is : "+iCount[iCnt]);
            }
        } 
    }
}

class Program252
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
    12547
    Count of Digit '1' is : 1
    Count of Digit '2' is : 1
    Count of Digit '4' is : 1
    Count of Digit '5' is : 1
    Count of Digit '7' is : 1

    Enter the Number :
    125874
    Count of Digit '1' is : 1
    Count of Digit '2' is : 1
    Count of Digit '4' is : 1
    Count of Digit '5' is : 1
    Count of Digit '7' is : 1
    Count of Digit '8' is : 1

    Enter the Number :
    8421236
    Count of Digit '1' is : 1
    Count of Digit '2' is : 2
    Count of Digit '3' is : 1
    Count of Digit '4' is : 1
    Count of Digit '6' is : 1
    Count of Digit '8' is : 1

*/