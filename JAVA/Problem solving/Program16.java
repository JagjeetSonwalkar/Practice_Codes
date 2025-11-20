// Accept number from user and display all its non factors.

import java.util.Scanner;

class Program16
{
    public static void nonFactor(int iValue)
    {
        int i = 0 ;

        for(i = 1; i <= iValue ; i++)
        {
            if(!(iValue%i == 0))
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

        nonFactor(iNum);
    }
}