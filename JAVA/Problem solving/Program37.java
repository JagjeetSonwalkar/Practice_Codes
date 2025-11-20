/*
Write a program which accept number from user and count frequency of such a digits which are less than 6.
Input: 2395 Output: 3
Input : 1018 Output: 3
Input : 9440 Output: 3
Input: 96672 Output: 1

*/

import java.util.Scanner ;

class Program37
{
    public static int check(int iValue)
    {
        int iDigit = 0, iCount = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit < 6)
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

        System.out.println(iNum+": "+"Frequency count for digit which is less then 6: "+iRet);
    }
}