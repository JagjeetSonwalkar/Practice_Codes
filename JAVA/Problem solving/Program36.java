/*
Write a program which accept number from user and count frequency of 2 in it.
Input: 2395 Output: 1
Input: 1018 Output: 0
Input : 9000 Output: 0
Input: 922432 Output: 3
*/

import java.util.Scanner ;

class Program36
{
    public static int check(int iValue)
    {
        int iDigit = 0, iCount = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit == 2)
            {
                iCount++ ;
            }
            iValue = iValue / 10 ;
        }

        return iCount ;
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0, iRet = 0 ;

        System.out.println("Enter the Number: ");
        iNum = sobj.nextInt();

        iRet = check(iNum);

        System.out.println(iNum+": "+"Frequency count for 2 is: "+iRet);
    }
}