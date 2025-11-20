/*
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input : 2395
Output: -15 (2- 17)

Input : 1018
Output: 6 (8 - 2)

Input: 8440
Output: 16 (16-0)

Input : 5733
Output: -18 (0 - 18)
*/

import java.util.Scanner ;

class Program39
{
    public static void display(int iValue)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit ;
            }
            else if(iDigit % 2 != 0)
            {
                iSumOdd = iSumOdd + iDigit ;
            }
            else
            {
                //               
            }
            iValue = iValue / 10 ;
        }
        System.out.println("OUTPUT: "+ (iSumEven-iSumOdd));
        System.out.println("Sum of even digits are: "+ iSumEven + "\tSum of Odd digits are: "+iSumOdd);
    }

    public static void main(String[] arg)
    {
        int iNum = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        display(iNum);
    }
}