/*
Accept number from user and display its factors in descreasing order.
input : 12 output : 6 4 3 2 1
input : 13 output : 1
*/

import java.util.Scanner;

class Program15
{
    public static void factorDes(int iValue)
    {
        int i = 0 ;

        for(i = iValue/2 ; i >= 1 ; i--)
        {
            if(iValue%i == 0)
            {
                System.out.print(i + "\t");
            }
        }
    }

    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        factorDes(iNum);
    }
}