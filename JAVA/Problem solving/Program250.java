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

        int iCount[] = {0,0,0,0,0,0,0,0,0,0};

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;

            if(iDigit == 0)
            {
                iCount[0]++;
            }
            else if(iDigit == 1)
            {
                iCount[1]++;
            }
            else if(iDigit == 2)
            {
                iCount[2]++;
            }
            else if(iDigit == 3)
            {
                iCount[3]++;
            }
            else if(iDigit == 4)
            {
                iCount[4]++;
            }
            else if(iDigit == 5)
            {
                iCount[5]++;
            }
            else if(iDigit == 6)
            {
                iCount[6]++;
            }
            else if(iDigit == 7)
            {
                iCount[7]++;
            }
            else if(iDigit == 8)
            {
                iCount[8]++;
            }
            else if(iDigit == 9)
            {
                iCount[9]++;
            }

            iValue = iValue / 10 ;
        }
        System.out.println("Count of Digit '0' is : "+iCount[0]);
        System.out.println("Count of Digit '1' is : "+iCount[1]);
        System.out.println("Count of Digit '2' is : "+iCount[2]);
        System.out.println("Count of Digit '3' is : "+iCount[3]);
        System.out.println("Count of Digit '4' is : "+iCount[4]);
        System.out.println("Count of Digit '5' is : "+iCount[5]);
        System.out.println("Count of Digit '6' is : "+iCount[6]);
        System.out.println("Count of Digit '7' is : "+iCount[7]);
        System.out.println("Count of Digit '8' is : "+iCount[8]);
        System.out.println("Count of Digit '9' is : "+iCount[9]);
    }
}

class Program250
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
    Count of Digit '0' is : 0
    Count of Digit '1' is : 1
    Count of Digit '2' is : 1
    Count of Digit '3' is : 0
    Count of Digit '4' is : 1
    Count of Digit '5' is : 1
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 0
    Count of Digit '9' is : 0

    
    Enter the Number :
    84212
    Count of Digit '0' is : 0
    Count of Digit '1' is : 1
    Count of Digit '2' is : 2
    Count of Digit '3' is : 0
    Count of Digit '4' is : 1
    Count of Digit '5' is : 0
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 1
    Count of Digit '9' is : 0

    
    Enter the Number :
    999
    Count of Digit '0' is : 0
    Count of Digit '1' is : 0
    Count of Digit '2' is : 0
    Count of Digit '3' is : 0
    Count of Digit '4' is : 0
    Count of Digit '5' is : 0
    Count of Digit '6' is : 0
    Count of Digit '7' is : 0
    Count of Digit '8' is : 0
    Count of Digit '9' is : 3

*/