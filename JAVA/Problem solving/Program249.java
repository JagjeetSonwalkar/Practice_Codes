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
        int iDigit = 0 ;
        int iCount0 = 0 , iCount1 = 0 , iCount2 = 0 , iCount3 = 0 , iCount4 = 0 , iCount5 = 0 , iCount6 = 0 , iCount7 = 0 , iCount8 = 0 , iCount9 = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;

            if(iDigit == 0)
            {
                iCount0++;
            }
            else if(iDigit == 1)
            {
                iCount1++;
            }
            else if(iDigit == 2)
            {
                iCount2++;
            }
            else if(iDigit == 3)
            {
                iCount3++;
            }
            else if(iDigit == 4)
            {
                iCount4++;
            }
            else if(iDigit == 5)
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
            else if(iDigit == 9)
            {
                iCount9++;
            }

            iValue = iValue / 10 ;
        }
        System.out.println("Count of Digit '0' is : "+iCount0);
        System.out.println("Count of Digit '1' is : "+iCount1);
        System.out.println("Count of Digit '2' is : "+iCount2);
        System.out.println("Count of Digit '3' is : "+iCount3);
        System.out.println("Count of Digit '4' is : "+iCount4);
        System.out.println("Count of Digit '5' is : "+iCount5);
        System.out.println("Count of Digit '6' is : "+iCount6);
        System.out.println("Count of Digit '7' is : "+iCount7);
        System.out.println("Count of Digit '8' is : "+iCount8);
        System.out.println("Count of Digit '9' is : "+iCount9);
    }
}

class Program249
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
    125463
    Count of Digit '0' is : 0
    Count of Digit '1' is : 1
    Count of Digit '2' is : 1
    Count of Digit '3' is : 1
    Count of Digit '4' is : 1
    Count of Digit '5' is : 1
    Count of Digit '6' is : 1
    Count of Digit '7' is : 0
    Count of Digit '8' is : 0
    Count of Digit '9' is : 0

    
    Enter the Number :
    8421236
    Count of Digit '0' is : 0
    Count of Digit '1' is : 1
    Count of Digit '2' is : 2
    Count of Digit '3' is : 1
    Count of Digit '4' is : 1
    Count of Digit '5' is : 0
    Count of Digit '6' is : 1
    Count of Digit '7' is : 0
    Count of Digit '8' is : 1
    Count of Digit '9' is : 0

    
    Enter the Number :
    100
    Count of Digit '0' is : 2
    Count of Digit '1' is : 1
    Count of Digit '2' is : 0
    Count of Digit '3' is : 0
    Count of Digit '4' is : 0
    Count of Digit '5' is : 0
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 0
    Count of Digit '9' is : 0

*/