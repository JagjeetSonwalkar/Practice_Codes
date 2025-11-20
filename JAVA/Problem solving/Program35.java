/*
Write a program which accept number from user and check whether it contains 0 in ti or not.
*/

import java.util.Scanner ;

class Program35
{
    public static Boolean checkZero(int iValue)
    {
        int iDigit = 0 ;
        Boolean bResult = false ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit == 0)
            {
                bResult = true ;
                break ;
            }
            iValue = iValue / 10 ;
        }

        return bResult ;
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0 ;
        Boolean bRet = false ;

        System.out.println("Enter the Number: ");
        iNum = sobj.nextInt();

        bRet = checkZero(iNum);

        if(bRet == true)
        {
            System.out.println("It Contain Zero");
        }
        else
        {
            System.out.println("! It DOES'T Contain Zero !");
        }
    }
}