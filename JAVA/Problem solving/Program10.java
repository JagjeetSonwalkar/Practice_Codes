/*
write a program which accept one number from user and print that number of even number.
input : 7
o/p : 2 4 6 8 10 12 14
*/

import java.util.Scanner;

class Program10
{
    public static void display(int iValue)
    {
        int i = 0;

        for(i = 1; i <= iValue*2 ; i++)
        {
            if(i%2 == 0)
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

        display(iNum);


    }
}