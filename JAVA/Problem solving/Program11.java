/*
write a program which accept one number from user and print even factor of that number.
input : 24
o/p : 1 2 4 6 8 12
*/

import java.util.Scanner;

class Program11
{
    public static void evenFactor(int iValue)
    {
        if(iValue < 0)
        {
            iValue = -iValue ;
        }

        int i = 0 ;
        System.out.print("1\t");
        for(i = 1; i <= iValue/2; i++)
        {
            if((iValue%i == 0) && (i % 2 == 0))
            {
                System.out.print(i + "\t");
            }
        }
    }

    public static void main(String[] arg)
    {
        int iNum = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        evenFactor(iNum);

    }
}