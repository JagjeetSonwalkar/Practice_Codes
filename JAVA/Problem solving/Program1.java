// Program to divide two numbers

import java.util.Scanner;

class Program1
{
    public static int divide(int iValue1 , int iValue2)
    {
        if(iValue2 <= 0)
        {
            return -1 ;
        }

        int iResult = 0 ;
        iResult = iValue1 / iValue2 ;
        return iResult ;
    }

    public static void main(String[] arg)
    {
        int no1 = 0 , no2 = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        no1 = sobj.nextInt();

        System.out.println("Enter number to divide by: ");
        no2 = sobj.nextInt();

        iRet = divide(no1, no2);

        System.out.println("Divition is: "+iRet);
    }
}