// Display Value after applying power on it and get the Value and power from the user using object oriented programming (OOP) .

/*
    A = 10
    B = 5;

    Ans

    10 * 10 * 10 * 10 * 10

    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
*/

import java.util.*;

class Arithmatic
{
    public int iValue ;
    public int iPow ;

    public Arithmatic(int A , int B)
    {
        iValue = A ;
        iPow = B ;
    }

    public int DisplayPow ()
    {
        int iCnt = 0 ;

        int iResult = 1 ;

        for(iCnt = 1 ; iCnt <= iPow ; iCnt++)
        {
            iResult = iResult * iValue ;
        }

        return iResult ;
    }
}

class Program237
{
    public static void main(String Aa[])
    {

        int iNum = 0 , iPower = 0 ;
        long iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        iNum = sobj.nextInt();

        System.out.println("Enter the Power :");
        iPower = sobj.nextInt();

        Arithmatic pobj = new Arithmatic(iNum,iPower);

        iRet = pobj.DisplayPow();

        System.out.println("The Answer is : "+iRet);

    }
}

/*
    output

    Enter the Number :
    2
    Enter the Power :
    2
    The Answer is : 4

   
    Enter the Number :
    2
    Enter the Power :
    6
    The Answer is : 64


    Enter the Number :
    50
    Enter the Power :
    5
    The Answer is : 312500000

*/