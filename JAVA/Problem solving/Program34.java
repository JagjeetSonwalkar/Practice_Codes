/* 
write a program which accept number from user and display its digits in reverse order.
*/

import java.util.Scanner ;

class Program34
{
    public static void digitReverse(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue ;
        }

        int iDigit = 0 ;

        while(iValue != 0)
        {
            iDigit = iValue % 10 ;
            System.out.print(iDigit+"\t");
            iValue = iValue / 10 ;
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0 ;

        System.out.println("Enter the Number: ");
        iNum = sobj.nextInt();

        digitReverse(iNum);
    }
}